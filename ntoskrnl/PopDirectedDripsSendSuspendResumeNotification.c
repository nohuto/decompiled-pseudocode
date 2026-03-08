/*
 * XREFs of PopDirectedDripsSendSuspendResumeNotification @ 0x140980CF0
 * Callers:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1409809F4 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     MmGetSessionId @ 0x140299600 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x14035C2F0 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopUmpoSendLegacyEvent @ 0x1409948A0 (PopUmpoSendLegacyEvent.c)
 *     PopSuspendResumeInvocation @ 0x1409952D0 (PopSuspendResumeInvocation.c)
 */

__int64 __fastcall PopDirectedDripsSendSuspendResumeNotification(char a1, char a2)
{
  __int64 result; // rax
  void *i; // rcx
  int SessionId; // eax
  void *v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+40h] [rbp-10h]

  v9 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    for ( i = 0LL; ; i = v6 )
    {
      result = MmGetNextSession(i);
      v6 = (void *)result;
      if ( !result )
        break;
      SessionId = MmGetSessionId(result);
      if ( SessionId )
      {
        *(_QWORD *)&v8 = 0LL;
        DWORD2(v8) = 0;
        v9 = SessionId;
        if ( a2 )
        {
          HIDWORD(v8) = 0;
        }
        else
        {
          HIDWORD(v8) = 1;
          PopSuspendResumeInvocation(&v8);
          HIDWORD(v8) = 2;
        }
        PopSuspendResumeInvocation(&v8);
      }
    }
  }
  else
  {
    if ( !a2 )
    {
      v9 = 0;
      HIDWORD(v8) = 1;
      PopSuspendResumeInvocation(&v8);
      HIDWORD(v8) = 2;
    }
    PopSuspendResumeInvocation(&v8);
    v7 = 0LL;
    if ( a2 )
    {
      *(_QWORD *)&v7 = 0x400000000LL;
      WORD6(v7) = 256;
    }
    else
    {
      *(_QWORD *)&v7 = 0x1200000003LL;
      WORD6(v7) = 1;
      PopUmpoSendLegacyEvent(&v7);
      DWORD1(v7) = 7;
    }
    return PopUmpoSendLegacyEvent(&v7);
  }
  return result;
}
