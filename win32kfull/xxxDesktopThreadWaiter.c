/*
 * XREFs of xxxDesktopThreadWaiter @ 0x1C0094300
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006D360 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThread @ 0x1C0093DC0 (xxxDesktopThread.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C00719A0 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?ClearQueueServerEvent@@YAXG@Z @ 0x1C0094494 (-ClearQueueServerEvent@@YAXG@Z.c)
 *     zzzWakeInputIdle @ 0x1C00944D0 (zzzWakeInputIdle.c)
 *     xxxRemoveQueueCompletion @ 0x1C00946F4 (xxxRemoveQueueCompletion.c)
 *     SleepInputIdle @ 0x1C00947C4 (SleepInputIdle.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00E8454 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C012C5E4 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C012C60C (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(char a1, unsigned __int8 a2)
{
  LegacyInputDispatcher *v4; // r15
  int v5; // r14d
  char v6; // r12
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // al
  __int64 result; // rax
  __int64 v11; // rax
  char v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF
  int v14; // [rsp+84h] [rbp+1Ch]

  v4 = (LegacyInputDispatcher *)qword_1C0361188;
  if ( gptiCurrent == gTermIO[2] )
    v4 = (LegacyInputDispatcher *)qword_1C0361190;
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
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v12);
      if ( a1 || gDWMCapable )
      {
        v8 = LegacyInputDispatcher::WaitAndDispatch(v4);
      }
      else
      {
        v13 = 0;
        v14 = 1536;
        v11 = SGDGetUserSessionState(v7);
        v5 = CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
               *(CBaseInput **)(v11 + 3272),
               (struct CEventBitmap *)&v13,
               v4);
        if ( v5 < 0 )
          goto LABEL_13;
        v8 = LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(v4);
      }
      v5 = v8;
LABEL_13:
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v12);
      if ( v5 != *((_DWORD *)v4 + 15) )
        break;
      v9 = (unsigned int)xxxRemoveQueueCompletion() != 0;
      if ( a1 )
        goto LABEL_15;
      if ( !v9 || (a2 & *(_BYTE *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) & 8) != 0 )
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
