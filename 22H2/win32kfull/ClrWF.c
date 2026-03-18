/*
 * XREFs of ClrWF @ 0x1C0138C5C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

char __fastcall ClrWF(struct tagWND *a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 1);
}
