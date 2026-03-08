/*
 * XREFs of PostShellHookMessages @ 0x1C012E4B0
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C009F110 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 */

void __fastcall PostShellHookMessages(unsigned int a1, __int64 a2)
{
  PostShellHookMessagesEx(a1, a2, 0LL);
}
