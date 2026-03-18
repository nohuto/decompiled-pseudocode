/*
 * XREFs of DrvNotifySessionStateChange @ 0x1C0090680
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 *     InitializeGreCSRSS @ 0x1C009000C (InitializeGreCSRSS.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0090AB0 (UserIsUserCritSecIn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvNotifySessionStateChange(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int CurrentProcessSessionId; // eax

  v1 = a1;
  if ( gpresUser && (unsigned int)UserIsUserCritSecIn() && (unsigned int)(v1 - 3) > 1 )
    WdLogSingleEntry0(1LL);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  WdLogSingleEntry2(4LL, v1, CurrentProcessSessionId);
  if ( qword_1C029AD20 )
    return qword_1C029AD20((unsigned int)v1);
  else
    return 3221225659LL;
}
