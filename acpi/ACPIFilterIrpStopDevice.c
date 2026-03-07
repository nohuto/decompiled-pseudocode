__int64 __fastcall ACPIFilterIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdi
  bool v8; // bp
  __int64 v9; // rax
  __int64 v10; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax
  char *IrpText; // rax
  unsigned __int8 v14; // dl
  const char *v15; // r8
  const char *v16; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 368) == 1 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 1008) & 0x8000LL;
    v8 = (*(_QWORD *)(DeviceExtension + 1008) & 0x8000) != 0;
    v9 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 768));
    if ( (unsigned __int8)IsNsobjPciBus(*(_QWORD *)(v9 + 760)) || v7 )
    {
      LOBYTE(v10) = v8;
      EnableDisableRegions(*(_QWORD *)(v4 + 760), 0LL, v10);
    }
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v12 = a2->Tail.Overlay.CurrentStackLocation;
    v12[-1].Context = 0LL;
    v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIFilterIrpStopDeviceCompletion;
    v12[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 728));
    v5 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 776), a2);
  }
  else
  {
    v5 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v6, 4u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      5u,
      0x1Du,
      (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
      (char)a2,
      (__int64)IrpText,
      v5,
      v4,
      v15,
      v16);
  }
  return v5;
}
