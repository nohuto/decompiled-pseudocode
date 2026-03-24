/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x140747A0C
 * Callers:
 *     IoResolveDependency @ 0x1403BF100 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14069610C (PnpDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140747934 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14074C7F0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x14089D6C0 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x14089D890 (IoSetDependency.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406B29FC (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140747B40 (PnpReleaseDependencyRelationsLock.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140747BF0 (PipIsDeviceReadyForPowerRelations.c)
 *     PiQueryPowerRelations @ 0x140748844 (PiQueryPowerRelations.c)
 *     PipDereferenceDependencyNode @ 0x140748F60 (PipDereferenceDependencyNode.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140748F80 (PipCheckIfAllProvidersHaveDevnodes.c)
 */

void PipProcessRebuildPowerRelationsQueue()
{
  __int64 *v0; // rsi
  __int64 *v1; // rbx
  _QWORD *v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 **v5; // rcx
  __int64 v6; // rdx
  __int64 **v7; // rax

  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
  PnpAcquireDependencyRelationsLock(1);
LABEL_8:
  v3 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    if ( v3 == &PiRebuildPowerRelationsQueue )
      goto LABEL_10;
    v0 = v3 - 9;
    v1 = v3;
    v2 = (_QWORD *)*(v3 - 3);
    v3 = (__int64 *)*v3;
    if ( !v2 )
      break;
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(v2)
      && (unsigned __int8)PipCheckIfAllProvidersHaveDevnodes(v0) )
    {
      v4 = *v1;
      if ( *(__int64 **)(*v1 + 8) == v1 )
      {
        v5 = (__int64 **)v1[1];
        if ( *v5 == v1 )
        {
          *v5 = (__int64 *)v4;
          *(_QWORD *)(v4 + 8) = v5;
          v1[1] = (__int64)v1;
          *v1 = (__int64)v1;
          PipDereferenceDependencyNode(v0);
          PnpReleaseDependencyRelationsLock();
          LOBYTE(v6) = 1;
          PiQueryPowerRelations(*(_QWORD *)(v2[39] + 40LL), v6);
          ObfDereferenceObjectWithTag(v2, 0x44706E50u);
          PnpAcquireDependencyRelationsLock(1);
          goto LABEL_8;
        }
      }
LABEL_14:
      __fastfail(3u);
    }
  }
  if ( (__int64 *)v3[1] != v1 )
    goto LABEL_14;
  v7 = (__int64 **)v1[1];
  if ( *v7 != v1 )
    goto LABEL_14;
  *v7 = v3;
  v3[1] = (__int64)v7;
  v1[1] = (__int64)v1;
  *v1 = (__int64)v1;
  PipDereferenceDependencyNode(v0);
LABEL_10:
  PnpReleaseDependencyRelationsLock();
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
}
