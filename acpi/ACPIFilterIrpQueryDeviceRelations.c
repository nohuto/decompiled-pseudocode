__int64 __fastcall ACPIFilterIrpQueryDeviceRelations(ULONG_PTR a1, IRP *a2)
{
  char v4; // r12
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v7; // rsi
  unsigned __int64 Information; // rax
  unsigned int Length; // ecx
  __int64 v10; // rcx
  NTSTATUS Status; // edi
  const char *v12; // r14
  char *IrpText; // rax
  const char *v14; // r8
  char v15; // r10
  const char *v16; // r11
  _IO_STACK_LOCATION *v17; // rax
  _IO_STACK_LOCATION *v18; // rax
  NTSTATUS RemovalRelations; // eax
  __int64 v21; // rcx
  char *v22; // rax
  const char *v23; // r8
  char v24; // r10
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+B8h] [rbp+10h] BYREF

  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = DeviceExtension;
  Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( a2->IoStatus.Status >= 0 )
    Information = a2->IoStatus.Information;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v26 = Information;
  if ( Length )
  {
    v10 = Length - 1;
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 != 2 )
      {
        Status = -1073741637;
        goto LABEL_7;
      }
      RemovalRelations = ACPIBusAndFilterIrpQueryRemovalRelations(a1, (PVOID *)&v26);
    }
    else
    {
      RemovalRelations = ACPIBusAndFilterIrpQueryEjectRelations(a1, a2, &v26);
    }
  }
  else
  {
    v4 = 1;
    RemovalRelations = ACPIRootIrpQueryBusRelations(a1, a2, &v26);
  }
  Status = RemovalRelations;
  if ( RemovalRelations != -1073741637 )
    a2->IoStatus.Status = RemovalRelations;
LABEL_7:
  v12 = byte_1C00622D0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v10, CurrentStackLocation->MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xDu,
      (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
      (char)a2,
      (__int64)IrpText,
      Status,
      v15,
      v16,
      v14);
  }
  if ( Status >= 0 )
  {
    a2->IoStatus.Information = v26;
  }
  else if ( Status != -1073741637 )
  {
    goto LABEL_15;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v17 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
  *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
  v17[-1].FileObject = v17->FileObject;
  v17[-1].Control = 0;
  v18 = a2->Tail.Overlay.CurrentStackLocation;
  v18[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v18[-1].Context = &Event;
  v18[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( Status >= 0 && v4 )
  {
    if ( a2->Flags != 393216 )
      ACPIFilterRemoveNonPresentDevices(v7, (_DWORD *)a2->IoStatus.Information);
    ACPIDetectFilterDevices(a1, a2->IoStatus.Information);
    v21 = *(_QWORD *)(v7 + 8);
    if ( (v21 & 0x200000000000LL) != 0 )
      v12 = *(const char **)(v7 + 608);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = ACPIDebugGetIrpText(v21, CurrentStackLocation->MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0xEu,
        (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
        (char)a2,
        (__int64)v22,
        v24,
        v7,
        v12,
        v23);
    }
  }
LABEL_15:
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
