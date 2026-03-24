/*
 * XREFs of __report_rangecheckfailure @ 0x1C01655E0
 * Callers:
 *     SetAppCompatFlags @ 0x1C0013E30 (SetAppCompatFlags.c)
 *     RemoveHmodDependency @ 0x1C002031C (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C011D348 (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C0131590 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D67E8 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C02987E0 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C02989B0 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029E27C (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02AF1F0 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
