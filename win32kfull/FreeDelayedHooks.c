/*
 * XREFs of FreeDelayedHooks @ 0x1C0042B90
 * Callers:
 *     xxxSendMessageCallback @ 0x1C004C51C (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C006DB60 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void FreeDelayedHooks()
{
  unsigned int DLT; // eax
  char *v1; // rbx
  int v2; // edi
  tagDomLock *v3; // rcx
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  tagDomLock *DomainLockRef; // [rsp+28h] [rbp-38h]
  char v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h]
  char v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-18h]
  char v13; // [rsp+50h] [rbp-10h]

  DLT = DLT_HOOK::getDLT();
  v9 = 1;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v1 = &v9;
  v2 = 0;
  v10 = gDomainDummyLock;
  v12 = 0LL;
  v11 = 0;
  v13 = 0;
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
  v13 = 1;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 1048);
    if ( !v6 )
      break;
    *(_QWORD *)(v4 + 1048) = *(_QWORD *)(v6 + 96);
    v7 = (_QWORD *)_HMPkheFromObject(v6);
    if ( !*(_DWORD *)(*v7 + 8LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3504LL);
    HMUnlockObject(*v7);
  }
  if ( v13 && DomainLockRef )
  {
    if ( v9 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
