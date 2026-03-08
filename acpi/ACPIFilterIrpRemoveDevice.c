/*
 * XREFs of ACPIFilterIrpRemoveDevice @ 0x1C0028840
 * Callers:
 *     ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C00284E0 (ACPIDispatchIrpDepFilterRemoveDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002CC88 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x1C00450BC (ACPIWakeDisconnectWakeInterrupts.c)
 *     ACPIInitStopDevice @ 0x1C0087AE4 (ACPIInitStopDevice.c)
 *     AcpiDeletePciBusInterface @ 0x1C008A2A4 (AcpiDeletePciBusInterface.c)
 *     EnableDisableRegions @ 0x1C008A57C (EnableDisableRegions.c)
 *     IsPciBusExtension @ 0x1C008A768 (IsPciBusExtension.c)
 */

__int64 __fastcall ACPIFilterIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rbx
  char v5; // r12
  char v6; // r15
  volatile signed __int64 *v7; // rdi
  volatile signed __int64 *v8; // rsi
  __int64 v9; // r14
  bool v10; // r13
  __int64 v11; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v13; // rax
  NTSTATUS Status; // edi
  const char *v15; // rcx
  const char *v16; // rdx
  __int64 v17; // rax
  void *v18; // rcx
  unsigned int v19; // ebx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int8 v22; // [rsp+B8h] [rbp+10h]

  memset(&Event, 0, sizeof(Event));
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v22 = MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInitDeleteChildDeviceList(DeviceExtension);
  v5 = 0;
  if ( *(_QWORD *)(DeviceExtension + 368) )
  {
    v6 = 0;
    if ( *(_DWORD *)(DeviceExtension + 368) == 5 )
    {
      v7 = (volatile signed __int64 *)(DeviceExtension + 8);
      goto LABEL_30;
    }
  }
  else
  {
    v5 = 1;
    v6 = 0;
  }
  v7 = (volatile signed __int64 *)(DeviceExtension + 8);
  if ( *(char *)(DeviceExtension + 8) < 0 )
  {
LABEL_30:
    v6 = 1;
    v8 = v7;
    goto LABEL_10;
  }
  v8 = (volatile signed __int64 *)(DeviceExtension + 8);
  if ( !v5 )
  {
    v9 = *(_QWORD *)(DeviceExtension + 1008) & 0x8000LL;
    v10 = (*(_QWORD *)(DeviceExtension + 1008) & 0x8000) != 0;
    if ( (unsigned __int8)IsPciBusExtension(DeviceExtension) || v9 )
    {
      LOBYTE(v11) = v10;
      EnableDisableRegions(*(_QWORD *)(DeviceExtension + 760), 0LL, v11);
      v8 = (volatile signed __int64 *)(DeviceExtension + 8);
    }
    MinorFunction = v22;
  }
LABEL_10:
  AcpiDeletePciBusInterface(DeviceExtension);
  ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(_DWORD *)(DeviceExtension + 368) != 5 )
    _InterlockedOr64(v8, 0x800uLL);
  *(_DWORD *)(DeviceExtension + 368) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v13 = a2->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v13[-1].Context = &Event;
  v13[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v15 = (const char *)&unk_1C00622D0;
  v16 = (const char *)&unk_1C00622D0;
  if ( (*v8 & 0x200000000000LL) != 0 )
  {
    v15 = *(const char **)(DeviceExtension + 608);
    if ( (*v8 & 0x400000000000LL) != 0 )
      v16 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = MinorFunction;
    if ( MinorFunction >= 0x1Au )
      v17 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0x17u,
      (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
      (char)a2,
      (__int64)(&ACPIDispatchPnpTableNames)[v17],
      Status,
      DeviceExtension,
      v15,
      v16);
  }
  if ( Status >= 0 )
  {
    if ( !v6 && !v5 )
    {
      LOBYTE(v16) = 1;
      ACPIInitStopDevice(DeviceExtension, v16);
    }
    ACPIWakeDisconnectWakeInterrupts(DeviceExtension);
    v18 = *(void **)(DeviceExtension + 112);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(DeviceExtension + 112) = 0LL;
    }
    ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  }
  v19 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v19;
}
