/*
 * XREFs of PopSendSuspendResumeServiceNotification @ 0x14098FFD0
 * Callers:
 *     PopSendSuspendResumeNotifications @ 0x14098FEF4 (PopSendSuspendResumeNotifications.c)
 * Callees:
 *     PopUmpoSendLegacyEvent @ 0x1407FE938 (PopUmpoSendLegacyEvent.c)
 *     PopSuspendResumeInvocation @ 0x140807718 (PopSuspendResumeInvocation.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x1409932A0 (PopDiagTraceSuspendResumeNotification.c)
 */

__int64 __fastcall PopSendSuspendResumeServiceNotification(__int64 a1)
{
  char v1; // di
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+48h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v1 = a1;
  PopDiagTraceSuspendResumeNotification(a1, 0LL);
  *(_WORD *)((char *)&v9 + 5) = 0;
  BYTE4(v9) = v1;
  v6 = PopSuspendResumeInvocation(&v9, v2, v3, v4);
  if ( !v6 )
  {
    WORD6(v8) = 256;
    if ( v1 )
    {
      *(_QWORD *)&v8 = 0x400000003LL;
    }
    else
    {
      *(_QWORD *)&v8 = 0x1200000000LL;
      PopUmpoSendLegacyEvent(&v8);
      DWORD1(v8) = 7;
    }
    v6 = PopUmpoSendLegacyEvent(&v8);
  }
  LOBYTE(v5) = v1;
  PopDiagTraceSuspendResumeNotification(v5, 0LL);
  return v6;
}
