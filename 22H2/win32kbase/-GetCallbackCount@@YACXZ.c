/*
 * XREFs of ?GetCallbackCount@@YACXZ @ 0x1C00DEF46
 * Callers:
 *     EtwTraceInputQueueLocked @ 0x1C000AF00 (EtwTraceInputQueueLocked.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1C000CC10 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1C000F3F0 (EtwTraceInputQueueNoRemoveLocker.c)
 *     EtwTraceWakePump @ 0x1C00573C0 (EtwTraceWakePump.c)
 *     EtwTraceQueueMessage @ 0x1C0094D70 (EtwTraceQueueMessage.c)
 *     EtwTraceBeginAppMessageProcessing @ 0x1C0096E40 (EtwTraceBeginAppMessageProcessing.c)
 *     EtwTraceEndAppMessageProcessing @ 0x1C0096FA0 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceRetrievePostMessage @ 0x1C0097FE0 (EtwTraceRetrievePostMessage.c)
 *     EtwTraceBeginSendMessage @ 0x1C009D760 (EtwTraceBeginSendMessage.c)
 *     EtwTraceRetrieveQueueEventMessage @ 0x1C00A4560 (EtwTraceRetrieveQueueEventMessage.c)
 *     EtwTraceRetrievePseudoMessage @ 0x1C00A6930 (EtwTraceRetrievePseudoMessage.c)
 *     EtwTraceEndSendMessage @ 0x1C00A7500 (EtwTraceEndSendMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1C00A7610 (EtwTraceBeginRetrieveSendMessage.c)
 *     EtwTraceEndRetrieveSendMessage @ 0x1C00A7650 (EtwTraceEndRetrieveSendMessage.c)
 *     EtwTraceRetrieveInputMessage @ 0x1C00A7A30 (EtwTraceRetrieveInputMessage.c)
 *     EtwTraceWakeMIT @ 0x1C00AF9F0 (EtwTraceWakeMIT.c)
 *     EtwTraceWakeRIT @ 0x1C00BE7A0 (EtwTraceWakeRIT.c)
 *     EtwTraceBeginDelegatedInputWorker @ 0x1C00DEF80 (EtwTraceBeginDelegatedInputWorker.c)
 *     EtwTraceEndDelegatedInputWorker @ 0x1C00DF080 (EtwTraceEndDelegatedInputWorker.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x1C01389A0 (EtwTraceBeginDelegateInputCallback.c)
 *     EtwTraceBeginInjectMouse @ 0x1C0138AB0 (EtwTraceBeginInjectMouse.c)
 *     EtwTraceConvertTimeOutToBlocking @ 0x1C0138D90 (EtwTraceConvertTimeOutToBlocking.c)
 *     EtwTraceEndDelegateInputCallback @ 0x1C0139220 (EtwTraceEndDelegateInputCallback.c)
 *     EtwTraceEndInjectMouse @ 0x1C0139330 (EtwTraceEndInjectMouse.c)
 *     EtwTraceInputQueueUnLocked @ 0x1C013AAB0 (EtwTraceInputQueueUnLocked.c)
 *     EtwTracePostInjectedGestureMessage @ 0x1C013AFB0 (EtwTracePostInjectedGestureMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 */

signed __int8 GetCallbackCount(void)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    return *(_BYTE *)(ThreadWin32Thread + 1296);
  else
    return -1;
}
