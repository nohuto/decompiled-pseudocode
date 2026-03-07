__int64 __fastcall UsbhFdoValidateConnectionPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v6; // r13
  _DWORD *v7; // rbx
  __int64 PortData; // rsi
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  unsigned int v10; // ebx
  int v11; // eax
  int v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  v13 = 0;
  v6 = (PDEVICE_OBJECT *)FdoExt(a1);
  v7 = PdoExt(a2);
  PortData = UsbhGetPortData(a1, *((_WORD *)v7 + 714));
  Log(a1, 8, 1667973963, PortData, *((unsigned __int16 *)v7 + 714));
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *((_DWORD *)v6 + 340) != 5 )
  {
    v10 = -1073741810;
    v11 = -1073713152;
LABEL_7:
    HIDWORD(SecurityContext->SecurityQos) = v11;
    a3->IoStatus.Status = v10;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973937, PortData, (int)v10);
    return v10;
  }
  if ( !PortData )
  {
    v10 = -1073741811;
    v11 = -2147482880;
    goto LABEL_7;
  }
  v10 = UsbhQueryPortState(a1, *(_WORD *)(PortData + 4), (__int64)&v13, &v14);
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    v11 = v14;
    goto LABEL_7;
  }
  if ( (v13 & 1) != 0 && (v13 & 3) != 0 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v10 = IofCallDriver(v6[152], a3);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  else
  {
    v10 = -1073741810;
    HIDWORD(SecurityContext->SecurityQos) = -1073713152;
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973938, PortData, -1073741810LL);
  }
  return v10;
}
