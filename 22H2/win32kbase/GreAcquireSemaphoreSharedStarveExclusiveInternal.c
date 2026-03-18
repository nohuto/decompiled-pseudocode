/*
 * XREFs of GreAcquireSemaphoreSharedStarveExclusiveInternal @ 0x1C00CC860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall GreAcquireSemaphoreSharedStarveExclusiveInternal(PERESOURCE Resource)
{
  BOOLEAN result; // al

  if ( Resource )
  {
    PsEnterPriorityRegion(Resource);
    KeEnterCriticalRegion();
    return ExAcquireSharedStarveExclusive(Resource, 1u);
  }
  return result;
}
