/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C00D9FF4
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00588D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThread @ 0x1C00D9750 (xxxDesktopThread.c)
 * Callees:
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0038F48 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxUpdateInputHangInfo @ 0x1C0057B10 (xxxUpdateInputHangInfo.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0058FF0 (IsMulDestroyBrushInternalSupported.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     SleepInputIdle @ 0x1C00DA1E0 (SleepInputIdle.c)
 *     xxxRemoveQueueCompletion @ 0x1C00DA26C (xxxRemoveQueueCompletion.c)
 *     zzzWakeInputIdle @ 0x1C00DA374 (zzzWakeInputIdle.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0136788 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C01367B0 (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(char a1, char a2)
{
  LegacyInputDispatcher *v4; // r14
  int v5; // esi
  char v6; // r15
  int v7; // eax
  LeaveEnterCrit *v8; // rcx
  bool v9; // al
  __int64 result; // rax
  char v11; // [rsp+80h] [rbp+8h] BYREF
  int v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+94h] [rbp+1Ch]

  v4 = (LegacyInputDispatcher *)qword_1C033AF10;
  if ( gptiCurrent == gTermIO[2] )
    v4 = (LegacyInputDispatcher *)qword_1C033AF18;
  v5 = *((_DWORD *)v4 + 15);
  v6 = 0;
  if ( a1 )
  {
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = 15615;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
  }
  if ( !a1 )
  {
    IsMulDestroyBrushInternalSupported();
    goto LABEL_10;
  }
  if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL) & 0x1CFF) == 0 )
  {
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) != 0 )
    {
      result = CheckProcessForeground(gptiCurrent);
      if ( (int)result < 0 )
        return result;
    }
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground
      && ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x1000) != 0 )
    {
      xxxCallHook(0, 0LL, 0LL, 11);
    }
    xxxUpdateInputHangInfo(0LL, 0);
    zzzWakeInputIdle(gptiCurrent);
    while ( 1 )
    {
LABEL_10:
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v11);
      if ( a1 )
      {
        v7 = LegacyInputDispatcher::WaitAndDispatch(v4);
      }
      else
      {
        v12 = 0;
        v13 = 1536;
        v5 = CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(gpMouseSensor, (struct CEventBitmap *)&v12, v4);
        if ( v5 < 0 )
          goto LABEL_14;
        v7 = LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(v4);
      }
      v5 = v7;
LABEL_14:
      LeaveEnterCrit::~LeaveEnterCrit(v8);
      if ( v5 != *((_DWORD *)v4 + 15) )
        goto LABEL_36;
      v9 = (unsigned int)xxxRemoveQueueCompletion() != 0;
      if ( a1 )
      {
LABEL_16:
        if ( !v6 )
        {
          if ( a1 )
            xxxUpdateInputHangInfo(0LL, 1);
          if ( v5 == *((_DWORD *)v4 + 15) )
          {
            SleepInputIdle(gptiCurrent);
            v5 = a1 != 0 ? v5 : 0;
          }
          break;
        }
      }
      else
      {
        if ( !v9 || (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 8) != 0 && (a2 & 8) != 0 )
        {
LABEL_36:
          v6 = 0;
          goto LABEL_16;
        }
        v6 = 1;
      }
    }
  }
  if ( a1 )
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = 0;
  return (unsigned int)v5;
}
