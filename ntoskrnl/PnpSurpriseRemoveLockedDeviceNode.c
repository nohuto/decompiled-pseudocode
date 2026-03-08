/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1408635A0 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PipRestoreDevNodeState @ 0x1403B1C68 (PipRestoreDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x1403CF1B8 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1403CFA9C (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1403D162C (IopDecrementDeviceObjectHandleCount.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipClearDevNodeFlags @ 0x14068816C (PipClearDevNodeFlags.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x140866C4C (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 *     PiDmaGuardProcessPostRemove @ 0x140867254 (PiDmaGuardProcessPostRemove.c)
 *     PnpDisableDeviceInterfaces @ 0x14087E3BC (PnpDisableDeviceInterfaces.c)
 *     PipConvertResolutionsToReservations @ 0x1409513EC (PipConvertResolutionsToReservations.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR MaxDataSize, int a2, int a3)
{
  struct _DEVICE_OBJECT *v3; // r12
  int v5; // ecx
  int v8; // ebp
  int v9; // esi
  __int64 v10; // rbx
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r15
  void *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v5 = *(_DWORD *)(MaxDataSize + 300);
  v19 = 0LL;
  v8 = 768;
  if ( (unsigned int)(v5 - 784) <= 1 )
  {
    v8 = v5;
    PipRestoreDevNodeState(MaxDataSize);
  }
  *(_WORD *)(MaxDataSize + 466) = 0;
  v9 = *(_DWORD *)(MaxDataSize + 300);
  if ( v9 == 787 && v8 == 784 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16);
    PipSetDevNodeState(MaxDataSize, 789);
    return;
  }
  v10 = *(_QWORD *)(MaxDataSize + 8);
  if ( v10 )
  {
    do
    {
      v16 = *(_DWORD *)(v10 + 396);
      v17 = *(_QWORD *)v10;
      if ( (v16 & 0x10) != 0 )
      {
        v16 &= ~0x10u;
        *(_DWORD *)(v10 + 396) = v16;
      }
      if ( *(_QWORD *)(v10 + 416) || *(_QWORD *)(v10 + 544) || (v16 & 0x40) != 0 )
        IopReleaseDeviceResources((__int64 *)v10, 0);
      PipSetDevNodeState(v10, 789);
      v10 = v17;
    }
    while ( v17 );
  }
  if ( v9 == 780 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v3, 1, (ULONG_PTR *)&v19);
    PnpUnlockMountableDevice((__int64)v3);
    PipClearDevNodeFlags(MaxDataSize, 0x1000000);
  }
  switch ( *(_DWORD *)(MaxDataSize + 300) )
  {
    case 0x301:
    case 0x302:
    case 0x303:
    case 0x304:
    case 0x313:
    case 0x314:
    case 0x315:
    case 0x316:
      goto LABEL_12;
    default:
      v11 = IopRemoveDevice(v3, 23);
      PnpDisableDeviceInterfaces(MaxDataSize + 40);
      if ( v11 >= 0 )
        IopReleaseDeviceResources((__int64 *)MaxDataSize, 0);
      v12 = MaxDataSize;
      if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
      {
        v13 = 789;
LABEL_11:
        PipSetDevNodeState(v12, v13);
        goto LABEL_12;
      }
      PipSetDevNodeState(MaxDataSize, 787);
      v13 = 784;
      if ( v8 == 784 )
      {
        v12 = MaxDataSize;
        goto LABEL_11;
      }
LABEL_12:
      if ( v9 == 780 )
      {
        v18 = (void *)*((_QWORD *)&v19 + 1);
        if ( *((_QWORD *)&v19 + 1) )
        {
          IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v19 + 1));
          ObfDereferenceObject(v18);
        }
      }
      if ( a2 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
        PipSetDevNodeProblem(MaxDataSize, a2, a3);
      if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
      {
        PnpAcquireDependencyRelationsLock(1);
        v14 = *(_QWORD *)(MaxDataSize + 32);
        if ( v14 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 80LL);
          if ( v15 )
            PipConvertResolutionsToReservations(v15);
        }
        ExReleaseResourceLite(&PiDependencyRelationsLock);
        PpDevNodeUnlockTree(0);
        PipProcessRebuildPowerRelationsQueue();
      }
      PiDmaGuardProcessPostRemove(MaxDataSize, a2, 0);
      return;
  }
}
