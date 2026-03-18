/*
 * XREFs of ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0026648
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1, __int64 a2)
{
  return xxxShowWindowEx(a1, a2, a2 & 0x10000);
}
