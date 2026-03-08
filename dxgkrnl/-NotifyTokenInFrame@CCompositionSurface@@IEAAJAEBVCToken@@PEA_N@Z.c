/*
 * XREFs of ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C007C038
 * Callers:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00793E8 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1C007C454 (-ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::NotifyTokenInFrame(
        CCompositionSurface *this,
        const struct CToken *a2,
        bool *a3)
{
  int Buffer; // ebx
  __int64 v6; // r11
  struct CCompositionBuffer *v7; // r14
  struct CCompositionBuffer *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  *a3 = 0;
  Buffer = CCompositionSurface::FindBuffer(this, *((_QWORD *)a2 + 5), &v9);
  if ( Buffer >= 0 )
  {
    v7 = v9;
    Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64, bool *))(*(_QWORD *)v9 + 128LL))(
               v9,
               v6,
               a3);
    if ( Buffer >= 0 && *a3 )
      CCompositionSurface::ReleaseOlderInactiveBuffers(this, v7);
  }
  return (unsigned int)Buffer;
}
