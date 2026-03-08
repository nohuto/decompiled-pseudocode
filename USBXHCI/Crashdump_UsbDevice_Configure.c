/*
 * XREFs of Crashdump_UsbDevice_Configure @ 0x1C004FC34
 * Callers:
 *     Crashdump_UsbDevice_ReConfigureOnControllerReset @ 0x1C00507EC (Crashdump_UsbDevice_ReConfigureOnControllerReset.c)
 *     Crashdump_UsbDevice_ReConfigureOnPortReset @ 0x1C0050940 (Crashdump_UsbDevice_ReConfigureOnPortReset.c)
 * Callees:
 *     Crashdump_Endpoint_SendControlTransfer @ 0x1C004F524 (Crashdump_Endpoint_SendControlTransfer.c)
 *     Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C004FEF4 (Crashdump_UsbDevice_ConfigureEndpoints.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C0050254 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x1C0050C40 (Crashdump_UsbDevice_SendAddressDeviceCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_Configure(__int64 a1, int a2)
{
  int v4; // r15d
  __int64 v5; // r9
  int DeviceDescriptor; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF

  v15 = 0LL;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_Configure: begin\n");
  v4 = Crashdump_UsbDevice_SendAddressDeviceCommand(a1);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 72);
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Slot %u: RH %u, RS %u, Speed %u, IsHub %u, NumEntries %u, Addr %u, State %u\n",
      *(unsigned __int8 *)(a1 + 56),
      *(unsigned __int8 *)(v5 + 6),
      *(_DWORD *)v5 & 0xFFFFF,
      (*(_DWORD *)v5 >> 20) & 0xF,
      (*(_DWORD *)v5 >> 26) & 1,
      *(_DWORD *)v5 >> 27,
      (unsigned __int8)*(_DWORD *)(v5 + 12),
      *(_DWORD *)(v5 + 12) >> 27);
    DeviceDescriptor = Crashdump_UsbDevice_GetDeviceDescriptor(a1, &v15);
    v4 = DeviceDescriptor;
    if ( DeviceDescriptor >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 120);
      WORD1(v15) = *(unsigned __int8 *)(a1 + 369);
      LOWORD(v15) = 2304;
      HIDWORD(v15) = 0;
      v8 = Crashdump_Endpoint_SendControlTransfer(v7, &v15, 0, 0LL);
      v4 = v8;
      if ( v8 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 371)
          && (v9 = *(_QWORD *)(a1 + 120),
              WORD1(v15) = *(unsigned __int8 *)(a1 + 371),
              WORD2(v15) = *(unsigned __int8 *)(a1 + 370),
              LOWORD(v15) = 2817,
              v10 = Crashdump_Endpoint_SendControlTransfer(v9, &v15, 0, 0LL),
              v4 = v10,
              v10 < 0) )
        {
          DbgPrintEx(0x93u, 1u, "XHCIDUMP: USB_REQUEST_SET_INTERFACE: failed error = 0x%X\n", (unsigned int)v10);
        }
        else if ( *(_BYTE *)(a1 + 368) )
        {
          if ( a2 == 30 )
          {
            v11 = *(_QWORD *)(a1 + 120);
            *(_DWORD *)((char *)&v15 + 2) = (unsigned __int16)(*(_WORD *)(a1 + 372) - 1);
            LOWORD(v15) = 3104;
            v12 = Crashdump_Endpoint_SendControlTransfer(v11, &v15, 0, 0LL);
            v4 = v12;
            if ( v12 < 0 )
              DbgPrintEx(
                0x93u,
                1u,
                "XHCIDUMP: USB_REQUEST_SET_HUB_DEPTH: failed depth = %u error = 0x%X\n",
                *(_DWORD *)(a1 + 372) - 1,
                v12);
          }
        }
        else
        {
          v4 = Crashdump_UsbDevice_ConfigureEndpoints(a1);
        }
      }
      else
      {
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: USB_REQUEST_SET_CONFIGURATION: failed error = 0x%X\n", (unsigned int)v8);
      }
    }
    else
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: Crashdump_UsbDevice_GetDeviceDescriptor: failed error = 0x%X\n",
        (unsigned int)DeviceDescriptor);
    }
  }
  v13 = *(_QWORD *)(a1 + 72);
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Slot %u: RH %u, RS %u, Speed %u, IsHub %u, NumEntries %u, Addr %u, State %u\n",
    *(unsigned __int8 *)(a1 + 56),
    *(unsigned __int8 *)(v13 + 6),
    *(_DWORD *)v13 & 0xFFFFF,
    (*(_DWORD *)v13 >> 20) & 0xF,
    (*(_DWORD *)v13 >> 26) & 1,
    *(_DWORD *)v13 >> 27,
    (unsigned __int8)*(_DWORD *)(v13 + 12),
    *(_DWORD *)(v13 + 12) >> 27);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_Configure: end 0x%X\n", v4);
  return (unsigned int)v4;
}
