/*
 * XREFs of NtYieldExecution @ 0x1402F64B0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x1402F64D0 (KeYieldExecution.c)
 */

void __noreturn NtYieldExecution()
{
  KeYieldExecution(0LL);
}
