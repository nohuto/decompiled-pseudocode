/*
 * XREFs of ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C00B75F0
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0028F90 (NtUserSetWindowPos.c)
 *     NtUserNotifyWinEvent @ 0x1C00E5E80 (NtUserNotifyWinEvent.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0200574 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall ShellWindowManagement::ExtendedBehaviorEnabled(ShellWindowManagement *this)
{
  int v1; // ebx
  struct tagTHREADINFO *v2; // rax
  char v3; // dl
  __int64 v4; // r8

  v1 = (int)this;
  v2 = PtiCurrentShared();
  v3 = 0;
  v4 = *((_QWORD *)v2 + 57);
  if ( v4 )
    return (v1 & *(_DWORD *)(v4 + 336) & 0xFF000000) != 0;
  return v3;
}
