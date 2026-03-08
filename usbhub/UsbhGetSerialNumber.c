/*
 * XREFs of UsbhGetSerialNumber @ 0x1C00509A4
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhFreeID @ 0x1C00503BC (UsbhFreeID.c)
 *     UsbhValidateSerialNumberString @ 0x1C0052FB8 (UsbhValidateSerialNumberString.c)
 *     UsbhValidateStringDescriptor @ 0x1C00530B4 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0054830 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetSerialNumber(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  __int64 Pool2; // rax
  unsigned __int8 *v9; // r14
  int StringFromDevice; // eax
  int v11; // edi
  unsigned int v12; // r12d
  unsigned int v13; // r8d
  unsigned int v14; // eax
  _WORD *v15; // rsi
  _WORD *v16; // rdi
  __int64 i; // rcx
  int v18; // edi
  char v20; // [rsp+30h] [rbp-30h]
  int v21; // [rsp+30h] [rbp-30h]
  int v22; // [rsp+40h] [rbp-20h]
  unsigned __int16 v23[2]; // [rsp+50h] [rbp-10h] BYREF
  int v24; // [rsp+54h] [rbp-Ch] BYREF
  int v25; // [rsp+58h] [rbp-8h]
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0;
  v24 = 0;
  v5 = a2;
  v6 = PdoExt(a2);
  v7 = v6;
  if ( (v6[358] & 0x800) == 0 && *((_BYTE *)v6 + 1416) )
  {
    Pool2 = ExAllocatePool2(64LL, 255LL, 1112885333LL);
    LOBYTE(v27) = 0;
    v9 = (unsigned __int8 *)Pool2;
    if ( Pool2 )
    {
      v20 = *((_BYTE *)v7 + 1416);
      v23[0] = 255;
      StringFromDevice = UsbhGetStringFromDevice(a1, v5, (unsigned int)&v24, Pool2, (__int64)v23, 1033, v20);
      v25 = StringFromDevice;
      v11 = StringFromDevice;
      if ( (StringFromDevice & 0xC0000000) == 0xC0000000 )
      {
        UsbhException(a1, *((_WORD *)v7 + 714), 0x59u, v9, v23[0], StringFromDevice, v24, usbfile_idstring_c, 1591, 0);
      }
      else
      {
        v12 = v23[0];
        if ( (unsigned __int8)UsbhValidateStringDescriptor(3221225472LL, v9, v23[0], &v24) )
        {
          v14 = (*v9 >> 1) - 1;
          if ( *v9 >> 1 != 1 )
          {
            v15 = v9 + 2;
            v16 = v9;
            for ( i = v14; i; --i )
              *v16++ = *v15++;
            v18 = v25;
            *(_WORD *)&v9[2 * v14] = 0;
            *(_DWORD *)(a3 + 4) = v12;
            *(_QWORD *)(a3 + 8) = v9;
            if ( !(unsigned __int8)UsbhValidateSerialNumberString(a1, (__int64)&v27) )
            {
              UsbhException(a1, *((_WORD *)v7 + 714), 0x25u, v9, v12, v18, v24, usbfile_idstring_c, 1656, 0);
              UsbhFreeID(a3);
              if ( (_BYTE)v27 )
              {
                v7[705] = 1073807369;
                return (unsigned int)-1073741811;
              }
            }
            return v4;
          }
          v13 = 59;
          v22 = 1677;
          v21 = v24;
        }
        else
        {
          v13 = 38;
          v22 = 1604;
          v21 = v24;
        }
        UsbhException(a1, *((_WORD *)v7 + 714), v13, v9, v12, v11, v21, usbfile_idstring_c, v22, 0);
      }
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v4;
  }
  return 0LL;
}
