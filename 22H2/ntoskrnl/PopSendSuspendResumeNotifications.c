/*
 * XREFs of PopSendSuspendResumeNotifications @ 0x14098A6F8
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A5D8 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x14098A7D4 (PopSendSuspendResumeServiceNotification.c)
 */

__int64 __fastcall PopSendSuspendResumeNotifications(char a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rdx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSuspendResumeNotification);
    if ( HIDWORD(qword_140C3DC50) == 1 )
    {
      v2 = -1072103422;
    }
    else if ( a1 == (_BYTE)qword_140C3DC50 )
    {
      v2 = -1073741101;
    }
    else
    {
      qword_140C3DC58 = (__int64)KeGetCurrentThread();
      HIDWORD(qword_140C3DC50) = 1;
      PopReleaseRwLock(&PopSuspendResumeNotification);
      if ( a1 )
      {
        LOBYTE(v4) = a1;
        PopSendSuspendResumeApplicationNotification(v4, v3);
        LOBYTE(v5) = a1;
        v6 = PopSendSuspendResumeServiceNotification(v5);
      }
      else
      {
        PopSendSuspendResumeServiceNotification(0LL);
        v6 = PopSendSuspendResumeApplicationNotification(0LL, v7);
      }
      v2 = v6;
      PopAcquireRwLockExclusive((ULONG_PTR)&PopSuspendResumeNotification);
      HIDWORD(qword_140C3DC50) = 0;
      LOBYTE(qword_140C3DC50) = a1;
    }
    PopReleaseRwLock(&PopSuspendResumeNotification);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
