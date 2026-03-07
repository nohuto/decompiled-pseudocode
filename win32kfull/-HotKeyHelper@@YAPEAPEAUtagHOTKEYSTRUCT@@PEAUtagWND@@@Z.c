struct tagWND ***__fastcall HotKeyHelper(struct tagWND *a1)
{
  struct tagWND ***result; // rax
  struct tagWND **v3; // rdx

  for ( result = (struct tagWND ***)(SGDGetUserSessionState(a1) + 12720); ; result = (struct tagWND ***)(v3 + 2) )
  {
    v3 = *result;
    if ( !*result || *v3 == a1 )
      break;
  }
  return result;
}
