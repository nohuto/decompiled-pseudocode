/*
 * XREFs of RtlSetIoCompletionCallback @ 0x180112E40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrRegisterDllNotification @ 0x180084F00 (LdrRegisterDllNotification.c)
 *     RtlpTpIoLookup @ 0x180113584 (RtlpTpIoLookup.c)
 */

__int64 __fastcall RtlSetIoCompletionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdx
  int v7; // ebx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 || (_DWORD)a3 )
    return 3221225485LL;
  v7 = RtlpTpRevertCapture(&v13, 0, a3);
  if ( v7 >= 0 )
  {
    if ( RtlpTpIoRegistered )
      goto LABEL_13;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoRegisteredLock, v6, v8, v9);
    if ( RtlpTpIoRegistered )
    {
      v7 = 0;
    }
    else
    {
      v7 = LdrRegisterDllNotification(0, (__int64)RtlpTpIoDllNotification, 0LL, &RtlpTpIoDllNotificationCookie);
      v10 = RtlpTpIoRegistered;
      if ( v7 >= 0 )
        v10 = 1;
      RtlpTpIoRegistered = v10;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v7 >= 0 )
    {
LABEL_13:
      v7 = RtlpTpIoLookup(&v12, a2, a1);
      if ( v7 >= 0 )
      {
        v11 = v12;
        *(_QWORD *)(v12 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v11 + 168) = NtCurrentTeb()->ActivityId;
        v7 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(v13);
  return (unsigned int)v7;
}
