/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x1406818C0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PipNotifyDeviceDependencyList @ 0x140681934 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140681B48 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 */

__int64 __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = a1;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(v1 + 32));
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0LL);
  PipProcessRebuildPowerRelationsQueue();
  PiPnpRtlBeginOperation(&P);
  PipNotifyDeviceDependencyList(v1, 0LL);
  result = PipNotifyDeviceDependencyList(v1, 1LL);
  if ( P )
    return PiPnpRtlEndOperation(P);
  return result;
}
