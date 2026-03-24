/*
 * XREFs of __report_rangecheckfailure @ 0x1C0165DB0
 * Callers:
 *     SetAppCompatFlags @ 0x1C0013E30 (SetAppCompatFlags.c)
 *     RemoveHmodDependency @ 0x1C00203BC (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C011D6C8 (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C0131940 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6DA8 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C0298E10 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0298FE0 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029E8AC (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02AF860 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
