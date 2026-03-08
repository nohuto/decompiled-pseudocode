/*
 * XREFs of UsbhGetBillboardInfo @ 0x1C0037E7C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhValidateStringDescriptor @ 0x1C00530B4 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0054830 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetBillboardInfo(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r13d
  _DWORD *v6; // r12
  void *Pool2; // rdi
  __int64 v9; // rbx
  int StringFromDevice; // eax
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r14d
  unsigned __int8 i; // r14
  int v15; // eax
  int v16; // r12d
  char v17; // [rsp+30h] [rbp-30h]
  char v18; // [rsp+30h] [rbp-30h]
  int v19; // [rsp+50h] [rbp-10h] BYREF
  _DWORD *v20; // [rsp+58h] [rbp-8h]
  unsigned __int16 v21; // [rsp+A8h] [rbp+48h] BYREF

  v19 = 0;
  v5 = a2;
  v20 = PdoExt(a2);
  v6 = v20;
  Pool2 = (void *)ExAllocatePool2(64LL, 255LL, 1112885333LL);
  if ( Pool2 )
  {
    LODWORD(v9) = 0;
    if ( *(_BYTE *)(a3 + 3) )
    {
      v17 = *(_BYTE *)(a3 + 3);
      v21 = 255;
      StringFromDevice = UsbhGetStringFromDevice(a1, v5, (unsigned int)&v19, (_DWORD)Pool2, (__int64)&v21, 1033, v17);
      v9 = StringFromDevice;
      v11 = StringFromDevice & 0xC0000000;
      if ( (_DWORD)v11 == -1073741824 )
      {
        UsbhException(
          a1,
          *((unsigned __int16 *)v6 + 714),
          140,
          (int)Pool2,
          v21,
          StringFromDevice,
          v19,
          usbfile_bus_c,
          7615,
          0);
        v12 = 4678194;
        goto LABEL_16;
      }
      v13 = v21;
      if ( !(unsigned __int8)UsbhValidateStringDescriptor(v11, Pool2, v21, &v19) )
      {
        UsbhException(a1, *((unsigned __int16 *)v6 + 714), 38, (int)Pool2, v13, v9, v19, usbfile_bus_c, 7627, 0);
        v12 = 4678195;
        goto LABEL_16;
      }
    }
    for ( i = 0; i < *(_BYTE *)(a3 + 4); ++i )
    {
      if ( *(_BYTE *)(a3 + 4LL * i + 47) )
      {
        v18 = *(_BYTE *)(a3 + 4LL * i + 47);
        v21 = 255;
        v15 = UsbhGetStringFromDevice(a1, v5, (unsigned int)&v19, (_DWORD)Pool2, (__int64)&v21, 1033, v18);
        v9 = v15;
        if ( (v15 & 0xC0000000) == 0xC0000000 )
        {
          UsbhException(a1, *((unsigned __int16 *)v20 + 714), 141, (int)Pool2, v21, v15, v19, usbfile_bus_c, 7652, 0);
          v12 = 4678196;
LABEL_16:
          Log(a1, 4, v12, 0LL, v9);
          break;
        }
        v16 = v21;
        if ( !(unsigned __int8)UsbhValidateStringDescriptor(3221225472LL, Pool2, v21, &v19) )
        {
          UsbhException(a1, *((unsigned __int16 *)v20 + 714), 38, (int)Pool2, v16, v9, v19, usbfile_bus_c, 7664, 0);
          v12 = 4678197;
          goto LABEL_16;
        }
      }
    }
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v9;
  }
  else
  {
    Log(a1, 4, 4678193, 0LL, 0LL);
    return 3221225626LL;
  }
}
