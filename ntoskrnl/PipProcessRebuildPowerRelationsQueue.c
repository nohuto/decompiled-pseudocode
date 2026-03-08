/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x1406819F4
 * Callers:
 *     IoResolveDependency @ 0x1403943F0 (IoResolveDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406818C0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpDeleteAllDependencyRelations @ 0x140782F5C (PnpDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x140951200 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x140951330 (IoSetDependency.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140681BD0 (PipIsDeviceReadyForPowerRelations.c)
 *     PiGetProviderList @ 0x1406CB884 (PiGetProviderList.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PiEnumerateProviderListEntry @ 0x140838DE8 (PiEnumerateProviderListEntry.c)
 *     PiQueryPowerRelations @ 0x14086CB24 (PiQueryPowerRelations.c)
 *     PipDeleteDependencyNode @ 0x140951668 (PipDeleteDependencyNode.c)
 */

void PipProcessRebuildPowerRelationsQueue()
{
  __int64 v0; // rcx
  __int64 *v1; // rbx
  __int64 *v2; // rdi
  __int64 *v3; // r11
  _QWORD *v4; // rbp
  _QWORD *v5; // r11
  _QWORD **ProviderList; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
  LOBYTE(v0) = 1;
  PnpAcquireDependencyRelationsLock(v0);
LABEL_2:
  v1 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    if ( v1 == &PiRebuildPowerRelationsQueue )
      goto LABEL_4;
    v2 = v1 - 9;
    v3 = v1;
    v4 = (_QWORD *)*(v1 - 3);
    v1 = (__int64 *)*v1;
    if ( !v4 )
      break;
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(v4) )
    {
      v14 = 0LL;
      ProviderList = (_QWORD **)PiGetProviderList(v4);
      v7 = *ProviderList;
      if ( *ProviderList == ProviderList )
      {
LABEL_10:
        v8 = *v5;
        if ( *(_QWORD **)(*v5 + 8LL) != v5 )
          goto LABEL_15;
        v9 = (_QWORD *)v5[1];
        if ( (_QWORD *)*v9 != v5 )
          goto LABEL_15;
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v5[1] = v5;
        *v5 = v5;
        v10 = (*((_DWORD *)v2 + 22))-- == 1;
        if ( v10 )
          PipDeleteDependencyNode(v2);
        ExReleaseResourceLite(&PiDependencyRelationsLock);
        PpDevNodeUnlockTree(0LL);
        LOBYTE(v11) = 1;
        PiQueryPowerRelations(*(_QWORD *)(v4[39] + 40LL), v11);
        ObfDereferenceObjectWithTag(v4, 0x44706E50u);
        LOBYTE(v12) = 1;
        PnpAcquireDependencyRelationsLock(v12);
        goto LABEL_2;
      }
      while ( 1 )
      {
        PiEnumerateProviderListEntry(v7, &v14, 0LL);
        if ( !(unsigned __int8)PipIsDeviceReadyForPowerRelations(v14) )
          break;
        v7 = (_QWORD *)*v7;
        if ( v7 == ProviderList )
          goto LABEL_10;
      }
    }
  }
  if ( (__int64 *)v1[1] != v3 || (v13 = (__int64 **)v3[1], *v13 != v3) )
LABEL_15:
    __fastfail(3u);
  *v13 = v1;
  v1[1] = (__int64)v13;
  v3[1] = (__int64)v3;
  *v3 = (__int64)v3;
  v10 = (*((_DWORD *)v2 + 22))-- == 1;
  if ( v10 )
    PipDeleteDependencyNode(v2);
LABEL_4:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0LL);
  ExReleaseFastMutex(&PnpRebuildPowerRelationsQueueLock);
}
