bool __fastcall ShellWindowManagement::WindowSubjectToBehavior(ShellWindowManagement **this, const struct tagWND *a2)
{
  bool result; // al
  __int64 v3; // rcx
  char v4; // r9
  struct tagWND *v5; // r10

  result = ShellWindowManagement::BehaviorEnabled(this[3], a2);
  if ( result )
    return anonymous_namespace_::EligibleWindow(v5, (v4 & 0xC) == 0 || (*(_DWORD *)(v3 + 328) & 0x10000000) == 0);
  return result;
}
