/*
 * XREFs of PiSwFindChildren @ 0x1407434FC
 * Callers:
 *     PipEnumerateCompleted @ 0x140741820 (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x14074BAC8 (PiSwStopDestroy.c)
 *     PiSwProcessParentStartIrp @ 0x14076D458 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140743524 (PiSwFindBusRelations.c)
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
