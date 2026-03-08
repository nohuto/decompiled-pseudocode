/*
 * XREFs of ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C003A968
 * Callers:
 *     ACPIProcessorDeviceControl @ 0x1C008C570 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C003A504 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerEvaluateLpiObjects @ 0x1C003A6D0 (ACPIProcessorContainerEvaluateLpiObjects.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C003A774 (ACPIProcessorContainerFillIoctlBuffer.c)
 */

__int64 __fastcall ACPIProcessorContainerGetLpiStatesIoctl(PIRP Irp, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // r14
  int v6; // ebx
  unsigned __int64 v7; // rsi
  _IRP *MasterIrp; // r8
  int v9; // eax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  Irp->IoStatus.Information = 0LL;
  v5 = v4;
  if ( *(_DWORD *)(a2 + 8) >= 0x20u )
  {
    if ( !AcpiProcessorContainerHierarchyLocked )
    {
      AcpiProcessorContainerHierarchyLocked = 1;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
      v11 = 0;
      v6 = ACPIProcessorContainerEvaluateLpiObjects((_QWORD **)&AcpiProcessorContainerRootList, (int *)&v11);
      v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      if ( v6 < 0 )
        goto LABEL_13;
      AcpiProcessorContainerHierarchyEvaluated = 1;
    }
    if ( AcpiProcessorContainerHierarchyEvaluated )
    {
      v11 = 24 * AcpiProcessorContainerCount + 8;
      v6 = ACPIProcessorContainerComputeIoctlPayloadSize(&AcpiProcessorContainerRootList, &v11);
      if ( v6 >= 0 )
      {
        v7 = v11;
        MasterIrp = Irp->AssociatedIrp.MasterIrp;
        *(_DWORD *)&MasterIrp->Type = v11;
        if ( *(_DWORD *)(a2 + 8) >= (unsigned int)v7 )
        {
          v9 = AcpiProcessorContainerCount;
          *(_DWORD *)&MasterIrp->AllocationProcessorNumber = AcpiProcessorContainerCount;
          v11 = 24 * v9 + 8;
          v6 = ACPIProcessorContainerFillIoctlBuffer(
                 (__int64 **)&AcpiProcessorContainerRootList,
                 -1,
                 (__int64)MasterIrp,
                 (int *)&v11,
                 *(_DWORD *)(a2 + 8));
          if ( v6 >= 0 )
            Irp->IoStatus.Information = v7;
        }
        else
        {
          Irp->IoStatus.Information = 4LL;
          v6 = -2147483643;
        }
      }
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741789;
  }
LABEL_13:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
