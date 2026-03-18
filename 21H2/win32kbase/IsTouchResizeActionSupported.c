/*
 * XREFs of IsTouchResizeActionSupported @ 0x1C023E2E4
 * Callers:
 *     ?CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z @ 0x1C01BFADC (-CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z.c)
 *     ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01BFBD4 (-CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsTouchResizeActionSupported()
{
  if ( qword_1C029D838 )
    return qword_1C029D838();
  else
    return 3221225659LL;
}
