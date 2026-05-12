/*
 * XREFs of StorPortStallExecution @ 0x1C00126D0
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C007F7C0 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
