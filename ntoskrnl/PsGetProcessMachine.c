/*
 * XREFs of PsGetProcessMachine @ 0x14070A370
 * Callers:
 *     PspSelectMachineForProcess @ 0x14070797C (PspSelectMachineForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessMachine(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 2412);
}
