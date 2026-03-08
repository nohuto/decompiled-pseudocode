/*
 * XREFs of UsbhGetMSOS_Descriptor @ 0x1C0032C40
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhRegCreateUsbflagsKey @ 0x1C004650C (UsbhRegCreateUsbflagsKey.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhGetStringFromDevice @ 0x1C0054830 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetMSOS_Descriptor(int a1, __int64 a2)
{
  int v3; // ebx
  _DWORD *v4; // rdi
  _BYTE *Pool2; // rsi
  int v7; // ebx
  int v8; // eax
  int StringFromDevice; // eax
  int v10; // r15d
  const WCHAR *v11; // rdx
  char v12; // al
  char v13; // r8
  unsigned int v14; // edx
  const WCHAR *v15; // rdx
  int ValueData[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v17; // [rsp+A0h] [rbp+40h] BYREF
  int v18; // [rsp+A8h] [rbp+48h] BYREF

  ValueData[0] = 0;
  v3 = a2;
  v4 = PdoExt(a2);
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy == 2 )
    return 3221225659LL;
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 2;
    return 3221225659LL;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 18LL, 1112885333LL);
  if ( Pool2 )
  {
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy == 1 )
      v4[358] = v4[358] & 0xFFFFF9FF | 0x200;
    v8 = v4[358];
    if ( (v8 & 0x200) != 0 )
    {
      if ( (v8 & 0x400) != 0 )
      {
        v7 = 0;
      }
      else
      {
        LOWORD(v18) = 18;
        StringFromDevice = UsbhGetStringFromDevice(
                             a1,
                             v3,
                             (unsigned int)ValueData,
                             (_DWORD)Pool2,
                             (__int64)&v18,
                             0,
                             238);
        v10 = ValueData[0];
        v7 = StringFromDevice;
        if ( ValueData[0] == -1073717248 )
        {
          v11 = (const WCHAR *)*((_QWORD *)v4 + 142);
          ValueData[0] = 1;
          RtlWriteRegistryValue(2u, v11, L"MSOSDescriptorHang", 4u, ValueData, 4u);
        }
        v4[358] &= ~0x200u;
        if ( v7 >= 0 && (_WORD)v18 == 18 && RtlCompareMemory(Pool2 + 2, L"MSFT100", 0xEuLL) == 14 )
        {
          v12 = Pool2[16];
          *((_BYTE *)v4 + 1432) = v12;
          HIBYTE(v17) = v12;
          LOBYTE(v17) = 1;
          v4[358] |= 0x400u;
        }
        else
        {
          v4[358] &= ~0x400u;
          v7 = -1073741637;
          v17 = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v4 + 714),
            102,
            (int)Pool2,
            (unsigned __int16)v18,
            -1073741637,
            v10,
            usbfile_msos_c,
            193,
            0);
        }
        if ( *((_QWORD *)v4 + 142) )
        {
          RtlWriteRegistryValue(0, *((PCWSTR *)v4 + 143), L"osvc", 3u, &v17, 2u);
          v13 = Pool2[17];
          v14 = v4[358] & 0xFFFF7FFF;
          if ( (v13 & 2) == 0 )
            v14 = v4[358] | 0x8000;
          v4[358] = v14;
          v15 = (const WCHAR *)*((_QWORD *)v4 + 143);
          v18 = (v13 & 2) == 0;
          RtlWriteRegistryValue(0, v15, L"SkipContainerIdQuery", 3u, &v18, 4u);
        }
      }
    }
    else
    {
      v7 = -1073741637;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
