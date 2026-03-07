struct tagWND *__fastcall ShouldProcessHungWindow(struct tagWND *a1)
{
  const struct tagTHREADINFO **TopLevelWindow; // rax
  __int64 v2; // rbx
  const struct tagWND *v3; // rdi

  TopLevelWindow = (const struct tagTHREADINFO **)GetTopLevelWindow((__int64)a1);
  v2 = 0LL;
  v3 = (const struct tagWND *)TopLevelWindow;
  if ( !TopLevelWindow
    || !IsHungWindow(TopLevelWindow)
    || !_ShouldGhostWindow(v3)
    || GetProp((__int64)v3, *(unsigned __int16 *)(gpsi + 900LL), 1u) )
  {
    return 0LL;
  }
  if ( !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v3) )
    return v3;
  return (struct tagWND *)v2;
}
