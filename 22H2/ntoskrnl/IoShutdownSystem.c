/*
 * XREFs of IoShutdownSystem @ 0x1409AAF18
 * Callers:
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 * Callees:
 *     IoGetAttachedDeviceReference @ 0x14022C380 (IoGetAttachedDeviceReference.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     VfIsVerifierEnabled @ 0x14032D0E0 (VfIsVerifierEnabled.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IopInterlockedRemoveHeadList @ 0x14037F294 (IopInterlockedRemoveHeadList.c)
 *     ZwSetSystemInformation @ 0x1403FCFA0 (ZwSetSystemInformation.c)
 *     IoBuildSynchronousFsdRequest @ 0x1406FF190 (IoBuildSynchronousFsdRequest.c)
 *     PnpShutdownDevices @ 0x14089B99C (PnpShutdownDevices.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB274 (IopShutdownBaseFileSystems.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     IovUnloadDrivers @ 0x1409C5300 (IovUnloadDrivers.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C6060 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall IoShutdownSystem(int a1)
{
  struct _DEVICE_OBJECT *v2; // rdi
  IRP *v3; // rax
  PADAPTER_OBJECT *v4; // rax
  PADAPTER_OBJECT *v5; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v7; // rax
  PADAPTER_OBJECT *v8; // rax
  PADAPTER_OBJECT *v9; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  int SystemInformation; // [rsp+80h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&IopFilesystemDatabaseShutdownRundown);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      IopShutdownBaseFileSystems(&IopDiskFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopCdRomFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopTapeFileSystemQueueHead);
      while ( 1 )
      {
        v8 = (PADAPTER_OBJECT *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyLastChanceShutdownQueueHead);
        v9 = v8;
        if ( !v8 )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v8[2]);
        v7 = IoBuildSynchronousFsdRequest(0x10u, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
        if ( v7 && IofCallDriver(AttachedDeviceReference, v7) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        HalPutDmaAdapter((PADAPTER_OBJECT)AttachedDeviceReference);
        HalPutDmaAdapter(v9[2]);
        ExFreePoolWithTag(v9, 0);
        KeResetEvent(&Event);
      }
    }
  }
  else
  {
    PnpShutdownDevices();
    while ( 1 )
    {
      v4 = (PADAPTER_OBJECT *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyShutdownQueueHead);
      v5 = v4;
      if ( !v4 )
        break;
      v2 = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v4[2]);
      v3 = IoBuildSynchronousFsdRequest(0x10u, v2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      if ( v3 && IofCallDriver(v2, v3) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      HalPutDmaAdapter((PADAPTER_OBJECT)v2);
      HalPutDmaAdapter(v5[2]);
      ExFreePoolWithTag(v5, 0);
      KeResetEvent(&Event);
    }
    if ( (MmVerifierData & 0x10) != 0 )
      IovUnloadDrivers();
    SystemInformation = 2;
    ZwSetSystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u);
  }
}
