/*
 * XREFs of PostShellHookMessages @ 0x1C013BAF0
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 */

void __fastcall PostShellHookMessages(unsigned int a1, __int64 a2)
{
  PostShellHookMessagesEx(a1, a2, 0LL);
}
