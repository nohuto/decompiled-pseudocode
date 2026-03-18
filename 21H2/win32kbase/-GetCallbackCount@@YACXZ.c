/*
 * XREFs of ?GetCallbackCount@@YACXZ @ 0x1C014C390
 * Callers:
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1C0004EC0 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceWakePump @ 0x1C0034380 (EtwTraceWakePump.c)
 *     EtwTraceQueueMessage @ 0x1C008DDB0 (EtwTraceQueueMessage.c)
 *     EtwTraceQueueInputMessage @ 0x1C008DE94 (EtwTraceQueueInputMessage.c)
 *     EtwTraceBeginAppMessageProcessing @ 0x1C008F0F0 (EtwTraceBeginAppMessageProcessing.c)
 *     EtwTraceEndAppMessageProcessing @ 0x1C008F310 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceRetrievePostMessage @ 0x1C0090FE0 (EtwTraceRetrievePostMessage.c)
 *     EtwTraceBeginSendMessage @ 0x1C0093190 (EtwTraceBeginSendMessage.c)
 *     EtwTraceEndSendMessage @ 0x1C009A320 (EtwTraceEndSendMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1C009A3B0 (EtwTraceBeginRetrieveSendMessage.c)
 *     EtwTraceEndRetrieveSendMessage @ 0x1C009A3F0 (EtwTraceEndRetrieveSendMessage.c)
 *     EtwTraceRetrieveInputMessage @ 0x1C009C4C0 (EtwTraceRetrieveInputMessage.c)
 *     EtwTraceRetrievePseudoMessage @ 0x1C009E050 (EtwTraceRetrievePseudoMessage.c)
 *     EtwTraceRetrieveQueueEventMessage @ 0x1C00A26A0 (EtwTraceRetrieveQueueEventMessage.c)
 *     EtwTraceWakeMIT @ 0x1C00AE640 (EtwTraceWakeMIT.c)
 *     EtwTraceInputQueueLocked @ 0x1C00AF960 (EtwTraceInputQueueLocked.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1C00BBD60 (EtwTraceInputQueueNoRemoveLocker.c)
 *     EtwTraceEndInjectMouse @ 0x1C00BC970 (EtwTraceEndInjectMouse.c)
 *     EtwTraceBeginInjectMouse @ 0x1C00BC9B0 (EtwTraceBeginInjectMouse.c)
 *     EtwTraceWakeRIT @ 0x1C00C1100 (EtwTraceWakeRIT.c)
 *     EtwTraceInputQueueUnLocked @ 0x1C00D0330 (EtwTraceInputQueueUnLocked.c)
 *     EtwTraceBeginDelegatedInputWorker @ 0x1C00E5370 (EtwTraceBeginDelegatedInputWorker.c)
 *     EtwTraceEndDelegatedInputWorker @ 0x1C00E5430 (EtwTraceEndDelegatedInputWorker.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x1C014C560 (EtwTraceBeginDelegateInputCallback.c)
 *     EtwTraceConvertTimeOutToBlocking @ 0x1C014C940 (EtwTraceConvertTimeOutToBlocking.c)
 *     EtwTraceEndDelegateInputCallback @ 0x1C014CC20 (EtwTraceEndDelegateInputCallback.c)
 *     EtwTracePostInjectedGestureMessage @ 0x1C014E4F0 (EtwTracePostInjectedGestureMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 */

signed __int8 GetCallbackCount(void)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    return *(_BYTE *)(ThreadWin32Thread + 1280);
  else
    return -1;
}
