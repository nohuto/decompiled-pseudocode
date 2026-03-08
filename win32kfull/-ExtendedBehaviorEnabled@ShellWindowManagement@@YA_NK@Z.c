/*
 * XREFs of ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C00EFB10
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0067A30 (NtUserSetWindowPos.c)
 *     NtUserNotifyWinEvent @ 0x1C00D8CF0 (NtUserNotifyWinEvent.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C020311C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall ShellWindowManagement::ExtendedBehaviorEnabled(ShellWindowManagement *this)
{
  int v1; // ebx
  struct tagTHREADINFO *v2; // rax
  char v3; // dl
  __int64 v4; // r8

  v1 = (int)this;
  v2 = PtiCurrentShared((__int64)this);
  v3 = 0;
  v4 = *((_QWORD *)v2 + 57);
  if ( v4 )
    return (v1 & *(_DWORD *)(v4 + 328) & 0xFF000000) != 0;
  return v3;
}
