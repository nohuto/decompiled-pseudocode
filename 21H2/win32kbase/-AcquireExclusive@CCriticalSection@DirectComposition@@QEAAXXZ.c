/*
 * XREFs of ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00B8080
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C009549C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00DD120 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00DD2FC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCriticalSection::AcquireExclusive(PERESOURCE Resource)
{
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(Resource, 1u);
}
