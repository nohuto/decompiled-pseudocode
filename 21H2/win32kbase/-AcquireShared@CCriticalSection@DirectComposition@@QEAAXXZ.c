/*
 * XREFs of ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00BB95C
 * Callers:
 *     NtDCompositionNotifySuperWetInkWork @ 0x1C0211DB0 (NtDCompositionNotifySuperWetInkWork.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCriticalSection::AcquireShared(PERESOURCE Resource)
{
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(Resource, 1u);
}
