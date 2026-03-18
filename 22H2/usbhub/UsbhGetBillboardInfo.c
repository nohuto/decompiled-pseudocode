/*
 * XREFs of UsbhGetBillboardInfo @ 0x1C00386F0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     UsbhValidateStringDescriptor @ 0x1C0053E24 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C00555D8 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetBillboardInfo(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  _DWORD *v6; // r13
  PVOID PoolWithTag; // rax
  void *v8; // rbx
  __int64 StringFromDevice; // rdi
  __int64 v10; // rcx
  int v11; // r8d
  int v13; // r14d
  unsigned __int8 i; // r14
  int v15; // eax
  char v16; // [rsp+30h] [rbp-30h]
  char v17; // [rsp+30h] [rbp-30h]
  int v18; // [rsp+48h] [rbp-18h]
  int v19[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v20; // [rsp+A8h] [rbp+48h] BYREF

  v19[0] = 0;
  v5 = a2;
  v6 = PdoExt(a2);
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0xFFuLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xFFuLL);
    LODWORD(StringFromDevice) = 0;
    if ( *(_BYTE *)(a3 + 3) )
    {
      v16 = *(_BYTE *)(a3 + 3);
      v20 = 255;
      StringFromDevice = (int)UsbhGetStringFromDevice(a1, v5, (unsigned int)v19, (_DWORD)v8, (__int64)&v20, 1033, v16);
      v10 = (unsigned int)StringFromDevice & 0xC0000000;
      if ( (_DWORD)v10 == -1073741824 )
      {
        LOBYTE(v18) = 0;
        UsbhException(
          a1,
          *((unsigned __int16 *)v6 + 714),
          140,
          (int)v8,
          v20,
          StringFromDevice,
          v19[0],
          usbfile_bus_c,
          7615,
          v18);
        v11 = 4678194;
        goto LABEL_5;
      }
      v13 = v20;
      if ( !(unsigned __int8)UsbhValidateStringDescriptor(v10, v8, v20, v19) )
      {
        LOBYTE(v18) = 0;
        UsbhException(
          a1,
          *((unsigned __int16 *)v6 + 714),
          38,
          (int)v8,
          v13,
          StringFromDevice,
          v19[0],
          usbfile_bus_c,
          7627,
          v18);
        v11 = 4678195;
        goto LABEL_5;
      }
    }
    for ( i = 0; i < *(_BYTE *)(a3 + 4); ++i )
    {
      if ( *(_BYTE *)(a3 + 4LL * i + 47) )
      {
        v17 = *(_BYTE *)(a3 + 4LL * i + 47);
        v20 = 255;
        v15 = UsbhGetStringFromDevice(a1, v5, (unsigned int)v19, (_DWORD)v8, (__int64)&v20, 1033, v17);
        StringFromDevice = v15;
        if ( (v15 & 0xC0000000) == 0xC0000000 )
        {
          LOBYTE(v18) = 0;
          UsbhException(a1, *((unsigned __int16 *)v6 + 714), 141, (int)v8, v20, v15, v19[0], usbfile_bus_c, 7652, v18);
          v11 = 4678196;
LABEL_5:
          Log(a1, 4, v11, 0LL, StringFromDevice);
          break;
        }
        if ( !(unsigned __int8)UsbhValidateStringDescriptor(3221225472LL, v8, v20, v19) )
        {
          LOBYTE(v18) = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v6 + 714),
            38,
            (int)v8,
            v20,
            StringFromDevice,
            v19[0],
            usbfile_bus_c,
            7664,
            v18);
          v11 = 4678197;
          goto LABEL_5;
        }
      }
    }
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)StringFromDevice;
  }
  else
  {
    Log(a1, 4, 4678193, 0LL, 0LL);
    return 3221225626LL;
  }
}
