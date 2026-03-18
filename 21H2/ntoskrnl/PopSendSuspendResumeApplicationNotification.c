/*
 * XREFs of PopSendSuspendResumeApplicationNotification @ 0x14098FDE4
 * Callers:
 *     PopSendSuspendResumeNotifications @ 0x14098FEF4 (PopSendSuspendResumeNotifications.c)
 * Callees:
 *     MmGetNextSession @ 0x1402A1770 (MmGetNextSession.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
 *     PopSuspendResumeInvocation @ 0x140807718 (PopSuspendResumeInvocation.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x1409932A0 (PopDiagTraceSuspendResumeNotification.c)
 */

__int64 __fastcall PopSendSuspendResumeApplicationNotification(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned int v3; // ebx
  void *i; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 NextSession; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rdi
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  int SessionId; // [rsp+28h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]

  v16 = 0LL;
  LOBYTE(a2) = 1;
  v19 = 0LL;
  v2 = a1;
  v3 = 0;
  v18 = 0LL;
  PopDiagTraceSuspendResumeNotification(a1, a2);
  for ( i = 0LL; ; i = v14 )
  {
    NextSession = MmGetNextSession(i);
    v14 = (void *)NextSession;
    if ( !NextSession )
      break;
    SessionId = MmGetSessionId(NextSession);
    BYTE4(v16) = v2;
    *(_WORD *)((char *)&v16 + 5) = 1;
    LODWORD(v16) = SessionId;
    v3 = PopSuspendResumeInvocation(&v16, v5, v6, v7);
    if ( !v2 )
    {
      BYTE6(v16) = 1;
      v3 = PopSuspendResumeInvocation(&v16, v8, v9, v10);
    }
    if ( !v3 )
    {
      LOBYTE(v18) = 0;
      DWORD1(v18) = 2;
      HIDWORD(v18) = 0x80000000;
      v19 = 0x140000000ELL;
      DWORD2(v18) = v2 != 0 ? 5 : 1;
      v3 = PopDispatchStateCallout(&v18, (__int64)&SessionId);
    }
  }
  LOBYTE(v12) = 1;
  LOBYTE(v13) = v2;
  PopDiagTraceSuspendResumeNotification(v13, v12);
  return v3;
}
