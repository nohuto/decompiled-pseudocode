/*
 * XREFs of SetWF @ 0x1C0138D3C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

char __fastcall SetWF(struct tagWND *a1, unsigned __int16 a2)
{
  return SetOrClrWF(1, a1, a2, 1);
}
