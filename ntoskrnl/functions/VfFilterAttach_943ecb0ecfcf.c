void __fastcall VfFilterAttach(PDEVICE_OBJECT TargetDevice, int a2)
{
  PDRIVER_OBJECT v4; // rdi
  int v5; // ebx
  int v6; // ebx
  PDEVICE_OBJECT AttachedDevice; // rbx
  char *DriverSection; // rbx
  const UNICODE_STRING *v9; // rbx
  PDEVICE_OBJECT v10; // rbx
  struct _IO_REMOVE_LOCK *DeviceExtension; // rdi
  PDEVICE_OBJECT v12; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+70h] [rbp+18h] BYREF

  DestinationString = 0LL;
  SourceDevice = 0LL;
  if ( !VfFilterCreated )
  {
    RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_FILTER");
    IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(void **, _QWORD))ViFilterDriverEntry);
    VfFilterCreated = 1;
  }
  v4 = VfFilterDriverObject;
  if ( VfFilterDriverObject )
  {
    v5 = a2 - 2;
    if ( !v5 || (v6 = v5 - 1) == 0 || (unsigned int)(v6 - 2) <= 1 )
    {
      AttachedDevice = IoGetAttachedDevice(TargetDevice);
      if ( AttachedDevice->DriverObject != v4 )
      {
        if ( !HviIsAnyHypervisorPresent()
          || (DriverSection = (char *)AttachedDevice->DriverObject->DriverSection) == 0LL
          || (v9 = (const UNICODE_STRING *)(DriverSection + 88), !RtlEqualUnicodeString(&VfVidName, v9, 1u))
          && !RtlEqualUnicodeString(&VfSynth3DvscName, v9, 1u)
          && !RtlEqualUnicodeString(&VfSynth3DvspName, v9, 1u) )
        {
          if ( IoCreateDevice(VfFilterDriverObject, 0x68u, 0LL, 0x22u, 0x100u, 0, &SourceDevice) >= 0 )
          {
            v10 = SourceDevice;
            DeviceExtension = (struct _IO_REMOVE_LOCK *)SourceDevice->DeviceExtension;
            IoInitializeRemoveLockEx(DeviceExtension + 1, 0x4C526656u, 0, 0, 0x20u);
            DeviceExtension[2].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
            v12 = IoAttachDeviceToDeviceStack(v10, TargetDevice);
            *(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock = v12;
            if ( v12 )
            {
              v10->Flags |= v12->Flags & 0x86014;
              v10->DeviceType = *(_DWORD *)(*(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock + 72LL);
              v10->Characteristics = *(_DWORD *)(*(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock + 52LL);
              v10->Flags &= ~0x80u;
              DeviceExtension->Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v10;
              *(_QWORD *)&DeviceExtension->Common.Removed = TargetDevice;
              _InterlockedOr(&DeviceExtension[3].Common.IoCount, 1u);
            }
            else
            {
              IoDeleteDevice(v10);
            }
          }
        }
      }
    }
  }
}
