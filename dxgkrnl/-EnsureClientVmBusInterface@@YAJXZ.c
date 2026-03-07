__int64 EnsureClientVmBusInterface(void)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v1; // edi
  struct DXGGLOBAL *v2; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v4; // rsi
  PIRP v5; // rax
  IRP *v6; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // eax
  __int64 v9; // rbx
  struct DXGGLOBAL *v10; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp+27h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+6Fh] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 896));
  v1 = 0;
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    ((void (__fastcall *)(__int64))qword_1C013CE00)(qword_1C013CDF8);
    ++g_VgpuVmBusInterfaceRefCount;
    v2 = DXGGLOBAL::GetGlobal();
    *((_QWORD *)v2 + 113) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v2 + 896, 0LL);
  }
  else
  {
    memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
    DeviceObject = 0LL;
    FileObject = 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\VMBus\\kmcl_interface");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
    v4 = DeviceObjectPointer;
    if ( DeviceObjectPointer >= 0 )
    {
      memset(&Event, 0, sizeof(Event));
      IoStatusBlock = 0LL;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v5 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      v6 = v5;
      if ( v5 )
      {
        CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MinorFunction = 8;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&KMCL_CLIENT_INTERFACE_TYPE;
        CurrentStackLocation[-1].Parameters.Create.Options = 65896;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)&g_VgpuVmBusInterface;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        v6->IoStatus.Status = -1073741637;
        Status = IofCallDriver(DeviceObject, v6);
        if ( Status == 259 )
        {
          Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          if ( !Status )
            Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 )
        {
          g_VgpuVmBusInterfaceRefCount = 1;
        }
        else
        {
          v9 = Status;
          WdLogSingleEntry2(2LL, Status, 16507LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"IoCallDriver failed: 0x%I64x",
            v9,
            16507LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, -1073741670LL, 16479LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"IoBuildSynchronousFsdRequest failed: 0x%I64x",
          -1073741670LL,
          16479LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, DeviceObjectPointer);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"IoGetDeviceObjectPointer failed: 0x%I64x",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v10 = DXGGLOBAL::GetGlobal();
    *((_QWORD *)v10 + 113) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v10 + 896, 0LL);
    v1 = v4;
  }
  KeLeaveCriticalRegion();
  return v1;
}
