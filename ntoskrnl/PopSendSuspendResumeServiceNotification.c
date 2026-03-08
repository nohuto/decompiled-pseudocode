/*
 * XREFs of PopSendSuspendResumeServiceNotification @ 0x140987724
 * Callers:
 *     PopSendSuspendResumeNotifications @ 0x140987648 (PopSendSuspendResumeNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x14098EC68 (PopDiagTraceSuspendResumeNotification.c)
 *     PopUmpoSendLegacyEvent @ 0x1409948A0 (PopUmpoSendLegacyEvent.c)
 *     PopSuspendResumeInvocation @ 0x1409952D0 (PopSuspendResumeInvocation.c)
 */

__int64 __fastcall PopSendSuspendResumeServiceNotification(__int64 a1)
{
  char v1; // di
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  int v7; // [rsp+38h] [rbp-18h]
  int v8; // [rsp+3Ch] [rbp-14h]
  int v9; // [rsp+40h] [rbp-10h]

  v6 = 0LL;
  v5 = 0LL;
  v1 = a1;
  PopDiagTraceSuspendResumeNotification(a1, 0LL);
  v7 = 0;
  v9 = 0;
  v8 = v1 == 0;
  v3 = PopSuspendResumeInvocation(&v6);
  if ( !v1 )
  {
    v8 = 2;
    v3 = PopSuspendResumeInvocation(&v6);
  }
  if ( !v3 )
  {
    WORD6(v5) = 256;
    if ( v1 )
    {
      *(_QWORD *)&v5 = 0x400000003LL;
    }
    else
    {
      *(_QWORD *)&v5 = 0x1200000000LL;
      PopUmpoSendLegacyEvent(&v5);
      DWORD1(v5) = 7;
    }
    v3 = PopUmpoSendLegacyEvent(&v5);
  }
  LOBYTE(v2) = v1;
  PopDiagTraceSuspendResumeNotification(v2, 0LL);
  return v3;
}
