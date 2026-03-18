/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0090B90
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C0090A74 (CheckOrAcquireDwmStateLock.c)
 *     GreIsDwmStateLocked @ 0x1C0090B00 (GreIsDwmStateLocked.c)
 *     UserReferenceDwmApiPort @ 0x1C0090B20 (UserReferenceDwmApiPort.c)
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
