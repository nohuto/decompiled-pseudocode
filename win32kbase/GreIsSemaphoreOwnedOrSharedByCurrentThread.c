/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0091990
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C0091914 (CheckOrAcquireDwmStateLock.c)
 *     GreIsDwmStateLocked @ 0x1C0091960 (GreIsDwmStateLocked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIsSemaphoreOwnedOrSharedByCurrentThread(PERESOURCE Resource)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(Resource) || ExIsResourceAcquiredSharedLite(Resource) )
    return 1;
  return v2;
}
