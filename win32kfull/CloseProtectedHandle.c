/*
 * XREFs of CloseProtectedHandle @ 0x1C0094854
 * Callers:
 *     _CloseDesktop @ 0x1C00938E8 (_CloseDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0093CF0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00948B0 (xxxSetCsrssThreadDesktop.c)
 *     _OpenThreadDesktop @ 0x1C00BEF04 (_OpenThreadDesktop.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C00BF2E0 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1C00BF4B0 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00BF660 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 *     xxxResolveDesktopForWOW @ 0x1C01BFDF8 (xxxResolveDesktopForWOW.c)
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
