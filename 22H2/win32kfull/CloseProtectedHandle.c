/*
 * XREFs of CloseProtectedHandle @ 0x1C006A694
 * Callers:
 *     _OpenDesktop @ 0x1C006737C (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C0067670 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00697C0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0069B30 (xxxRestoreCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C006AE68 (_CloseDesktop.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C006B0C0 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenThreadDesktop @ 0x1C00B2854 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01BEC58 (xxxResolveDesktopForWOW.c)
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
