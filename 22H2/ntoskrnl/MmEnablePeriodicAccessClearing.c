/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x1409904F8
 * Callers:
 *     PfTAccessTracingStart @ 0x140990448 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099A9EC (PfTAccessTracingCleanup.c)
 * Callees:
 *     PsGetNextPartition @ 0x140303EF8 (PsGetNextPartition.c)
 */

_QWORD *__fastcall MmEnablePeriodicAccessClearing(char a1)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextPartition(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(*(_QWORD *)(*result + 6848LL) + 55LL) = a1;
  }
  return result;
}
