/*
 * XREFs of NtYieldExecution @ 0x1403C8D90
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 */

void __noreturn NtYieldExecution()
{
  KeYieldExecution(0);
}
