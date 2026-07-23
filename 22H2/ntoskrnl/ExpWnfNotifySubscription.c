/*
 * XREFs of ExpWnfNotifySubscription @ 0x14068E4D4
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x14060EF54 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140610E60 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x14068E5CC (ExpWnfStartKernelDispatcher.c)
 */

char __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rbx
  struct _KPROCESS *v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  struct _KEVENT *v11; // rcx

  v4 = (unsigned __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v9, (ULONG_PTR)v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(struct _KPROCESS **)(a2 + 40);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  LOBYTE(v10) = KeAbPostRelease((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == v8 )
    {
      LOBYTE(v10) = ExpWnfStartKernelDispatcher(a4);
    }
    else
    {
      v10 = v8[1].EndPadding[7];
      v11 = *(struct _KEVENT **)(v10 + 128);
      if ( v11 )
        LOBYTE(v10) = KeSetEvent(v11, 1, 0);
    }
  }
  return v10;
}
