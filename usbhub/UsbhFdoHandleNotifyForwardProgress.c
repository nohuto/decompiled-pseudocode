__int64 __fastcall UsbhFdoHandleNotifyForwardProgress(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  PDEVICE_OBJECT *v9; // rax
  unsigned int v10; // edi

  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( LODWORD(SecurityContext->SecurityQos) != 1 || HIDWORD(SecurityContext->SecurityQos) < 0x28 )
  {
    v10 = -1073741808;
    a3->IoStatus.Status = -1073741808;
    goto LABEL_7;
  }
  v7 = UsbhRefPdoDeviceHandle(a1, a2, a2, 0x44467750u);
  v8 = v7;
  if ( !v7 )
  {
    v10 = -1073741810;
    a3->IoStatus.Status = -1073741810;
LABEL_7:
    IofCompleteRequest(a3, 0);
    goto LABEL_8;
  }
  SecurityContext->AccessState = (_ACCESS_STATE *)v7;
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v9 = (PDEVICE_OBJECT *)FdoExt(a1);
  v10 = IofCallDriver(v9[152], a3);
  UsbhDerefPdoDeviceHandle(a1, v8, a2, 0x44467750u);
LABEL_8:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v10;
}
