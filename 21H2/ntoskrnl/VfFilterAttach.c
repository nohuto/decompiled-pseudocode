/*
 * XREFs of VfFilterAttach @ 0x1409E5EF4
 * Callers:
 *     VfDevObjPostAddDevice @ 0x1409D70A4 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409D70F8 (VfDevObjPreAddDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     IoGetAttachedDevice @ 0x14035E490 (IoGetAttachedDevice.c)
 *     IoInitializeRemoveLockEx @ 0x14037EEF0 (IoInitializeRemoveLockEx.c)
 *     IoAttachDeviceToDeviceStack @ 0x140380DE0 (IoAttachDeviceToDeviceStack.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A5B60 (HviIsAnyHypervisorPresent.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 */

void __fastcall VfFilterAttach(PDEVICE_OBJECT TargetDevice, int a2)
{
  PDRIVER_OBJECT v4; // rdi
  PDEVICE_OBJECT AttachedDevice; // rbx
  char *DriverSection; // rbx
  const UNICODE_STRING *v7; // rbx
  PDEVICE_OBJECT v8; // rbx
  struct _IO_REMOVE_LOCK *DeviceExtension; // rdi
  PDEVICE_OBJECT v10; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+70h] [rbp+18h] BYREF

  DestinationString = 0LL;
  SourceDevice = 0LL;
  if ( !VfFilterCreated )
  {
    RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_FILTER");
    IoCreateDriver(&DestinationString, (_DMA_OPERATIONS *)ViFilterDriverEntry);
    VfFilterCreated = 1;
  }
  v4 = VfFilterDriverObject;
  if ( VfFilterDriverObject && a2 >= 2 && (a2 <= 3 || (unsigned int)(a2 - 5) <= 1) )
  {
    AttachedDevice = IoGetAttachedDevice(TargetDevice);
    if ( AttachedDevice->DriverObject != v4 )
    {
      if ( !HviIsAnyHypervisorPresent()
        || (DriverSection = (char *)AttachedDevice->DriverObject->DriverSection) == 0LL
        || (v7 = (const UNICODE_STRING *)(DriverSection + 88), !RtlEqualUnicodeString(&VfVidName, v7, 1u))
        && !RtlEqualUnicodeString(&VfSynth3DvscName, v7, 1u)
        && !RtlEqualUnicodeString(&VfSynth3DvspName, v7, 1u) )
      {
        if ( IoCreateDevice(VfFilterDriverObject, 0x68u, 0LL, 0x22u, 0x100u, 0, &SourceDevice) >= 0 )
        {
          v8 = SourceDevice;
          DeviceExtension = (struct _IO_REMOVE_LOCK *)SourceDevice->DeviceExtension;
          IoInitializeRemoveLockEx(DeviceExtension + 1, 0x4C526656u, 0, 0, 0x20u);
          DeviceExtension[2].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
          v10 = IoAttachDeviceToDeviceStack(v8, TargetDevice);
          *(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock = v10;
          if ( v10 )
          {
            v8->Flags |= v10->Flags & 0x86014;
            v8->DeviceType = *(_DWORD *)(*(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock + 72LL);
            v8->Characteristics = *(_DWORD *)(*(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock + 52LL);
            v8->Flags &= ~0x80u;
            DeviceExtension->Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v8;
            *(_QWORD *)&DeviceExtension->Common.Removed = TargetDevice;
            _InterlockedOr(&DeviceExtension[3].Common.IoCount, 1u);
          }
          else
          {
            IoDeleteDevice(v8);
          }
        }
      }
    }
  }
}
