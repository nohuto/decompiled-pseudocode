/*
 * XREFs of ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C02094E8
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z @ 0x1C020AA34 (-IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall AdjustProcessPriorityForDrag(struct MOVESIZEDATA *a1)
{
  struct tagWND *v2; // rcx
  int v3; // eax
  __int64 v4; // rbx
  const struct tagPROCESSINFO *v5; // rdx
  const struct tagPROCESSINFO *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v2 = (struct tagWND *)*((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 50);
  v4 = *((_QWORD *)v2 + 2);
  if ( (v3 & 0x100000) != 0 )
  {
    if ( !(unsigned int)IsDraggingForegroundModernApp(v2) )
    {
      if ( v4 != gptiForeground )
        return;
      v7 = 0LL;
      goto LABEL_8;
    }
    if ( ForegroundBoost::IsProcessPriorityByClassBackground(*(ForegroundBoost **)(v4 + 424), v5)
      && !ForegroundBoost::IsProcessPriorityByClassBackground(*(ForegroundBoost **)(gptiForeground + 424LL), v6) )
    {
      v7 = 1LL;
LABEL_8:
      ForegroundBoost::SetForegroundPriority(v4, v7);
      *((_DWORD *)a1 + 50) |= 0x20000000u;
    }
  }
  else
  {
    if ( (v3 & 0x20000000) == 0 )
      return;
    if ( (unsigned int)IsDraggingForegroundModernApp(v2) )
    {
      if ( v4 == gptiForeground )
        return;
      v8 = 0LL;
    }
    else
    {
      if ( v4 != gptiForeground )
        return;
      v8 = 1LL;
    }
    ForegroundBoost::SetForegroundPriority(v4, v8);
  }
}
