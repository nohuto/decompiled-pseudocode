/*
 * XREFs of xxxSleepThread2 @ 0x1C0052D3C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserWaitMessage @ 0x1C00A4B90 (NtUserWaitMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     xxxSleepThread @ 0x1C01D9FC0 (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01DD5A8 (xxxWaitMessageEx.c)
 *     NtUserRealWaitMessageEx @ 0x1C01FB6D0 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C02008B0 (NtUserWaitAvailableMessageEx.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02442A8 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C0244970 (xxxIsDragging.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0052EC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C0144560 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // ebp
  unsigned int v10; // esi
  unsigned __int64 v11; // rbx
  int v12; // eax

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1200LL) = 0;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1256LL) &= ~0x200000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
  }
  v10 = xxxRealSleepThread(a1, a2, a3, a4, a5);
  if ( v5 )
  {
    v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    EtwTraceMessageCheckDelay(gptiCurrent);
    v12 = -1;
    if ( (_DWORD)v11 )
      v12 = v11;
    *(_DWORD *)(gptiCurrent + 1200LL) = v12;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1256LL) &= ~0x200000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
  }
  return v10;
}
