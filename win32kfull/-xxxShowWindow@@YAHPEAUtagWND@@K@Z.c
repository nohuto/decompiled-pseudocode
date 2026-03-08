/*
 * XREFs of ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C002990C
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1, __int64 a2)
{
  return xxxShowWindowEx(a1, a2, a2 & 0x10000);
}
