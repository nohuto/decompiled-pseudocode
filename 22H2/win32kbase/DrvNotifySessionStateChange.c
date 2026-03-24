/*
 * XREFs of DrvNotifySessionStateChange @ 0x1C007E8B0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C007D498 (MultiUserNtGreCleanup.c)
 *     InitializeGreCSRSS @ 0x1C007E308 (InitializeGreCSRSS.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C004AA80 (UserIsUserCritSecIn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvNotifySessionStateChange(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx

  v1 = (unsigned int)a1;
  if ( gpresUser && (unsigned int)UserIsUserCritSecIn() && (unsigned int)(v1 - 3) > 1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, v2);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = WdLogNewEntry5_WdEvent(a1);
  *(_QWORD *)(v4 + 24) = v1;
  *(_QWORD *)(v4 + 32) = (unsigned int)PsGetCurrentProcessSessionId();
  WdLogEvent5_WdEvent(v4);
  if ( qword_1C0254F90 )
    return qword_1C0254F90((unsigned int)v1);
  else
    return 3221225659LL;
}
