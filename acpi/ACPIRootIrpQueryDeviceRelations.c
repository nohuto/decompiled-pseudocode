__int64 __fastcall ACPIRootIrpQueryDeviceRelations(ULONG_PTR a1, IRP *a2)
{
  char v4; // r15
  unsigned int Status; // esi
  __int64 v6; // rcx
  __int64 DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 MinorFunction; // r12
  int BusRelations; // eax
  const char *v11; // rbp
  char *IrpText; // rax
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  _IO_STACK_LOCATION *v16; // rax
  _IO_STACK_LOCATION *v17; // rax
  __int64 v18; // rcx
  char *v19; // rax
  const char *v20; // r8
  char v21; // r10
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 Information; // [rsp+B8h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  v4 = 0;
  LOBYTE(Status) = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Information = a2->IoStatus.Information;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( !CurrentStackLocation->Parameters.Read.Length )
  {
    v4 = 1;
    BusRelations = ACPIRootIrpQueryBusRelations(a1, (__int64)a2, (PVOID *)&Information);
    a2->IoStatus.Status = BusRelations;
    Status = BusRelations;
    if ( BusRelations < 0 )
    {
      a2->IoStatus.Information = 0LL;
      goto LABEL_15;
    }
    v6 = Information;
    a2->IoStatus.Information = Information;
  }
  v11 = byte_1C00622D0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v6, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x11u,
      (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
      (char)a2,
      (__int64)IrpText,
      Status,
      v14,
      v15,
      v13);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v16 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
  *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
  v16[-1].FileObject = v16->FileObject;
  v16[-1].Control = 0;
  v17 = a2->Tail.Overlay.CurrentStackLocation;
  v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v17[-1].Context = &Event;
  v17[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( ((int)(Status + 0x80000000) < 0 || Status == -1073741637) && v4 == 1 )
  {
    ACPIDetectFilterDevices(a1, a2->IoStatus.Information);
    v18 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v18 & 0x200000000000LL) != 0 )
      v11 = *(const char **)(DeviceExtension + 608);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = ACPIDebugGetIrpText(v18, MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0x12u,
        (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
        (char)a2,
        (__int64)v19,
        v21,
        DeviceExtension,
        v11,
        v20);
    }
  }
LABEL_15:
  IofCompleteRequest(a2, 0);
  return Status;
}
