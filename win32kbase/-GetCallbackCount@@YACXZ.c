/*
 * XREFs of ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8
 * Callers:
 *     EtwTraceInputQueueLocked @ 0x1C0009A50 (EtwTraceInputQueueLocked.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1C000B450 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1C000DAA0 (EtwTraceInputQueueNoRemoveLocker.c)
 *     EtwTraceWakePump @ 0x1C007D520 (EtwTraceWakePump.c)
 *     EtwTraceQueueMessage @ 0x1C00A3AD0 (EtwTraceQueueMessage.c)
 *     EtwTraceBeginAppMessageProcessing @ 0x1C00A5760 (EtwTraceBeginAppMessageProcessing.c)
 *     EtwTraceEndAppMessageProcessing @ 0x1C00A5890 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceRetrievePostMessage @ 0x1C00A6260 (EtwTraceRetrievePostMessage.c)
 *     EtwTraceBeginSendMessage @ 0x1C00AC9A0 (EtwTraceBeginSendMessage.c)
 *     EtwTraceRetrieveQueueEventMessage @ 0x1C00B14B0 (EtwTraceRetrieveQueueEventMessage.c)
 *     EtwTraceRetrievePseudoMessage @ 0x1C00B86E0 (EtwTraceRetrievePseudoMessage.c)
 *     EtwTraceEndSendMessage @ 0x1C00B9260 (EtwTraceEndSendMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1C00B9370 (EtwTraceBeginRetrieveSendMessage.c)
 *     EtwTraceEndRetrieveSendMessage @ 0x1C00B93B0 (EtwTraceEndRetrieveSendMessage.c)
 *     EtwTraceRetrieveInputMessage @ 0x1C00B9640 (EtwTraceRetrieveInputMessage.c)
 *     EtwTraceWakeMIT @ 0x1C00BEA10 (EtwTraceWakeMIT.c)
 *     EtwTraceWakeRIT @ 0x1C00CDEE0 (EtwTraceWakeRIT.c)
 *     EtwTraceBeginDelegatedInputWorker @ 0x1C00EDBE0 (EtwTraceBeginDelegatedInputWorker.c)
 *     EtwTraceEndDelegatedInputWorker @ 0x1C00EDCE0 (EtwTraceEndDelegatedInputWorker.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x1C0161900 (EtwTraceBeginDelegateInputCallback.c)
 *     EtwTraceBeginInjectMouse @ 0x1C0161A10 (EtwTraceBeginInjectMouse.c)
 *     EtwTraceConvertTimeOutToBlocking @ 0x1C0161CF0 (EtwTraceConvertTimeOutToBlocking.c)
 *     EtwTraceEndDelegateInputCallback @ 0x1C0162180 (EtwTraceEndDelegateInputCallback.c)
 *     EtwTraceEndInjectMouse @ 0x1C0162290 (EtwTraceEndInjectMouse.c)
 *     EtwTraceInputQueueUnLocked @ 0x1C0163A10 (EtwTraceInputQueueUnLocked.c)
 *     EtwTracePostInjectedGestureMessage @ 0x1C0163F10 (EtwTracePostInjectedGestureMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
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
