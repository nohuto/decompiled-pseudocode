__int64 __fastcall UsbhGetUsbDeviceFlags(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 RegUsbDeviceFlags; // rax
  __int64 v10; // rcx
  __int64 RegPersistedUsbDeviceFlags; // rax
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  v4 = PdoExt(a2);
  v4[358] = 768;
  if ( (unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v4 + 1400, v5, 0, (__int64)&v12) )
  {
    if ( v12 )
      v4[355] |= 0x40u;
    UsbhGetRegUsbClassFlags(v6, a2);
    RegUsbDeviceFlags = UsbhGetRegUsbDeviceFlags(v8, a2);
    *((_QWORD *)v4 + 142) = RegUsbDeviceFlags;
    if ( RegUsbDeviceFlags
      && (RegPersistedUsbDeviceFlags = UsbhGetRegPersistedUsbDeviceFlags(v10, a2),
          (*((_QWORD *)v4 + 143) = RegPersistedUsbDeviceFlags) != 0LL) )
    {
      UsbhCheckDeviceErrata(a1);
      UsbhCheck4GlobalErrata(a1, a2);
      return 0LL;
    }
    else
    {
      v4[705] = 1073807366;
      return 3221225626LL;
    }
  }
  else
  {
    v4[705] = 1073807365;
    return 3221225485LL;
  }
}
