/*
 * XREFs of ?ShouldAdjustModernAppFramePriority@@YA_NPEBUtagWND@@@Z @ 0x1C01EBA3C
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01EA0A0 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShouldAdjustModernAppFramePriority(const struct tagWND *a1)
{
  __int64 v1; // rdx
  char v2; // r8

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 1272) & 0x1C0000) == 0x40000
    && *(_QWORD *)(v1 + 1440)
    && *(const struct tagWND **)(v1 + 1432) == a1
    && gptiForeground
    && *(_QWORD *)(v1 + 432) == *(_QWORD *)(gptiForeground + 432LL) )
  {
    return *(_QWORD *)(v1 + 424) != *(_QWORD *)(gptiForeground + 424LL);
  }
  return v2;
}
