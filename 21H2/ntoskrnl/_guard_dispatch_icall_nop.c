/*
 * XREFs of _guard_dispatch_icall_nop @ 0x14041AF50
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403FDE00 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403FE0B0 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403FE268 (SymCryptParallelHashSetNextWork.c)
 *     SymCryptHashAppendInternal @ 0x14040A7D8 (SymCryptHashAppendInternal.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x14040A8C8 (SymCryptHashCommonPaddingMd4Style.c)
 *     SymCryptFdefIntToModElement @ 0x14040B76C (SymCryptFdefIntToModElement.c)
 *     SymCryptFdefIntToModulus @ 0x14040B7F4 (SymCryptFdefIntToModulus.c)
 *     SymCryptFdefModElementGetValue @ 0x14040BAF8 (SymCryptFdefModElementGetValue.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14041AF70 (_guard_xfg_dispatch_icall_nop.c)
 *     KeGuardDispatchICall @ 0x140AD23B0 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
