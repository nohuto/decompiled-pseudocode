/*
 * XREFs of PnpRestartDeviceNode @ 0x140955D4C
 * Callers:
 *     PiRestartRemovalRelations @ 0x14085F6D8 (PiRestartRemovalRelations.c)
 *     PiRestartDevice @ 0x1408608D0 (PiRestartDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessClearDeviceProblem @ 0x140956400 (PiProcessClearDeviceProblem.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1409607E0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14096EA58 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PipClearDevNodeUserFlags @ 0x1406831A8 (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x14068816C (PipClearDevNodeFlags.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRestartDeviceNode(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  void *v4; // rcx

  PpDevNodeLockTree(4);
  if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
  {
    PipClearDevNodeUserFlags(a1, 5);
    PipClearDevNodeFlags(a1, 1081344);
    *(_DWORD *)(a1 + 704) &= 0xFFFE3C03;
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 300);
    *(_DWORD *)(a1 + 296) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( (unsigned int)(v3 - 769) > 1 )
    {
      PipClearDevNodeFlags(a1, 2082475264);
      if ( *(_WORD *)(a1 + 56) )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
        *(_DWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = *(void **)(a1 + 440);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(a1 + 440) = 0LL;
        PipClearDevNodeFlags(a1, 512);
      }
      ExReleaseFastMutex(&PiResourceListLock);
    }
    *(_DWORD *)(a1 + 660) = -1;
    PipSetDevNodeState(a1, 769);
  }
  else
  {
    v2 = -1073741823;
  }
  PpDevNodeUnlockTree(4);
  return v2;
}
