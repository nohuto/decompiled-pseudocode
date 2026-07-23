/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1403F9D60
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403EF7BC (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EFA6C (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403EFC24 (SymCryptParallelHashSetNextWork.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
