/*
 * XREFs of ?Synchronize@CSynchronizationManager@DirectComposition@@SAJPEAVCBatch@2@@Z @ 0x1C005F4AC
 * Callers:
 *     NtDCompositionSynchronize @ 0x1C005F260 (NtDCompositionSynchronize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSynchronizationManager::Synchronize(struct DirectComposition::CBatch *a1)
{
  struct _ERESOURCE *v1; // rbx
  bool v3; // zf
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  struct _RTL_GENERIC_TABLE *v6; // rcx
  unsigned int v7; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = DirectComposition::CSynchronizationManager::s_pSyncTableLock;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v1, 1u);
  if ( *((_QWORD *)a1 + 5) )
  {
    v7 = -1073741790;
  }
  else
  {
    v3 = DirectComposition::CSynchronizationManager::s_syncIdCounter == -1LL;
    v4 = DirectComposition::CSynchronizationManager::s_syncIdCounter + 1;
    DirectComposition::CSynchronizationManager::s_syncIdCounter = v4;
    v5 = v4;
    if ( v3 )
    {
      v4 = 1LL;
      DirectComposition::CSynchronizationManager::s_syncIdCounter = 1LL;
      v5 = 1LL;
    }
    v6 = DirectComposition::CSynchronizationManager::s_pSyncTable;
    Buffer[0] = v5;
    *((_QWORD *)a1 + 5) = v4;
    Buffer[1] = a1;
    v7 = RtlInsertElementGenericTable(v6, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000017 : 0;
  }
  ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  KeLeaveCriticalRegion();
  return v7;
}
