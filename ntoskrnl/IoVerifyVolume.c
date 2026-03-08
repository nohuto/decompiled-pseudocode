/*
 * XREFs of IoVerifyVolume @ 0x140944740
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     IopDereferenceVpbAndFree @ 0x140290FB0 (IopDereferenceVpbAndFree.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IopDecrementVpbRefCount @ 0x14030F780 (IopDecrementVpbRefCount.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IopReferenceVerifyVpb @ 0x14055373C (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x14087017C (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x140871EB0 (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KEVENT *p_DeviceLock; // r12
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  PDEVICE_OBJECT v8; // rbx
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  __int64 Irp; // rax
  IRP *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+40h] BYREF

  p_DeviceLock = &DeviceObject->DeviceLock;
  DeviceObjecta = 0LL;
  v17 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v17, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v17 = 0LL,
          (int)IopMountVolume((ULONG_PTR)DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v17) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v17 )
    {
      IopDecrementVpbRefCount(v17, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = DeviceObjecta;
  if ( DeviceObjecta->AttachedDevice )
  {
    AttachedDevice = DeviceObjecta->AttachedDevice;
    do
    {
      v8 = AttachedDevice;
      AttachedDevice = AttachedDevice->AttachedDevice;
    }
    while ( AttachedDevice );
  }
  LOBYTE(v7) = v8->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v8, v7, 0LL);
  v11 = (IRP *)Irp;
  if ( !Irp )
  {
    IopDereferenceVpbAndFree(v17);
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = &v15;
  v12 = *(_QWORD *)(Irp + 184);
  v13 = v17;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v12 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v12 - 56) = DeviceObjecta;
  *(_WORD *)(v12 - 72) = 525;
  *(_QWORD *)(v12 - 64) = v13;
  IopQueueThreadIrp(Irp);
  v6 = IofCallDriver(v8, v11);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v15;
  }
  IopDereferenceVpbAndFree(v13);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
