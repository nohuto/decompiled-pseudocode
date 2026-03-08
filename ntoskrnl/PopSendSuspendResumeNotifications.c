/*
 * XREFs of PopSendSuspendResumeNotifications @ 0x140987648
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140987528 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x140987724 (PopSendSuspendResumeServiceNotification.c)
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
    if ( HIDWORD(qword_140C3D830) == 1 )
    {
      v2 = -1072103422;
    }
    else if ( a1 == (_BYTE)qword_140C3D830 )
    {
      v2 = -1073741101;
    }
    else
    {
      qword_140C3D838 = (__int64)KeGetCurrentThread();
      HIDWORD(qword_140C3D830) = 1;
      PopReleaseRwLock((ULONG_PTR)&PopSuspendResumeNotification);
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
      HIDWORD(qword_140C3D830) = 0;
      LOBYTE(qword_140C3D830) = a1;
    }
    PopReleaseRwLock((ULONG_PTR)&PopSuspendResumeNotification);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
