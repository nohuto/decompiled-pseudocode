/*
 * XREFs of _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C021DAC4
 * Callers:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C004C7AC (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C021E20C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 * Callees:
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C003B148 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 */

struct tagWND *__fastcall anonymous_namespace_::SeverWindowManagementConnectionToShell(
        __int64 a1,
        __int64 a2,
        struct tagWND *a3)
{
  struct tagWND *result; // rax

  result = ShellWindowManagement::SetWindow(*(ShellWindowManagement **)(gptiCurrent + 456LL), 0LL, a3);
  if ( result )
    return (struct tagWND *)PostMessage(result, 0x343u, 0LL, 0LL);
  return result;
}
