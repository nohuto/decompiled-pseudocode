__int64 __fastcall UsbhGetDeviceInformation(__int64 a1, __int64 a2)
{
  int v3; // r15d
  unsigned __int16 v4; // r12
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  int UsbDescriptors; // esi
  unsigned int v8; // eax
  __int64 Pool2; // rdi
  int UsbDeviceFlags; // r15d
  char v12; // al
  unsigned __int8 *v13; // rcx
  _BYTE *v14; // r8
  char v15; // al
  int v16; // eax
  char v17; // cl
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-40h]
  int v22; // [rsp+20h] [rbp-40h]
  int v23; // [rsp+50h] [rbp-10h] BYREF
  int v24; // [rsp+B0h] [rbp+50h] BYREF
  int v25; // [rsp+B8h] [rbp+58h] BYREF

  v25 = 0;
  v3 = 0;
  v4 = 255;
  v23 = 18;
  v5 = PdoExt(a2);
  v24 = 255;
  v6 = 255LL;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(64LL, v6, 1112885333LL);
    if ( !Pool2 )
      return 3221225626LL;
    UsbDescriptors = Usbh_HubGetUsbDescriptors(
                       a1,
                       *((_QWORD *)v5 + 145),
                       (int)v5 + 1400,
                       (unsigned int)&v23,
                       Pool2,
                       (__int64)&v24);
    if ( UsbDescriptors < 0 )
      break;
    v8 = *(unsigned __int16 *)(Pool2 + 2);
    if ( v24 >= v8 || v3 )
      break;
    v24 = *(unsigned __int16 *)(Pool2 + 2);
    v4 = v8;
    ExFreePoolWithTag((PVOID)Pool2, 0);
    v6 = (unsigned int)v24;
    v3 = 1;
  }
  if ( (UsbDescriptors & 0xC0000000) == 0xC0000000 )
  {
    v5[705] = 1073807367;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_GET_DESCRIPTORS_FAILURE);
    UsbhException(a1, *((unsigned __int16 *)v5 + 714), 36, Pool2, v24, UsbDescriptors, -1, usbfile_bus_c, 3773, 0);
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)UsbDescriptors;
  }
  UsbDeviceFlags = UsbhGetUsbDeviceFlags(a1);
  if ( (UsbDeviceFlags & 0xC0000000) == 0xC0000000 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_REGISTRY_FAILURE);
    return (unsigned int)UsbDeviceFlags;
  }
  if ( (unsigned __int8)UsbhValidateConfigurationDescriptor(Pool2, (unsigned int)v24, &v25, dword_1C006B670 != 0) )
  {
    if ( UsbDeviceFlags >= 0 && v4 < *(_WORD *)(Pool2 + 2) )
      *(_WORD *)(Pool2 + 2) = v4;
    if ( *((_BYTE *)v5 + 1417) > 1u )
    {
      v5[701] |= 0x80u;
      if ( *((_BYTE *)v5 + 1417) > 1u && *(_BYTE *)(Pool2 + 4) > 1u )
      {
        v12 = *((_BYTE *)v5 + 1404);
        if ( !v12 || v12 == -17 && *((_BYTE *)v5 + 1405) == 2 && *((_BYTE *)v5 + 1406) == 1 )
        {
          v13 = (unsigned __int8 *)(Pool2 + 9);
          while ( (unsigned __int64)v13 < Pool2 + (unsigned __int64)*(unsigned __int16 *)(Pool2 + 2) )
          {
            v14 = v13;
            v13 += *v13;
            v15 = v14[1];
            if ( v15 == 11 && v14[4] == 1 || v15 == 4 && v14[5] == 1 )
            {
              v5[355] |= 0x20u;
              break;
            }
          }
        }
      }
    }
    v16 = v5[355];
    if ( (v16 & 0x20) == 0
      && *((_BYTE *)v5 + 1417) == 1
      && *(_BYTE *)(Pool2 + 4) > 1u
      && ((v17 = *((_BYTE *)v5 + 1404)) == 0 || v17 == -17 && *((_BYTE *)v5 + 1405) == 2 && *((_BYTE *)v5 + 1406) == 1) )
    {
      v5[355] = v16 | 0x20;
    }
    else
    {
      v18 = UsbhParseConfigurationDescriptorEx(a1, Pool2, Pool2, -1, v21, -1, -1, -1);
      v19 = v18;
      if ( v18 )
      {
        if ( *(_BYTE *)(v18 + 5) == 9 )
        {
          v5[355] |= 4u;
        }
        else if ( *((_WORD *)v5 + 701) > 0x200u && (v5[358] & 0x10000) == 0 )
        {
          v20 = UsbhParseConfigurationDescriptorEx(a1, Pool2, v18, *(unsigned __int8 *)(v18 + 2), v22, 8, 6, 98);
          if ( v20 )
          {
            if ( v5[292] == 2 )
            {
              v5[355] |= 0x200000u;
              v19 = v20;
            }
          }
        }
        *(_QWORD *)((char *)v5 + 2433) = *(_QWORD *)v19;
        *((_BYTE *)v5 + 2441) = *(_BYTE *)(v19 + 8);
      }
    }
    if ( (*(_BYTE *)(Pool2 + 7) & 0x20) != 0 )
      v5[355] |= 0x100u;
    *((_QWORD *)v5 + 299) = Pool2;
    return (unsigned int)UsbDeviceFlags;
  }
  v5[705] = 1073807364;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CONFIG_DESC_VALIDATION_FAILURE);
  UsbhException(a1, *((unsigned __int16 *)v5 + 714), 36, Pool2, v24, -1073741811, v25, usbfile_bus_c, 3807, 0);
  ExFreePoolWithTag((PVOID)Pool2, 0);
  return 3221225485LL;
}
