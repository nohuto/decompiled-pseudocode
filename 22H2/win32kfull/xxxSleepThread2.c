/*
 * XREFs of xxxSleepThread2 @ 0x1C00586B0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00D79AC (xxxDCETrackCaptionButton.c)
 *     NtUserWaitMessage @ 0x1C00F7100 (NtUserWaitMessage.c)
 *     xxxRemoteDisconnect @ 0x1C01280E0 (xxxRemoteDisconnect.c)
 *     xxxSleepThread @ 0x1C01D2F40 (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01E2598 (xxxWaitMessageEx.c)
 *     NtUserRealWaitMessageEx @ 0x1C0200410 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C02042C0 (NtUserWaitAvailableMessageEx.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C021E1F4 (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C021E2EC (xxxbFullscreenSwitch.c)
 *     xxxTrackCaptionButton @ 0x1C0247450 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02480D4 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C02487D8 (xxxIsDragging.c)
 * Callees:
 *     xxxHandleHealthyThread @ 0x1C00034F0 (xxxHandleHealthyThread.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0058830 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  __int64 result; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1176LL) = 0;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1232LL) &= ~0x400000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
  }
  result = xxxRealSleepThread(a1, a2, a3, a4, a5);
  v11 = result;
  if ( v5 )
  {
    v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v12 )
      LODWORD(v12) = -1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1176LL) = v12;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1232LL) &= ~0x400000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
    return v11;
  }
  return result;
}
