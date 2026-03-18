/*
 * XREFs of FreeDelayedHooks @ 0x1C0023FA0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void FreeDelayedHooks()
{
  unsigned int DLT; // eax
  char *v1; // rbx
  int v2; // edi
  tagDomLock *v3; // rcx
  __int64 ThreadWin32Thread; // rbx
  __int64 i; // rcx
  _QWORD *v6; // rdi
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v8; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  char v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  char v12; // [rsp+48h] [rbp-20h]

  DLT = DLT_HOOK::getDLT();
  v8 = 1;
  v1 = &v8;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v9 = gDomainDummyLock;
  v11 = 0LL;
  v2 = 0;
  v12 = 0;
  v10 = 0;
  do
  {
    v3 = (tagDomLock *)*((_QWORD *)v1 - 1);
    if ( v3 )
    {
      if ( *v1 )
        tagDomLock::LockExclusive(v3);
      else
        tagDomLock::LockShared(v3);
    }
    ++v2;
    v1 += 16;
  }
  while ( !v2 );
  v12 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  for ( i = *(_QWORD *)(ThreadWin32Thread + 1040); i; i = *(_QWORD *)(ThreadWin32Thread + 1040) )
  {
    *(_QWORD *)(ThreadWin32Thread + 1040) = *(_QWORD *)(i + 96);
    v6 = (_QWORD *)_HMPkheFromObject(i);
    if ( !*(_DWORD *)(*v6 + 8LL) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(*v6);
    HMUnlockObject();
  }
  if ( v12 && DomainLockRef )
  {
    if ( v8 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
