/*
 * XREFs of ?OnPointerCursorOperation@@YAXXZ @ 0x1C00D69D0
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C007B640 (TransitionCursorSuppressionState.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D6A80 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D6CE8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C0109FBC (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01430AC (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01AEC54 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01AECF8 (-xxxSwitchCursors@@YAXHH@Z.c)
 */

void OnPointerCursorOperation(void)
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int16 v2; // bx
  __int64 v3; // rcx
  const struct tagPOINTERCURSORDATA *v4; // rbx
  Feedback *v5; // rcx
  __int64 v6; // rcx
  BOOL v7; // ecx
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v12,
    "PointerCursorOperation",
    0LL);
  _m_prefetchw(&Feedback::gdwPointerCursorOps);
  v0 = Feedback::gdwPointerCursorOps;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0, v0);
  }
  while ( v1 != v0 );
  v2 = v0;
  if ( (v0 & 1) != 0 )
  {
    EnterCrit(1LL, 0LL);
    Feedback::xxxRestoreMouseCursors(v5);
    UserSessionSwitchLeaveCrit(v6);
  }
  if ( (v2 & 0x700) != 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( (v2 & 0x100) != 0 )
    {
      v7 = 1;
      v8 = 1;
    }
    else
    {
      v7 = (v2 & 0x400) != 0;
      v8 = 0;
    }
    xxxSwitchCursors(v7, v8);
    Feedback::gfInRange = 0;
    UserSessionSwitchLeaveCrit(v9);
  }
  if ( (v2 & 2) != 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( gCursorSuppressionState == 4 )
    {
      v11 = 8;
    }
    else if ( gCursorSuppressionState == 5 )
    {
      v11 = 1;
    }
    else
    {
      v10 = (unsigned int)(gCursorSuppressionState - 6);
      if ( gCursorSuppressionState == 6 )
      {
        v11 = 2;
      }
      else
      {
        if ( gCursorSuppressionState != 7 )
        {
LABEL_25:
          UserSessionSwitchLeaveCrit(v10);
          goto LABEL_7;
        }
        v11 = 3;
      }
    }
    TransitionCursorSuppressionState(v11, 0);
    goto LABEL_25;
  }
LABEL_7:
  if ( (v2 & 4) != 0 )
  {
    EnterCrit(1LL, 0LL);
    xxxEnsureAllDpiCursors();
    UserSessionSwitchLeaveCrit(v3);
  }
  v4 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64((volatile __int64 *)&Feedback::gppcdLatest, 0LL);
  if ( v4 )
  {
    RenderCursor(v4);
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&(&Feedback::gppcdFree)[(v4 - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                       / 0xCuLL],
      (signed __int64)v4,
      0LL);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v12);
}
