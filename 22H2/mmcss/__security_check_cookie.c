/*
 * XREFs of __security_check_cookie @ 0x1C0003050
 * Callers:
 *     CiSchedulerWait @ 0x1C0001680 (CiSchedulerWait.c)
 *     __GSHandlerCheckCommon @ 0x1C000326C (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C0003EA0 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003F8C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0004010 (CiLogSchedulerWakeup.c)
 *     CiLogSetBufferingMode @ 0x1C0004080 (CiLogSetBufferingMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0004104 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0004174 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C00041E4 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0004254 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C00042EC (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C0004380 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C00044D4 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C0004570 (CiLogTurboEngaged.c)
 *     CiNdisThrottle @ 0x1C000A0A0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B8B0 (CiCreateTaskIndexClientFromThread.c)
 *     CiConfigReadDWORD @ 0x1C000E830 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000E8D0 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000ED40 (CiConfigQueryValue.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
