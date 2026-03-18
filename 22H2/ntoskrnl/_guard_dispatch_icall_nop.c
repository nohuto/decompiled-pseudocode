/*
 * XREFs of _guard_dispatch_icall_nop @ 0x140419E90
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403F5EC0 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403F6180 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403F6308 (SymCryptParallelHashSetNextWork.c)
 *     SymCryptHashAppendInternal @ 0x140402868 (SymCryptHashAppendInternal.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x140402958 (SymCryptHashCommonPaddingMd4Style.c)
 *     SymCryptFdefIntToModElement @ 0x140403804 (SymCryptFdefIntToModElement.c)
 *     SymCryptFdefIntToModulus @ 0x14040388C (SymCryptFdefIntToModulus.c)
 *     SymCryptFdefModElementGetValue @ 0x140403B88 (SymCryptFdefModElementGetValue.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140419EB0 (_guard_xfg_dispatch_icall_nop.c)
 *     KeGuardDispatchICall @ 0x140B147A0 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
