/*
 * XREFs of __report_rangecheckfailure @ 0x1C0138470
 * Callers:
 *     SetAppCompatFlags @ 0x1C006D270 (SetAppCompatFlags.c)
 *     xxxDoSysExpunge @ 0x1C007119C (xxxDoSysExpunge.c)
 *     RemoveHmodDependency @ 0x1C0071408 (RemoveHmodDependency.c)
 *     NtUserRemoteConnect @ 0x1C00B7330 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C7C6C (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C02A0D00 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C02A0ED0 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A73E4 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02C3CD0 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
