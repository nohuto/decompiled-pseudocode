/*
 * XREFs of xxxSleepThread2 @ 0x1C0125E60
 * Callers:
 *     NtUserWaitMessage @ 0x1C00A1AA0 (NtUserWaitMessage.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     xxxSleepThread @ 0x1C01B371C (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01B7350 (xxxWaitMessageEx.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA87C (xxxDCETrackCaptionButton.c)
 *     NtUserRealWaitMessageEx @ 0x1C01D8DC0 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C01E01C0 (NtUserWaitAvailableMessageEx.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022F868 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C022FF38 (xxxIsDragging.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0125FC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F48A4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi

  if ( (a1 & 7) != 7 && ((a1 & 6) == 0 || !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL)) )
    return xxxRealSleepThread(a1, a2, a3, a4, a5);
  EtwTraceMessageCheckDelay(gptiCurrent);
  *(_DWORD *)(gptiCurrent + 1216LL) = 0;
  if ( *(int *)(gptiCurrent + 488LL) < 0 )
    xxxHandleHealthyThread(gptiCurrent);
  *(_QWORD *)(gptiCurrent + 1272LL) &= ~0x200000000uLL;
  EtwTraceProcessWindowInfo(gptiCurrent);
  v9 = xxxRealSleepThread(a1, a2, a3, a4, a5);
  v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !(_DWORD)v10 )
    LODWORD(v10) = -1;
  EtwTraceMessageCheckDelay(gptiCurrent);
  *(_DWORD *)(gptiCurrent + 1216LL) = v10;
  if ( *(int *)(gptiCurrent + 488LL) < 0 )
    xxxHandleHealthyThread(gptiCurrent);
  *(_QWORD *)(gptiCurrent + 1272LL) &= ~0x200000000uLL;
  EtwTraceProcessWindowInfo(gptiCurrent);
  return v9;
}
