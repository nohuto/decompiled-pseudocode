/*
 * XREFs of UsbhGetMSOS_Descriptor @ 0x1C003227C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhRegCreateUsbflagsKey @ 0x1C0045C5C (UsbhRegCreateUsbflagsKey.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 *     UsbhGetStringFromDevice @ 0x1C0053F4C (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetMSOS_Descriptor(int a1, __int64 a2)
{
  int v3; // esi
  int v4; // ebx
  _DWORD *v5; // rdi
  _BYTE *Pool2; // r14
  int v8; // ebx
  unsigned int v9; // eax
  int StringFromDevice; // eax
  int v11; // r12d
  const WCHAR *v12; // rdx
  char v13; // al
  unsigned int v14; // ecx
  const WCHAR *v15; // rdx
  int ValueData[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v17; // [rsp+A0h] [rbp+40h] BYREF
  int v18; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  ValueData[0] = 0;
  v4 = a2;
  v5 = PdoExt(a2);
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
    v9 = v5[358];
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy == 1 )
    {
      v9 = v9 & 0xFFFFF9FF | 0x200;
      v5[358] = v9;
    }
    if ( (v9 & 0x200) != 0 )
    {
      if ( (v9 & 0x400) != 0 )
      {
        v8 = 0;
      }
      else
      {
        LOWORD(v18) = 18;
        StringFromDevice = UsbhGetStringFromDevice(
                             a1,
                             v4,
                             (unsigned int)ValueData,
                             (_DWORD)Pool2,
                             (__int64)&v18,
                             0,
                             238);
        v11 = ValueData[0];
        v8 = StringFromDevice;
        if ( ValueData[0] == -1073717248 )
        {
          v12 = (const WCHAR *)*((_QWORD *)v5 + 142);
          ValueData[0] = 1;
          RtlWriteRegistryValue(2u, v12, L"MSOSDescriptorHang", 4u, ValueData, 4u);
        }
        v5[358] &= ~0x200u;
        if ( v8 >= 0 && (_WORD)v18 == 18 && RtlCompareMemory(Pool2 + 2, L"MSFT100", 0xEuLL) == 14 )
        {
          v13 = Pool2[16];
          *((_BYTE *)v5 + 1432) = v13;
          HIBYTE(v17) = v13;
          LOBYTE(v17) = 1;
          v5[358] |= 0x400u;
        }
        else
        {
          v5[358] &= ~0x400u;
          v8 = -1073741637;
          v17 = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v5 + 714),
            102,
            (int)Pool2,
            (unsigned __int16)v18,
            -1073741637,
            v11,
            usbfile_msos_c,
            193,
            0);
        }
        if ( *((_QWORD *)v5 + 142) )
        {
          RtlWriteRegistryValue(0, *((PCWSTR *)v5 + 143), L"osvc", 3u, &v17, 2u);
          v14 = v5[358] & 0xFFFF7FFF;
          if ( (Pool2[17] & 2) == 0 )
            v14 = v5[358] | 0x8000;
          v15 = (const WCHAR *)*((_QWORD *)v5 + 143);
          LOBYTE(v3) = (Pool2[17] & 2) == 0;
          v5[358] = v14;
          v18 = v3;
          RtlWriteRegistryValue(0, v15, L"SkipContainerIdQuery", 3u, &v18, 4u);
        }
      }
    }
    else
    {
      v8 = -1073741637;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
