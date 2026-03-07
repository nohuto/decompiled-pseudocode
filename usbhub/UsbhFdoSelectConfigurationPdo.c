NTSTATUS __fastcall UsbhFdoSelectConfigurationPdo(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR BugCheckParameter3,
        IRP *BugCheckParameter4)
{
  PDEVICE_OBJECT *v6; // r13
  _DWORD *v7; // r12
  __int64 PortData; // rax
  __int64 v9; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  int v12; // edx
  int v13; // edx
  int Length_low; // eax
  int v15; // edi
  int v16; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v18; // rax
  int v20; // [rsp+98h] [rbp+20h] BYREF

  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      BugCheckParameter3);
  v6 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  v7 = PdoExt(BugCheckParameter3);
  PortData = UsbhGetPortData((__int64)DeviceObject, *((_WORD *)v7 + 714));
  v9 = PortData;
  if ( !PortData )
  {
    v15 = -1073741811;
LABEL_21:
    BugCheckParameter4->IoStatus.Status = v15;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return v15;
  }
  SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = SecurityContext[1].SecurityQos;
  if ( SecurityQos )
  {
    if ( !(unsigned __int8)UsbhValidateConfigurationDescriptor(
                             SecurityContext[1].SecurityQos,
                             HIWORD(SecurityQos->Length),
                             &v20,
                             0LL) )
    {
      v13 = v20;
      Length_low = 9;
      HIDWORD(SecurityContext->SecurityQos) = v20;
      if ( LOBYTE(SecurityQos->Length) < 9u )
        Length_low = LOBYTE(SecurityQos->Length);
      v15 = -1073741811;
      UsbhException(
        (int)DeviceObject,
        *((unsigned __int16 *)v7 + 714),
        33,
        (int)SecurityQos,
        Length_low,
        -1073741811,
        v13,
        usbfile_hub_c,
        2550,
        0);
      goto LABEL_21;
    }
    v16 = 2 * SecurityQos->ContextTrackingMode;
    *(_DWORD *)(v9 + 432) = v16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        0,
        18,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        BugCheckParameter3,
        v16);
    if ( *(_DWORD *)(v9 + 432) > *((_DWORD *)v6 + 758) )
    {
      HIDWORD(SecurityContext->SecurityQos) = -1073737728;
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 5);
      v15 = -1073741670;
      UsbhException(
        (int)DeviceObject,
        *((unsigned __int16 *)v7 + 714),
        35,
        (int)SecurityQos,
        9,
        -1073741670,
        HIDWORD(SecurityContext->SecurityQos),
        usbfile_hub_c,
        2573,
        0);
      goto LABEL_21;
    }
  }
  else
  {
    *(_DWORD *)(PortData + 432) = 0;
  }
  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         DeviceObject,
         BugCheckParameter4,
         UsbhSelectConfigOrInterfaceComplete,
         (PVOID)BugCheckParameter3,
         1u,
         1u,
         1u) < 0 )
  {
    v18 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    v18[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v18[-1].Context = (void *)BugCheckParameter3;
    v18[-1].Control = -32;
  }
  return IofCallDriver(v6[152], BugCheckParameter4);
}
