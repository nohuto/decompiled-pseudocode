/*
 * XREFs of ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C005F1B4
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0061350 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(
        struct DirectComposition::CBatch *a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _RTL_GENERIC_TABLE *v3; // rbx
  PVOID v4; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = DirectComposition::CSynchronizationManager::s_pSyncTableLock;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v1, 1u);
  v3 = DirectComposition::CSynchronizationManager::s_pSyncTable;
  Buffer[0] = *((_QWORD *)a1 + 5);
  Buffer[1] = 0LL;
  v4 = RtlLookupElementGenericTable(DirectComposition::CSynchronizationManager::s_pSyncTable, Buffer);
  if ( v4 )
    RtlDeleteElementGenericTable(v3, v4);
  ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  KeLeaveCriticalRegion();
}
