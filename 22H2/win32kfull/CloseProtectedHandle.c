/*
 * XREFs of CloseProtectedHandle @ 0x1C00D9098
 * Callers:
 *     EditionOpenInputDesktopEntryPoint @ 0x1C000EA00 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1C000F208 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C000F4F0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00D8E60 (xxxRestoreCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C00D8F78 (_CloseDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00D90F0 (xxxSetCsrssThreadDesktop.c)
 *     _OpenThreadDesktop @ 0x1C01E9438 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E96A4 (xxxResolveDesktopForWOW.c)
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
