/*
 * XREFs of UsbhGetDeviceInformation @ 0x1C0038B48
 * Callers:
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0038560 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C00327F4 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhGetUsbDeviceFlags @ 0x1C0039180 (UsbhGetUsbDeviceFlags.c)
 *     Usbh_HubGetUsbDescriptors @ 0x1C003BA24 (Usbh_HubGetUsbDescriptors.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     UsbhValidateConfigurationDescriptor @ 0x1C0053370 (UsbhValidateConfigurationDescriptor.c)
 */

__int64 __fastcall UsbhGetDeviceInformation(__int64 a1, __int64 a2)
{
  int v3; // r12d
  _DWORD *v4; // rbx
  unsigned __int16 v5; // r14
  unsigned int v6; // eax
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  int UsbDescriptors; // r15d
  char v11; // al
  unsigned __int8 *v12; // rcx
  _BYTE *v13; // r8
  char v14; // al
  int v15; // eax
  char v16; // cl
  _BYTE *v17; // rax
  _BYTE *v18; // r14
  _BYTE *v19; // rax
  int v20; // [rsp+20h] [rbp-40h]
  int v21; // [rsp+20h] [rbp-40h]
  int v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+50h] [rbp-10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+50h] BYREF
  int v25; // [rsp+B8h] [rbp+58h] BYREF

  v25 = 0;
  v3 = 0;
  v4 = PdoExt(a2);
  v23 = 18;
  v5 = 255;
  v6 = 255;
  LODWORD(Size) = 255;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), v6, 0x42554855u);
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, (unsigned int)Size);
    UsbDescriptors = Usbh_HubGetUsbDescriptors(
                       a1,
                       *((_QWORD *)v4 + 145),
                       (int)v4 + 1400,
                       (unsigned int)&v23,
                       v8,
                       (__int64)&Size);
    if ( UsbDescriptors < 0 || (unsigned int)Size >= *(unsigned __int16 *)(v8 + 2) || v3 )
      break;
    v5 = *(_WORD *)(v8 + 2);
    LODWORD(Size) = v5;
    ExFreePoolWithTag((PVOID)v8, 0);
    v6 = Size;
    v3 = 1;
  }
  if ( (UsbDescriptors & 0xC0000000) == 0xC0000000 )
  {
    v4[705] = 1073807367;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_GET_DESCRIPTORS_FAILURE);
    LOBYTE(v22) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 36, v8, Size, UsbDescriptors, -1, usbfile_bus_c, 3773, v22);
    ExFreePoolWithTag((PVOID)v8, 0);
    return (unsigned int)UsbDescriptors;
  }
  UsbDescriptors = UsbhGetUsbDeviceFlags(a1);
  if ( (UsbDescriptors & 0xC0000000) == 0xC0000000 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_REGISTRY_FAILURE);
    return (unsigned int)UsbDescriptors;
  }
  if ( (unsigned __int8)UsbhValidateConfigurationDescriptor(v8, (unsigned int)Size, &v25, dword_1C006C5D0 != 0) )
  {
    if ( UsbDescriptors >= 0 && v5 < *(_WORD *)(v8 + 2) )
      *(_WORD *)(v8 + 2) = v5;
    if ( *((_BYTE *)v4 + 1417) > 1u )
    {
      v4[701] |= 0x80u;
      if ( *((_BYTE *)v4 + 1417) > 1u && *(_BYTE *)(v8 + 4) > 1u )
      {
        v11 = *((_BYTE *)v4 + 1404);
        if ( !v11 || v11 == -17 && *((_BYTE *)v4 + 1405) == 2 && *((_BYTE *)v4 + 1406) == 1 )
        {
          v12 = (unsigned __int8 *)(v8 + 9);
          while ( (unsigned __int64)v12 < v8 + (unsigned __int64)*(unsigned __int16 *)(v8 + 2) )
          {
            v13 = v12;
            v12 += *v12;
            v14 = v13[1];
            if ( v14 == 11 && v13[4] == 1 || v14 == 4 && v13[5] == 1 )
            {
              v4[355] |= 0x20u;
              break;
            }
          }
        }
      }
    }
    v15 = v4[355];
    if ( (v15 & 0x20) == 0
      && *((_BYTE *)v4 + 1417) == 1
      && *(_BYTE *)(v8 + 4) > 1u
      && ((v16 = *((_BYTE *)v4 + 1404)) == 0 || v16 == -17 && *((_BYTE *)v4 + 1405) == 2 && *((_BYTE *)v4 + 1406) == 1) )
    {
      v4[355] = v15 | 0x20;
    }
    else
    {
      v17 = UsbhParseConfigurationDescriptorEx(a1, v8, v8, -1, v20, -1, -1, -1);
      v18 = v17;
      if ( v17 )
      {
        if ( v17[5] == 9 )
        {
          v4[355] |= 4u;
        }
        else if ( *((_WORD *)v4 + 701) > 0x200u && (v4[358] & 0x10000) == 0 )
        {
          v19 = UsbhParseConfigurationDescriptorEx(a1, v8, (__int64)v17, (unsigned __int8)v17[2], v21, 8, 6, 98);
          if ( v19 )
          {
            if ( v4[292] == 2 )
            {
              v4[355] |= 0x200000u;
              v18 = v19;
            }
          }
        }
        *(_QWORD *)((char *)v4 + 2433) = *(_QWORD *)v18;
        *((_BYTE *)v4 + 2441) = v18[8];
      }
    }
    if ( (*(_BYTE *)(v8 + 7) & 0x20) != 0 )
      v4[355] |= 0x100u;
    *((_QWORD *)v4 + 299) = v8;
    return (unsigned int)UsbDescriptors;
  }
  v4[705] = 1073807364;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CONFIG_DESC_VALIDATION_FAILURE);
  LOBYTE(v22) = 0;
  UsbhException(a1, *((unsigned __int16 *)v4 + 714), 36, v8, Size, -1073741811, v25, usbfile_bus_c, 3807, v22);
  ExFreePoolWithTag((PVOID)v8, 0);
  return 3221225485LL;
}
