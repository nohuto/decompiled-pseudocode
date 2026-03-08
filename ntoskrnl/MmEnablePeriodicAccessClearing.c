/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x140A85978
 * Callers:
 *     PfTAccessTracingCleanup @ 0x140A844E0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140A858C4 (PfTAccessTracingStart.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 */

void *__fastcall MmEnablePeriodicAccessClearing(char a1)
{
  void *v2; // rcx
  void *result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextPartition(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 16920LL) + 55LL) = a1;
  }
  return result;
}
