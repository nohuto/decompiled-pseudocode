/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x14071B5C8
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140704AB8 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140718E50 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140719114 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14071943C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14071AB90 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14071B5C8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteSubscription @ 0x14071D44C (ExpWnfDeleteSubscription.c)
 *     NtDeleteWnfStateName @ 0x140778FE0 (NtDeleteWnfStateName.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14078D724 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14071B5C8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x14071B750 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x14078D67C (ExpWnfStartKernelDispatcher.c)
 */

signed __int32 __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  signed __int64 *v4; // rsi
  int v5; // r13d
  int v8; // r12d
  unsigned int v9; // ebx
  int v10; // ebp
  __int64 v11; // rdi
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  int inserted; // eax
  struct _KPROCESS *v15; // rcx
  signed __int32 result; // eax
  unsigned int v17; // edi
  struct _KEVENT *v18; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v5 = a3;
  v8 = 0;
  v9 = 1;
  v10 = 1;
  v11 = KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v11, (__int64)v4);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = (_QWORD *)(a1 + 120);
  v13 = (_QWORD *)*v12;
  if ( (_QWORD *)*v12 != v12 )
  {
    do
    {
      if ( v10 && (*((_BYTE *)v13 + 36) & 1) != 0 )
        v10 = 0;
      inserted = ExpWnfInsertSubscriptionInPendingQueue(v13 - 8, a2, 0LL);
      v15 = (struct _KPROCESS *)*(v13 - 3);
      if ( inserted )
      {
        if ( v15 == PsInitialSystemProcess )
        {
          v8 = 1;
        }
        else
        {
          v18 = *(struct _KEVENT **)(v15[1].EndPadding[0] + 128);
          if ( v18 )
            KeSetEvent(v18, 1, 0);
        }
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v12 );
    v5 = a3;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  result = KeAbPostRelease((ULONG_PTR)v4);
  if ( v10 && (a2 & 1) != 0 )
  {
    if ( v8 || !v5 )
      v9 = 0;
    v17 = a4;
    result = ExpWnfNotifyNameSubscribers(a1, 8LL, v9);
  }
  else
  {
    v17 = a4;
  }
  if ( v8 )
  {
    if ( v5 )
      return ExpWnfStartKernelDispatcher(v17);
  }
  return result;
}
