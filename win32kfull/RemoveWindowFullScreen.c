/*
 * XREFs of RemoveWindowFullScreen @ 0x1C012C684
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 */

void __fastcall RemoveWindowFullScreen(__int64 a1)
{
  *(_DWORD *)(a1 + 320) &= ~0x400u;
  PostShellHookMessagesEx(0x36u, *(_QWORD *)a1, 0LL);
}
