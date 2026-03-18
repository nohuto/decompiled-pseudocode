/*
 * XREFs of IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C0016FC4
 * Callers:
 *     GdiProcessCallout @ 0x1C0016BD0 (GdiProcessCallout.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C005A184 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreIsCurrentProcessSystemCriticalSupported()
{
  if ( qword_1C029B7C0 )
    return qword_1C029B7C0();
  else
    return 3221225659LL;
}
