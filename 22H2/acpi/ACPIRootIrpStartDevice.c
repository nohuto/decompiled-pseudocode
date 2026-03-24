/*
 * XREFs of ACPIRootIrpStartDevice @ 0x1C00BB2A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C000DFE0 (ACPIRegisterForDeviceNotifications.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 *     ACPIInitShutdownNotification @ 0x1C00978B8 (ACPIInitShutdownNotification.c)
 *     RtlDuplicateCmResourceList @ 0x1C00BB1F0 (RtlDuplicateCmResourceList.c)
 *     ACPIInitStartACPI @ 0x1C00BB534 (ACPIInitStartACPI.c)
 */

__int64 __fastcall ACPIRootIrpStartDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  const char *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbx
  const char *v8; // r8
  const char *v9; // rcx
  __int64 v10; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax
  __int64 v13; // rcx
  NTSTATUS Status; // edi
  _IO_STACK_LOCATION *v15; // rax
  unsigned int MinorFunction; // r15d
  unsigned int *SecurityContext; // rdx
  PVOID v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  __int64 v21; // rax
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = byte_1C00701BA;
  LOBYTE(v6) = 0;
  v7 = DeviceExtension;
  v8 = byte_1C00701BA;
  v9 = byte_1C00701BA;
  if ( DeviceExtension )
  {
    v6 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v6 + 568);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x19u,
      (__int64)&WPP_a909ee2b802d35766e487243411108b1_Traceguids,
      (char)a2,
      v6,
      v8,
      v9);
  _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x200uLL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v12 = a2->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v12[-1].Context = &Event;
  v12[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 736), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v15 = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = v15->MinorFunction;
  if ( Status >= 0 )
  {
    SecurityContext = (unsigned int *)v15->Parameters.Create.SecurityContext;
    if ( SecurityContext )
      v18 = RtlDuplicateCmResourceList(v13, SecurityContext);
    else
      v18 = 0LL;
    *(_QWORD *)(v7 + 640) = 0LL;
    *(_QWORD *)(v7 + 632) = v18;
    Status = ACPIInitStartACPI(a1);
    if ( Status >= 0 )
      *(_DWORD *)(v7 + 328) = 2;
    ACPIRegisterForDeviceNotifications(a1, (__int64)ACPIRootEvent, a1);
    ACPIInitShutdownNotification();
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  v19 = *(_QWORD *)(v7 + 8);
  v20 = byte_1C00701BA;
  if ( (v19 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v7 + 568);
    if ( (v19 & 0x400000000000LL) != 0 )
      v20 = *(const char **)(v7 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v21 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x1Au,
      (__int64)&WPP_a909ee2b802d35766e487243411108b1_Traceguids,
      (char)a2,
      ACPIDispatchPnpTableNames[v21],
      Status,
      v7,
      v5,
      v20);
  }
  return (unsigned int)Status;
}
