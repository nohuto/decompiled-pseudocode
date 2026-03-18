/*
 * XREFs of SymCryptFatal @ 0x14056AF38
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403FB1CC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403FB2A4 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptInitEnvCommon @ 0x1403FDD40 (SymCryptInitEnvCommon.c)
 *     SymCryptParallelHashProcess @ 0x1403FDE00 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403FE0B0 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptIntToModulus @ 0x140400E04 (SymCryptIntToModulus.c)
 *     SymCryptRsaCoreEnc @ 0x1404019F4 (SymCryptRsaCoreEnc.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 *     SymCryptSizeofEcpointEx @ 0x14040721C (SymCryptSizeofEcpointEx.c)
 *     SymCryptFdefIntToDivisor @ 0x14040B088 (SymCryptFdefIntToDivisor.c)
 *     SymCryptFdefModElementSetValueUint32Generic @ 0x14040BCF0 (SymCryptFdefModElementSetValueUint32Generic.c)
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFdefModSetRandomGeneric @ 0x14040C7CC (SymCryptFdefModSetRandomGeneric.c)
 *     SymCryptFdefModulusCreate @ 0x14040CC4C (SymCryptFdefModulusCreate.c)
 *     SymCryptFdefDigitsFromBits @ 0x14040CFD4 (SymCryptFdefDigitsFromBits.c)
 *     SymCryptFdefDivisorCreate @ 0x14040D018 (SymCryptFdefDivisorCreate.c)
 *     SymCryptFdefIntCreate @ 0x14040D260 (SymCryptFdefIntCreate.c)
 *     SymCryptFdefSizeofIntFromDigits @ 0x14040D570 (SymCryptFdefSizeofIntFromDigits.c)
 * Callees:
 *     SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x1403FB1A0 (SymCryptFatalEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall __noreturn SymCryptFatal(ULONG_PTR a1)
{
  SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(a1);
}
