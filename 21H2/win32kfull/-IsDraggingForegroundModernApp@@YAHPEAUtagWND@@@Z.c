/*
 * XREFs of ?IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z @ 0x1C020AA34
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C02094E8 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDraggingForegroundModernApp(struct tagWND *a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 1256) & 0x1C0000) == 0x40000
    && *(_QWORD *)(v1 + 1400)
    && *(struct tagWND **)(v1 + 1392) == a1
    && gptiForeground )
  {
    return *(_QWORD *)(v1 + 432) == *(_QWORD *)(gptiForeground + 432LL);
  }
  return v2;
}
