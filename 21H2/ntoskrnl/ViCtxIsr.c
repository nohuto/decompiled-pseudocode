/*
 * XREFs of ViCtxIsr @ 0x140AA1E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViCtxCaptureInitialIsrState @ 0x140AA1B9C (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AA1C3C (ViCtxCheckAndReleaseIsrState.c)
 */

char __fastcall ViCtxIsr(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v5; // rsi
  char v6; // bl
  __int64 v7; // r8

  v5 = ViCtxCaptureInitialIsrState(a1, a2, a3);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1, *(_QWORD *)(a2 + 8));
  if ( v5 )
    ViCtxCheckAndReleaseIsrState((__int64)v5, *(const void **)a2, v7);
  return v6;
}
