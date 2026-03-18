/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C00A4844
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0052EC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThread @ 0x1C00A4360 (xxxDesktopThread.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     zzzWakeInputIdle @ 0x1C00534E4 (zzzWakeInputIdle.c)
 *     xxxUpdateInputHangInfo @ 0x1C00574C0 (xxxUpdateInputHangInfo.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?ClearQueueServerEvent@@YAXG@Z @ 0x1C00A49D8 (-ClearQueueServerEvent@@YAXG@Z.c)
 *     SleepInputIdle @ 0x1C00A4CBC (SleepInputIdle.c)
 *     xxxRemoveQueueCompletion @ 0x1C00A4D48 (xxxRemoveQueueCompletion.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A5F14 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AD4 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AFC (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(char a1, unsigned __int8 a2)
{
  LegacyInputDispatcher *v4; // r15
  int v5; // r14d
  char v6; // r12
  int v7; // eax
  bool v8; // al
  __int64 result; // rax
  char v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+84h] [rbp+1Ch]

  v4 = (LegacyInputDispatcher *)qword_1C03361C0;
  if ( gptiCurrent == gTermIO[2] )
    v4 = (LegacyInputDispatcher *)qword_1C03361C8;
  v5 = *((_DWORD *)v4 + 15);
  v6 = 0;
  if ( a1 )
    ClearQueueServerEvent(0x3CFFu);
  if ( a1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL) & 0x1CFF) != 0 )
      goto LABEL_20;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) == 0
      || (result = CheckProcessForeground(gptiCurrent), (int)result >= 0) )
    {
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
      if ( gptiCurrent == gptiForeground
        && ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x1000) != 0 )
      {
        xxxCallHook(0, 0LL, 0LL, 11);
      }
      xxxUpdateInputHangInfo(0LL, 0);
      zzzWakeInputIdle(gptiCurrent);
      goto LABEL_10;
    }
    return result;
  }
  do
  {
    while ( 1 )
    {
LABEL_10:
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v10);
      if ( a1 || gDWMCapable )
      {
        v7 = LegacyInputDispatcher::WaitAndDispatch(v4);
      }
      else
      {
        v11 = 0;
        v12 = 1536;
        v5 = CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(gpMouseSensor, (struct CEventBitmap *)&v11, v4);
        if ( v5 < 0 )
          goto LABEL_13;
        v7 = LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(v4);
      }
      v5 = v7;
LABEL_13:
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v10);
      if ( v5 != *((_DWORD *)v4 + 15) )
        break;
      v8 = (unsigned int)xxxRemoveQueueCompletion() != 0;
      if ( a1 )
        goto LABEL_15;
      if ( !v8 || (a2 & *(_BYTE *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) & 8) != 0 )
        break;
      v6 = 1;
    }
    v6 = 0;
LABEL_15:
    ;
  }
  while ( v6 );
  if ( a1 )
    xxxUpdateInputHangInfo(0LL, 1);
  if ( v5 == *((_DWORD *)v4 + 15) )
  {
    SleepInputIdle(gptiCurrent);
    v5 = a1 != 0 ? v5 : 0;
  }
LABEL_20:
  if ( a1 )
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), 0);
  return (unsigned int)v5;
}
