/*
 * XREFs of ?xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@UtagPOINT@@KPEAK@Z @ 0x1C020D334
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F75C (-xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A9F8 (-IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z @ 0x1C020AB64 (-MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C020AF14 (-SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020AF98 (-SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020AFC4 (-SetDragOutThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020B688 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020CCA4 (-xxxGetArrangeRectFromHitTarget@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTI.c)
 */

__int64 __fastcall xxxHandleNewDockTargetOrMonitorMove(
        __int64 a1,
        unsigned int a2,
        struct tagMONITOR *a3,
        int a4,
        int a5,
        _DWORD *a6)
{
  __int64 v6; // r15
  struct tagMONITOR *v7; // rbp
  int v12; // ecx
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rsi
  __int128 v16; // xmm6
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // [rsp+30h] [rbp-68h]
  _BYTE v22[16]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+60h] [rbp-38h]

  v6 = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( !*(_DWORD *)(a1 + 240) && !a2 )
  {
    v12 = *(_DWORD *)(a1 + 200);
    if ( (v12 & 0x300) == 0x300 && (((v12 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
    {
      v13 = (__int64)a3;
      do
      {
        v21 = *(_OWORD *)GetMonitorWorkRectForWindow((__int64)v22, v13, *(const struct tagWND **)(a1 + 16));
        if ( IsDockTargetActive(a1, 0) && (int)v21 <= a4 && a4 < SDWORD2(v21) )
          v7 = (struct tagMONITOR *)v13;
        if ( IsDockTargetActive(a1, 3) && (int)v21 <= a4 && a4 < SDWORD2(v21) )
          v6 = v13;
        v15 = *(_QWORD *)(v13 + 96);
        if ( v15 == gpDispInfo + 144LL )
          v15 = *(_QWORD *)(gpDispInfo + 144LL);
        v13 = v15 - 96;
      }
      while ( v13 != *(_QWORD *)(a1 + 232) );
      if ( v6 && v7 )
      {
        v16 = *(_OWORD *)(a1 + 40);
        MoveRect(a1, a5, v14);
        if ( (unsigned int)VerticalSizeRectFromHitTarget(a1, (__int64)v7, 0, v6, a4) )
        {
          *(_DWORD *)(a1 + 240) = 0;
          SetCurrentHitTargetMonitor((struct MOVESIZEDATA *)a1, v7, 1);
          *(_DWORD *)(a1 + 244) = 2;
          return 1LL;
        }
        if ( (*(_DWORD *)(a1 + 200) & 0x2000000) != 0 )
          *(_OWORD *)(a1 + 72) = v16;
        else
          *(_OWORD *)(a1 + 40) = v16;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x2000000) == 0 )
  {
    result = MoveRect(a1, a5, 0);
    if ( !(_DWORD)result )
      return result;
    *a6 |= 4u;
    *(_DWORD *)(a1 + 200) |= 0x2000000u;
  }
  ThreadLock((__int64)a3, (__int64 *)&v23);
  xxxGetArrangeRectFromHitTarget(a1, (__int64)a3, a2);
  if ( a2 )
  {
    if ( a2 - 1 > 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    else
      SetDragOutThresholdAlways((struct MOVESIZEDATA *)a1);
  }
  else
  {
    SetDragInToDragOutThreshold((struct MOVESIZEDATA *)a1);
  }
  MakeArrangedStateObservable((const struct MOVESIZEDATA *)a1);
  *(_DWORD *)(a1 + 240) = a2;
  SetCurrentHitTargetMonitor((struct MOVESIZEDATA *)a1, a3, 1);
  *(_DWORD *)(a1 + 244) = 2;
  ThreadUnlock1(v19, v18, v20);
  return 1LL;
}
