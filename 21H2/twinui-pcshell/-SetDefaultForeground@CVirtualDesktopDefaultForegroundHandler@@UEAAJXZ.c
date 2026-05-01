/*
 * XREFs of ?SetDefaultForeground@CVirtualDesktopDefaultForegroundHandler@@UEAAJXZ @ 0x1804A73E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C0284 (-ResultFromKnownLastError@@YAJXZ.c)
 */

HWND __fastcall CVirtualDesktopDefaultForegroundHandler::SetDefaultForeground(
        CVirtualDesktopDefaultForegroundHandler *this)
{
  HWND result; // rax
  unsigned int v2; // ebx

  result = GetShellWindow();
  v2 = 0;
  if ( result )
  {
    if ( !SetForegroundWindow(result) )
      return (HWND)(unsigned int)ResultFromKnownLastError();
    return (HWND)v2;
  }
  return result;
}
