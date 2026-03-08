/*
 * XREFs of ?GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C000D5A8
 * Callers:
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1C000CE00 (NtOpenCompositionSurfaceRealizationInfo.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetSwapChainRealizationInfo(
        CCompositionSurface *this,
        unsigned __int64 a2,
        unsigned int *a3,
        struct CSM_REALIZATION_INFO *a4)
{
  __int64 result; // rax
  struct CCompositionBuffer *v7; // rbx
  struct CCompositionBuffer *v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  result = CCompositionSurface::FindBuffer(this, a2, &v8);
  if ( (int)result >= 0 )
  {
    v7 = v8;
    if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 88LL))(v8) )
      return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _QWORD, unsigned int *, struct CSM_REALIZATION_INFO *))(*(_QWORD *)v7 + 80LL))(
               v7,
               0LL,
               a3,
               a4);
    else
      return 3221225485LL;
  }
  return result;
}
