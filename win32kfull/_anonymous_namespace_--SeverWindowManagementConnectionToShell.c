struct tagWND *__fastcall anonymous_namespace_::SeverWindowManagementConnectionToShell(
        __int64 a1,
        __int64 a2,
        struct tagWND *a3)
{
  struct tagWND *result; // rax

  result = ShellWindowManagement::SetWindow(*(ShellWindowManagement **)(gptiCurrent + 456LL), 0LL, a3);
  if ( result )
    return (struct tagWND *)PostMessage((unsigned __int64)result, 0x343u, 0LL, 0LL);
  return result;
}
