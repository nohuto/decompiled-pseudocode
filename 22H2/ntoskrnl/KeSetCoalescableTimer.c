/*
 * XREFs of KeSetCoalescableTimer @ 0x14025F4D0
 * Callers:
 *     EtwpRequestFlushTimer @ 0x14025F43C (EtwpRequestFlushTimer.c)
 *     CcRescheduleLazyWriteScan @ 0x14025FCB4 (CcRescheduleLazyWriteScan.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x14025FE4C (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x14026231C (PopFxArmResidentTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x140262DB4 (PopFxEnableWorkOrderWatchdog.c)
 *     CmpArmLazyWriter @ 0x1402D87F0 (CmpArmLazyWriter.c)
 *     ExpTimerResume @ 0x14031EA1C (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x140323E60 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x140327160 (ExpTimerDpcRoutine.c)
 *     CcBcbProfiler @ 0x1403DB290 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1405005D0 (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x140573F14 (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x1405B66D4 (ExpTimerAdjust.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     PiDrvDbUnloadNode @ 0x14062A278 (PiDrvDbUnloadNode.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x14069F094 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x1407AFC80 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x1408998C4 (IopErrorLogQueueRequest.c)
 *     KiInitializeProcessor @ 0x14099EE3C (KiInitializeProcessor.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F7148 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x140A1B354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140A731B8 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // r9
  ULONG v10; // r8d
  ULONG v11; // eax

  v5 = 0;
  if ( TolerableDelay )
  {
    v7 = 10000LL * TolerableDelay;
    if ( v7 > 0xFC0000 )
    {
      v9 = v7 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v10 = v9 + DueTime.LowPart;
        if ( (__int64)(v9 + DueTime.QuadPart) < DueTime.QuadPart )
          v10 = -1;
      }
      else
      {
        v10 = DueTime.LowPart - v9;
        if ( (__int64)(DueTime.QuadPart - v9) > DueTime.QuadPart )
          v10 = 0;
      }
      if ( Period )
      {
        v11 = -1;
        if ( Period + (int)v9 / 10000 >= Period )
          v11 = Period + (int)v9 / 10000;
        Period = v11;
      }
      LODWORD(v7) = 16515072;
      DueTime.LowPart = v10;
    }
    TolerableDelay = (unsigned int)v7 >> 18;
    if ( TolerableDelay > 0x3F )
      TolerableDelay = 63;
    v5 = 4 * TolerableDelay;
  }
  LOBYTE(TolerableDelay) = v5;
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
