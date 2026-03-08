/*
 * XREFs of _guard_dispatch_icall_nop @ 0x140411B00
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403F09A0 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403F0C60 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403F0DE8 (SymCryptParallelHashSetNextWork.c)
 *     SymCryptHashAppendInternal @ 0x1403FD348 (SymCryptHashAppendInternal.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x1403FD438 (SymCryptHashCommonPaddingMd4Style.c)
 *     SymCryptFdefIntToModElement @ 0x1403FE2E4 (SymCryptFdefIntToModElement.c)
 *     SymCryptFdefIntToModulus @ 0x1403FE36C (SymCryptFdefIntToModulus.c)
 *     SymCryptFdefModElementGetValue @ 0x1403FE668 (SymCryptFdefModElementGetValue.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140411B20 (_guard_xfg_dispatch_icall_nop.c)
 *     KeGuardDispatchICall @ 0x140B107A0 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
