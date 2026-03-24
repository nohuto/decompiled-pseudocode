/*
 * XREFs of _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023D0D8
 * Callers:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C003E18C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C00DA860 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C00D7534 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 */

struct tagWND *__fastcall anonymous_namespace_::SeverWindowManagementConnectionToShell(
        ShellWindowManagement *a1,
        __int64 a2,
        struct tagWND *a3)
{
  struct tagWND *result; // rax

  result = ShellWindowManagement::SetWindow(a1, 0LL, a3);
  if ( result )
    return (struct tagWND *)PostMessage((int)result, 835, 0, 0);
  return result;
}
