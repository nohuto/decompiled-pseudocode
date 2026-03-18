/*
 * XREFs of UsbhGetMSOS_Descriptor @ 0x1C003356C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhRegCreateUsbflagsKey @ 0x1C0046FB4 (UsbhRegCreateUsbflagsKey.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     UsbhGetStringFromDevice @ 0x1C00555D8 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetMSOS_Descriptor(int a1, __int64 a2)
{
  int v3; // esi
  int v4; // ebx
  _DWORD *v5; // rdi
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // r14
  unsigned int v9; // ecx
  int v10; // ebx
  int StringFromDevice; // eax
  int v12; // r15d
  const WCHAR *v13; // rdx
  char v14; // al
  unsigned int v15; // ecx
  char v16; // dl
  bool v17; // zf
  const WCHAR *v18; // rdx
  int v19; // [rsp+48h] [rbp-18h]
  int ValueData[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v21; // [rsp+A0h] [rbp+40h] BYREF
  int v22; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  ValueData[0] = 0;
  v4 = a2;
  v5 = PdoExt(a2);
  if ( HIDWORD(qword_1C006C4DC) == 2 )
    return 3221225659LL;
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
  {
    HIDWORD(qword_1C006C4DC) = 2;
    return 3221225659LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x12uLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    *((_WORD *)PoolWithTag + 8) = 0;
    v9 = v5[358];
    if ( HIDWORD(qword_1C006C4DC) == 1 )
    {
      v9 = v9 & 0xFFFFF9FF | 0x200;
      v5[358] = v9;
    }
    if ( (v9 & 0x200) != 0 )
    {
      if ( (v9 & 0x400) != 0 )
      {
        v10 = 0;
      }
      else
      {
        LOWORD(v22) = 18;
        StringFromDevice = UsbhGetStringFromDevice(
                             a1,
                             v4,
                             (unsigned int)ValueData,
                             (_DWORD)PoolWithTag,
                             (__int64)&v22,
                             0,
                             238);
        v12 = ValueData[0];
        v10 = StringFromDevice;
        if ( ValueData[0] == -1073717248 )
        {
          v13 = (const WCHAR *)*((_QWORD *)v5 + 142);
          ValueData[0] = 1;
          RtlWriteRegistryValue(2u, v13, L"MSOSDescriptorHang", 4u, ValueData, 4u);
        }
        v5[358] &= ~0x200u;
        if ( v10 >= 0 && (_WORD)v22 == 18 && RtlCompareMemory(v8 + 2, L"MSFT100", 0xEuLL) == 14 )
        {
          v14 = v8[16];
          *((_BYTE *)v5 + 1432) = v14;
          HIBYTE(v21) = v14;
          LOBYTE(v21) = 1;
          v5[358] |= 0x400u;
        }
        else
        {
          v5[358] &= ~0x400u;
          v10 = -1073741637;
          LOBYTE(v19) = 0;
          v21 = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v5 + 714),
            102,
            (int)v8,
            (unsigned __int16)v22,
            -1073741637,
            v12,
            usbfile_msos_c,
            193,
            v19);
        }
        if ( *((_QWORD *)v5 + 142) )
        {
          RtlWriteRegistryValue(0, *((PCWSTR *)v5 + 143), L"osvc", 3u, &v21, 2u);
          v15 = v5[358] & 0xFFFF7FFF;
          v16 = v8[17] & 2;
          if ( !v16 )
            v15 = v5[358] | 0x8000;
          v17 = v16 == 0;
          v18 = (const WCHAR *)*((_QWORD *)v5 + 143);
          LOBYTE(v3) = v17;
          v5[358] = v15;
          v22 = v3;
          RtlWriteRegistryValue(0, v18, L"SkipContainerIdQuery", 3u, &v22, 4u);
        }
      }
    }
    else
    {
      v10 = -1073741637;
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v10;
}
