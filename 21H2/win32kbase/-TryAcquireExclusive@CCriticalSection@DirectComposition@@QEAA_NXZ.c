/*
 * XREFs of ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C00B8040
 * Callers:
 *     ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C00B7E10 (-OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 *     ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C00B7F94 (-OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCriticalSection::TryAcquireExclusive(PERESOURCE Resource)
{
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(Resource, 0) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
