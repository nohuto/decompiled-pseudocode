/*
 * XREFs of ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D2CA0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     SetVisible @ 0x1C004BD40 (SetVisible.c)
 */

void __fastcall xxxProcessMinimizeHungThreadEvent(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
  {
    SetVisible(a1, 1u);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      xxxMinMaximizeEx(a1, 7u, 1, 0LL, 0LL, 0LL);
  }
}
