/*
 * XREFs of SymCryptFatal @ 0x14056D244
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403F2CE0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403F2DB8 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptInitEnvCommon @ 0x1403F5DFC (SymCryptInitEnvCommon.c)
 *     SymCryptFdefModSetRandomGeneric @ 0x1404047EC (SymCryptFdefModSetRandomGeneric.c)
 * Callees:
 *     SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x1403F2CB4 (SymCryptFatalEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall __noreturn SymCryptFatal(ULONG_PTR a1)
{
  SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(a1);
}
