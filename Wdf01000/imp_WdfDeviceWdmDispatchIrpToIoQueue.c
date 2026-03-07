int __fastcall imp_WdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp,
        WDFQUEUE__ *Queue,
        unsigned int Flags)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  FxIoInCallerContext *p_IoInCallerContextCallback; // rsi
  _FX_DRIVER_GLOBALS *v9; // r12
  unsigned int v10; // r15d
  $27B3CBCD20AC86DA677E28D0DCBBE361 *v11; // rbx
  int v12; // eax
  int v13; // edi
  FxIoQueue *v15; // r9
  void *v16; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v18; // rcx
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  void *retaddr; // [rsp+58h] [rbp+28h]
  void *PPObject; // [rsp+60h] [rbp+30h] BYREF
  FxIoQueue *v22; // [rsp+70h] [rbp+40h] BYREF

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  p_IoInCallerContextCallback = 0LL;
  PPObject = 0LL;
  v22 = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, &PPObject);
  v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
  FX_TRACK_DRIVER(v9);
  FxObjectHandleGetPtr(v5, (unsigned __int64)Queue, 0x1003u, (void **)&v22);
  if ( !Irp )
    FxVerifierNullBugCheck(v9, retaddr);
  v10 = Flags;
  v11 = &Irp->Tail.Overlay.64;
  if ( (Flags & 2) != 0 )
  {
    --Irp->CurrentLocation;
    --v11->CurrentStackLocation;
  }
  if ( v9->FxVerifierOn
    && (v12 = Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(v9, (FxDevice *)PPObject, Irp, v22, v10), v13 = v12, v12 < 0) )
  {
    Irp->IoStatus.Status = v12;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return v13;
  }
  else
  {
    v15 = v22;
    v16 = PPObject;
    if ( (FxDeviceBase *)*((_QWORD *)PPObject + 28) == v22->m_DeviceBase )
    {
      CurrentStackLocation = v11->CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&v11->CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      --Irp->CurrentLocation;
      v18 = --v11->CurrentStackLocation;
      PPObject = (void *)*((_QWORD *)PPObject + 28);
      v18->DeviceObject = (_DEVICE_OBJECT *)*((_QWORD *)PPObject + 18);
      v15 = v22;
      v16 = PPObject;
    }
    if ( (v10 & 1) != 0 )
    {
      m_CxDeviceInfo = v15->m_CxDeviceInfo;
      if ( m_CxDeviceInfo )
        p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      else
        p_IoInCallerContextCallback = (FxIoInCallerContext *)(*((_QWORD *)v16 + 80) + 392LL);
    }
    return FxPkgIo::DispatchStep2(*((FxPkgIo **)v16 + 80), Irp, p_IoInCallerContextCallback, v15);
  }
}
