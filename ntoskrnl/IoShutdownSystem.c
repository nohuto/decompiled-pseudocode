/*
 * XREFs of IoShutdownSystem @ 0x140A96AB4
 * Callers:
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopInterlockedRemoveHeadList @ 0x1402EE4D4 (IopInterlockedRemoveHeadList.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IoGetAttachedDeviceReference @ 0x140337BB0 (IoGetAttachedDeviceReference.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x140415A30 (ZwSetSystemInformation.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IoNotifyDump @ 0x14054E4A0 (IoNotifyDump.c)
 *     IoBuildSynchronousFsdRequest @ 0x1407F8DA0 (IoBuildSynchronousFsdRequest.c)
 *     PnpShutdownDevices @ 0x14094F28C (PnpShutdownDevices.c)
 *     IopShutdownBaseFileSystems @ 0x140A96E64 (IopShutdownBaseFileSystems.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     IovUnloadDrivers @ 0x140ABE7F0 (IovUnloadDrivers.c)
 *     VfNotifyVerifierOfEvent @ 0x140ABF120 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall IoShutdownSystem(int a1)
{
  struct _DEVICE_OBJECT *v2; // rdi
  IRP *v3; // rax
  PVOID *v4; // rax
  PVOID *v5; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v7; // rax
  PVOID *v8; // rax
  PVOID *v9; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+80h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease(&IopFilesystemDatabaseShutdownRundown);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      IopShutdownBaseFileSystems(&IopDiskFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopCdRomFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopTapeFileSystemQueueHead);
      while ( 1 )
      {
        v8 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyLastChanceShutdownQueueHead);
        v9 = v8;
        if ( !v8 )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v8[2]);
        v7 = IoBuildSynchronousFsdRequest(0x10u, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
        if ( v7 && IofCallDriver(AttachedDeviceReference, v7) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(v9[2]);
        ExFreePoolWithTag(v9, 0);
        KeResetEvent(&Event);
      }
    }
  }
  else
  {
    v12 = 0;
    if ( (int)ZwQuerySystemInformation(151LL, (__int64)&v12) >= 0 && (v12 & 0x20) != 0 )
    {
      ((void (__fastcall *)(_QWORD))off_140C01CB8[0])(0LL);
      v12 = 0;
      ZwSetSystemInformation(151LL, (__int64)&v12);
    }
    PnpShutdownDevices();
    while ( 1 )
    {
      v4 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyShutdownQueueHead);
      v5 = v4;
      if ( !v4 )
        break;
      v2 = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v4[2]);
      v3 = IoBuildSynchronousFsdRequest(0x10u, v2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      if ( v3 && IofCallDriver(v2, v3) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v2);
      ObfDereferenceObject(v5[2]);
      ExFreePoolWithTag(v5, 0);
      KeResetEvent(&Event);
    }
    if ( (MmVerifierData & 0x10) != 0 )
      IovUnloadDrivers();
    if ( (v12 & 0x10) != 0 )
      IoNotifyDump(5);
    v12 = 2;
    ZwSetSystemInformation(151LL, (__int64)&v12);
  }
}
