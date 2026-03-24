/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C004AB60
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C000DEF0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C004AA44 (CheckOrAcquireDwmStateLock.c)
 *     GreIsDwmStateLocked @ 0x1C004AAD0 (GreIsDwmStateLocked.c)
 *     UserReferenceDwmApiPort @ 0x1C004AAF0 (UserReferenceDwmApiPort.c)
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
