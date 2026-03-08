/*
 * XREFs of ACPIRootIrpQueryCapabilities @ 0x1C0093FA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C003DEA4 (ACPISystemPowerInitializeRootMapping.c)
 */

__int64 __fastcall ACPIRootIrpQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v5; // rax
  int Status; // edi
  _IO_STACK_LOCATION *v7; // rdx
  const char *v8; // rsi
  unsigned __int8 MinorFunction; // r15
  __int64 SecurityContext; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10
  __int64 v16; // rcx
  char *v17; // rax
  const char *v18; // r8
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  memset(&Event, 0, sizeof(Event));
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v5 = a2->Tail.Overlay.CurrentStackLocation;
  v5[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v5[-1].Context = &Event;
  v5[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v7 = a2->Tail.Overlay.CurrentStackLocation;
  v8 = byte_1C00622D0;
  MinorFunction = v7->MinorFunction;
  if ( Status >= 0 )
  {
    SecurityContext = (__int64)v7->Parameters.Create.SecurityContext;
    v11 = *(_DWORD *)(SecurityContext + 4) & 0xFFFFFCE3;
    *(_DWORD *)(SecurityContext + 12) = -1;
    *(_DWORD *)(SecurityContext + 8) = -1;
    *(_DWORD *)(SecurityContext + 4) = v11 | 0x40;
    *(_QWORD *)(SecurityContext + 44) = 0LL;
    Status = ACPISystemPowerInitializeRootMapping(DeviceExtension, SecurityContext);
    if ( Status < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(v12, MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xFu,
        (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
        (char)a2,
        (__int64)IrpText,
        Status,
        DeviceExtension,
        v15,
        v14);
    }
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v8 = *(const char **)(DeviceExtension + 608);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = ACPIDebugGetIrpText(v16, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x10u,
      (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
      (char)a2,
      (__int64)v17,
      Status,
      DeviceExtension,
      v8,
      v18);
  }
  return (unsigned int)Status;
}
