/*
 * XREFs of SqmPenDownCount @ 0x1C01EE670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 SqmPenDownCount()
{
  __int64 result; // rax

  result = gSqmPenDownCount;
  if ( gSqmPenDownCount )
    return --gSqmPenDownCount;
  return result;
}
