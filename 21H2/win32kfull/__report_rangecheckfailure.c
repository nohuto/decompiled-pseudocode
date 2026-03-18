/*
 * XREFs of __report_rangecheckfailure @ 0x1C01593E0
 * Callers:
 *     RemoveHmodDependency @ 0x1C0025104 (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C00781A4 (xxxDoSysExpunge.c)
 *     SetAppCompatFlags @ 0x1C009CB70 (SetAppCompatFlags.c)
 *     NtUserRemoteConnect @ 0x1C00D46B0 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D26C0 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C0297690 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0297860 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029D18C (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02ADFA0 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
