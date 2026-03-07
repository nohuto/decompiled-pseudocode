char __fastcall ShellWindowManagement::EligibleWindow(
        ShellWindowManagement **this,
        const struct tagWND *a2,
        unsigned int a3)
{
  struct tagWND *v3; // r9
  char v4; // bl

  if ( !ShellWindowManagement::BehaviorEnabled(this[3], (const struct tagDESKTOP *)0x1FF, a3) )
    return 0;
  v4 = 1;
  if ( !anonymous_namespace_::EligibleWindow(v3, 1) )
    return 0;
  return v4;
}
