/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x140610CEC
 * Callers:
 *     NtDeleteWnfStateName @ 0x14060D820 (NtDeleteWnfStateName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060E474 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060E73C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14060EA3C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140610198 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140610CEC (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteProcessContext @ 0x140613348 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140613588 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14068E674 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140610CEC (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140610E60 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x14068E5CC (ExpWnfStartKernelDispatcher.c)
 */

char __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rdi
  int v5; // r13d
  int v8; // r12d
  unsigned int v9; // ebx
  int v10; // ebp
  __int64 v11; // rsi
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  int inserted; // eax
  struct _KPROCESS *v15; // rcx
  char result; // al
  unsigned int v17; // edi
  struct _KEVENT *v18; // rcx

  v4 = (unsigned __int64 *)(a1 + 112);
  v5 = a3;
  v8 = 0;
  v9 = 1;
  v10 = 1;
  v11 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v11, (ULONG_PTR)v4);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
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
          v18 = *(struct _KEVENT **)(v15[1].EndPadding[7] + 128);
          if ( v18 )
            KeSetEvent(v18, 1, 0);
        }
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v12 );
    v5 = a3;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  result = KeAbPostRelease((ULONG_PTR)v4);
  if ( v10 && (a2 & 1) != 0 )
  {
    if ( v8 || !v5 )
      v9 = 0;
    v17 = a4;
    result = ExpWnfNotifyNameSubscribers(a1, 8LL, v9, a4);
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
