/*
 * XREFs of PiSwFindChildren @ 0x140688518
 * Callers:
 *     PipEnumerateCompleted @ 0x140685510 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x140791F24 (PiSwProcessParentStartIrp.c)
 *     PiSwStopDestroy @ 0x140867198 (PiSwStopDestroy.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140688540 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rcx
  __int64 result; // rax

  BusRelations = PiSwFindBusRelations();
  result = 0LL;
  if ( BusRelations )
    return BusRelations + 16;
  return result;
}
