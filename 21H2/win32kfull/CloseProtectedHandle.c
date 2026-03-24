/*
 * XREFs of CloseProtectedHandle @ 0x1C00D93E8
 * Callers:
 *     EditionOpenInputDesktopEntryPoint @ 0x1C000EA00 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1C000F208 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C000F4F0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00D91B0 (xxxRestoreCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C00D92C8 (_CloseDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00D9440 (xxxSetCsrssThreadDesktop.c)
 *     _OpenThreadDesktop @ 0x1C01E99F8 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E9C64 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle, KPROCESSOR_MODE a2)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL, 0LL);
  return ObCloseHandle(Handle, a2);
}
