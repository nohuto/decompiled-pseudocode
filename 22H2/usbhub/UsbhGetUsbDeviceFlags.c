/*
 * XREFs of UsbhGetUsbDeviceFlags @ 0x1C0039180
 * Callers:
 *     UsbhGetDeviceInformation @ 0x1C0038B48 (UsbhGetDeviceInformation.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhGetRegPersistedUsbDeviceFlags @ 0x1C0045DD8 (UsbhGetRegPersistedUsbDeviceFlags.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0045F24 (UsbhGetRegUsbClassFlags.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0046278 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhCheck4GlobalErrata @ 0x1C00521F0 (UsbhCheck4GlobalErrata.c)
 *     UsbhCheckDeviceErrata @ 0x1C0052254 (UsbhCheckDeviceErrata.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C00533E8 (UsbhValidateDeviceDescriptor.c)
 */

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
