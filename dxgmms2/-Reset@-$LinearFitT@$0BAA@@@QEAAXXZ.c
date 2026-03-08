/*
 * XREFs of ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1C0011828
 * Callers:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0009F90 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C00117E4 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x1C0034CCC (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 *     VidSchInitializeAdapter @ 0x1C00B5B90 (VidSchInitializeAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LinearFitT<256>::Reset(__int64 a1)
{
  __int64 result; // rax

  (**(void (__fastcall ***)(__int64))a1)(a1);
  result = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  return result;
}
