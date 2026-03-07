__int64 __fastcall UsbhQueryCapsComplete(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 Context)
{
  _DWORD *v4; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  __int128 v6; // xmm1
  int Status; // [rsp+28h] [rbp-10h]

  v4 = FdoExt(Context);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Status = Irp->IoStatus.Status;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_9b0a5a2624623ceb7c2c6a1dede7f127_Traceguids,
      Status);
  }
  if ( Irp->PendingReturned )
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
  *((_OWORD *)v4 + 312) = *(_OWORD *)&SecurityContext->SecurityQos;
  *((_OWORD *)v4 + 313) = *(_OWORD *)&SecurityContext->DesiredAccess;
  *((_OWORD *)v4 + 314) = *(_OWORD *)&SecurityContext[1].AccessState;
  v6 = *(_OWORD *)&SecurityContext[2].SecurityQos;
  v4[640] |= 0x200u;
  *((_OWORD *)v4 + 315) = v6;
  KeSetEvent((PRKEVENT)(v4 + 650), 0, 0);
  return (unsigned int)Irp->IoStatus.Status;
}
