_DWORD *__fastcall UsbhCheckDeviceErrata(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  _DWORD *result; // rax
  int v6; // ebx
  int v7; // r8d
  __int64 v8; // [rsp+90h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = PdoExt(a2);
  if ( ((*((_WORD *)v4 + 701) - 256) & 0xFFEF) == 0 )
    v4[358] &= ~0x200u;
  result = (_DWORD *)UsbhGetDeviceFlags(v4 + 350, &v8, 0LL);
  v6 = v8;
  if ( (v8 & 1) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 0x78u, v4 + 350, 0x12u, 0, 1, usbfile_dq_c, 2571, 0);
    v7 = 1;
  }
  else
  {
    if ( (v8 & 2) == 0 )
      goto LABEL_8;
    UsbhException(a1, *((_WORD *)v4 + 714), 0x78u, v4 + 350, 0x12u, 0, 2, usbfile_dq_c, 2578, 0);
    v7 = 2;
  }
  result = UsbhApplyDeviceFix(a1, a2, v7);
LABEL_8:
  if ( (v6 & 0x40) != 0 )
    v4[358] |= 0x800u;
  if ( (v6 & 4) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 0x78u, v4 + 350, 0x12u, 0, 3, usbfile_dq_c, 2596, 0);
    result = UsbhApplyDeviceFix(a1, a2, 3);
  }
  if ( (v6 & 8) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 0x78u, v4 + 350, 0x12u, 0, 10, usbfile_dq_c, 2607, 0);
    result = UsbhApplyDeviceFix(a1, a2, 10);
  }
  if ( (v6 & 0x10) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 0x78u, v4 + 350, 0x12u, 0, 5, usbfile_dq_c, 2618, 0);
    result = UsbhApplyDeviceFix(a1, a2, 5);
  }
  if ( (v6 & 0x20) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 0x78u, v4 + 350, 0x12u, 0, 7, usbfile_dq_c, 2629, 0);
    result = UsbhApplyDeviceFix(a1, a2, 7);
  }
  if ( (*(_QWORD *)&v6 & 0x200000LL) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 0x78u, v4 + 350, 0x12u, 0, 11, usbfile_dq_c, 2639, 0);
    result = UsbhApplyDeviceFix(a1, a2, 11);
  }
  if ( (v6 & 0x8000000) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 0x78u, v4 + 350, 0x12u, 0, 12, usbfile_dq_c, 2649, 0);
    return UsbhApplyDeviceFix(a1, a2, 12);
  }
  return result;
}
