void __fastcall UsbhPdoAbortAllDevicePipes(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _DWORD *v5; // rax

  v4 = UsbhRefPdoDeviceHandle(a1, a2, a2, 0x44726261u);
  if ( v4 )
  {
    v5 = FdoExt(a1);
    if ( *((_QWORD *)v5 + 564) )
      (*((void (__fastcall **)(_QWORD, __int64))v5 + 564))(*((_QWORD *)v5 + 529), v4);
    UsbhDerefPdoDeviceHandle(a1, v4, a2, 0x44726261u);
  }
}
