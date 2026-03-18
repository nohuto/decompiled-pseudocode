/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x14079C720
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9A08 (PnpAcquireDependencyRelationsLock.c)
 *     PiPnpRtlEndOperation @ 0x140788CDC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788EE0 (PiPnpRtlBeginOperation.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C794 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C854 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x14079C9A8 (PipAddtoRebuildPowerRelationsQueue.c)
 */

void __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(a1 + 32));
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  PipProcessRebuildPowerRelationsQueue();
  PiPnpRtlBeginOperation((__int64 **)&P);
  PipNotifyDeviceDependencyList(a1, 0LL);
  PipNotifyDeviceDependencyList(a1, 1LL);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
}
