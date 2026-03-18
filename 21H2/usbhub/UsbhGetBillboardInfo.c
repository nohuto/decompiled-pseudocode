/*
 * XREFs of UsbhGetBillboardInfo @ 0x1C003743C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 *     UsbhValidateStringDescriptor @ 0x1C00527D4 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0053F4C (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetBillboardInfo(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  _DWORD *v6; // r13
  void *Pool2; // rdi
  __int64 v9; // rbx
  int StringFromDevice; // eax
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r14d
  unsigned __int8 i; // r14
  int v15; // eax
  char v16; // [rsp+30h] [rbp-30h]
  char v17; // [rsp+30h] [rbp-30h]
  int v18[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v19; // [rsp+A8h] [rbp+48h] BYREF

  v18[0] = 0;
  v5 = a2;
  v6 = PdoExt(a2);
  Pool2 = (void *)ExAllocatePool2(64LL, 255LL, 1112885333LL);
  if ( Pool2 )
  {
    LODWORD(v9) = 0;
    if ( *(_BYTE *)(a3 + 3) )
    {
      v16 = *(_BYTE *)(a3 + 3);
      v19 = 255;
      StringFromDevice = UsbhGetStringFromDevice(a1, v5, (unsigned int)v18, (_DWORD)Pool2, (__int64)&v19, 1033, v16);
      v9 = StringFromDevice;
      v11 = StringFromDevice & 0xC0000000;
      if ( (_DWORD)v11 == -1073741824 )
      {
        UsbhException(
          a1,
          *((unsigned __int16 *)v6 + 714),
          140,
          (int)Pool2,
          v19,
          StringFromDevice,
          v18[0],
          usbfile_bus_c,
          7615,
          0);
        v12 = 4678194;
        goto LABEL_16;
      }
      v13 = v19;
      if ( !(unsigned __int8)UsbhValidateStringDescriptor(v11, Pool2, v19, v18) )
      {
        UsbhException(a1, *((unsigned __int16 *)v6 + 714), 38, (int)Pool2, v13, v9, v18[0], usbfile_bus_c, 7627, 0);
        v12 = 4678195;
        goto LABEL_16;
      }
    }
    for ( i = 0; i < *(_BYTE *)(a3 + 4); ++i )
    {
      if ( *(_BYTE *)(a3 + 4LL * i + 47) )
      {
        v17 = *(_BYTE *)(a3 + 4LL * i + 47);
        v19 = 255;
        v15 = UsbhGetStringFromDevice(a1, v5, (unsigned int)v18, (_DWORD)Pool2, (__int64)&v19, 1033, v17);
        v9 = v15;
        if ( (v15 & 0xC0000000) == 0xC0000000 )
        {
          UsbhException(a1, *((unsigned __int16 *)v6 + 714), 141, (int)Pool2, v19, v15, v18[0], usbfile_bus_c, 7652, 0);
          v12 = 4678196;
LABEL_16:
          Log(a1, 4, v12, 0LL, v9);
          break;
        }
        if ( !(unsigned __int8)UsbhValidateStringDescriptor(3221225472LL, Pool2, v19, v18) )
        {
          UsbhException(a1, *((unsigned __int16 *)v6 + 714), 38, (int)Pool2, v19, v9, v18[0], usbfile_bus_c, 7664, 0);
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
