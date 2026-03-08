/*
 * XREFs of __report_rangecheckfailure @ 0x1C012BEC0
 * Callers:
 *     SetAppCompatFlags @ 0x1C001F6C0 (SetAppCompatFlags.c)
 *     RemoveHmodDependency @ 0x1C009D71C (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C00C9400 (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C00EF850 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C8DCC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C02A3450 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C02A3620 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9AC4 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02C64D0 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
