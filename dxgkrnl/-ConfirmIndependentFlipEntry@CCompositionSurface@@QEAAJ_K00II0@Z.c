/*
 * XREFs of ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C007B990
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00789DC (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::ConfirmIndependentFlipEntry(
        CCompositionSurface *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  int Buffer; // ebx
  __int64 v9; // r11
  struct CCompositionBuffer *v11; // [rsp+40h] [rbp-18h] BYREF

  v11 = 0LL;
  Buffer = CCompositionSurface::FindBuffer(this, a2, &v11);
  if ( Buffer >= 0 )
    (*(void (__fastcall **)(struct CCompositionBuffer *, __int64, __int64, _QWORD, unsigned int, unsigned __int64))(*(_QWORD *)v11 + 208LL))(
      v11,
      a3,
      v9,
      a5,
      a6,
      a7);
  return (unsigned int)Buffer;
}
