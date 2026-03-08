/*
 * XREFs of ACPIFilterIrpDeviceUsageNotification @ 0x1C0085940
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIFilterIrpDeviceUsageNotification(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v5; // rbx
  _IO_STACK_LOCATION *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  char *IrpText; // rax
  const char *v10; // r8
  const char *v11; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = DeviceExtension;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].Context = 0LL;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIFilterIrpDeviceUsageNotificationCompletion;
  v6[-1].Control = -32;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 728));
  v8 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 776), a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v7, 0x16u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xBu,
      (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
      (char)a2,
      (__int64)IrpText,
      v8,
      v5,
      v10,
      v11);
  }
  return v8;
}
