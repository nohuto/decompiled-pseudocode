int __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  signed __int64 *v4; // rbx
  struct _KPROCESS *v8; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  struct _KEVENT *v11; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v9, (__int64)v4);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(struct _KPROCESS **)(a2 + 40);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  LODWORD(v10) = KeAbPostRelease((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == v8 )
    {
      LODWORD(v10) = ExpWnfStartKernelDispatcher(a4);
    }
    else
    {
      v10 = v8[1].EndPadding[0];
      v11 = *(struct _KEVENT **)(v10 + 128);
      if ( v11 )
        LODWORD(v10) = KeSetEvent(v11, 1, 0);
    }
  }
  return v10;
}
