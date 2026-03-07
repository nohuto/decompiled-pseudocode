char __fastcall IsWindowSubjectToShellSizingPolicy(struct tagWND *a1)
{
  __int64 v1; // rcx
  char v2; // bl
  unsigned int v3; // r8d
  ShellWindowManagement *v4; // r9

  v2 = 0;
  if ( IsSemiMaximized(a1)
    && !ShellWindowManagement::BehaviorEnabled(*(ShellWindowManagement **)(v1 + 24), (const struct tagDESKTOP *)8) )
  {
    return ShellWindowManagement::WindowSubjectToBehavior(v4, (const struct tagWND *)0x40, v3);
  }
  return v2;
}
