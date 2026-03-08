/*
 * XREFs of SymCryptFatal @ 0x14056ADB4
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED7C0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED898 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptInitEnvCommon @ 0x1403F08DC (SymCryptInitEnvCommon.c)
 *     SymCryptFdefModSetRandomGeneric @ 0x1403FF2CC (SymCryptFdefModSetRandomGeneric.c)
 * Callees:
 *     SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED794 (SymCryptFatalEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall __noreturn SymCryptFatal(ULONG_PTR a1)
{
  SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(a1);
}
