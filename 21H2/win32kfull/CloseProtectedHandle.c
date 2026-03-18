/*
 * XREFs of CloseProtectedHandle @ 0x1C00A6598
 * Callers:
 *     _CloseDesktop @ 0x1C00A2C38 (_CloseDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00A64D0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00A65F0 (xxxSetCsrssThreadDesktop.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C00CE790 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1C00CEF78 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00CF130 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01E418C (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E43F8 (xxxResolveDesktopForWOW.c)
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
