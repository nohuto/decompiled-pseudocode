/*
 * XREFs of __security_check_cookie @ 0x1C0002FD0
 * Callers:
 *     CiSchedulerWait @ 0x1C00021A0 (CiSchedulerWait.c)
 *     __GSHandlerCheckCommon @ 0x1C000306C (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C0003C20 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003D0C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003D90 (CiLogSchedulerWakeup.c)
 *     CiLogSetBufferingMode @ 0x1C0003E00 (CiLogSetBufferingMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0003E84 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003EF4 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0003F64 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0003FD4 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C000406C (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C0004100 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0004254 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C00042F0 (CiLogTurboEngaged.c)
 *     CiNdisThrottle @ 0x1C000A0D0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B290 (CiCreateTaskIndexClientFromThread.c)
 *     CiConfigReadDWORD @ 0x1C000D080 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D7E0 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000DD00 (CiConfigQueryValue.c)
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
