/*
 * XREFs of Crashdump_UsbDevice_SuspendPort @ 0x1C00510F8
 * Callers:
 *     Crashdump_Cleanup @ 0x1C004BE10 (Crashdump_Cleanup.c)
 * Callees:
 *     Crashdump_Endpoint_SendControlTransfer @ 0x1C004F524 (Crashdump_Endpoint_SendControlTransfer.c)
 *     Crashdump_UsbDevice_ChangePortFeature @ 0x1C004FA68 (Crashdump_UsbDevice_ChangePortFeature.c)
 *     Crashdump_UsbDevice_GetPortType @ 0x1C0050584 (Crashdump_UsbDevice_GetPortType.c)
 */

__int64 __fastcall Crashdump_UsbDevice_SuspendPort(_QWORD *a1, int a2)
{
  int PortType; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v9) = 0;
  PortType = Crashdump_UsbDevice_GetPortType(a1, a2, &v9);
  if ( PortType >= 0 )
  {
    if ( (_DWORD)v9 == 20 )
    {
      v5 = Crashdump_UsbDevice_ChangePortFeature((__int64)a1, a2, 2, 3u);
      PortType = v5;
      if ( v5 < 0 )
        DbgPrintEx(
          0x93u,
          1u,
          "XHCIDUMP: Crashdump_UsbDevice_SuspendPort: Crashdump_UsbDevice_ChangePortFeature failed with 0x%X\n",
          (unsigned int)v5);
    }
    else
    {
      v6 = a1[15];
      LODWORD(v9) = 328483;
      HIWORD(v9) = 0;
      BYTE4(v9) = a2;
      BYTE5(v9) = 3;
      v7 = Crashdump_Endpoint_SendControlTransfer(v6, &v9, 0, 0LL);
      PortType = v7;
      if ( v7 < 0 )
        DbgPrintEx(
          0x93u,
          1u,
          "XHCIDUMP: Crashdump_UsbDevice_SuspendPort: Crashdump_UsbDevice_SendControlTransfer failed with 0x%X\n",
          (unsigned int)v7);
    }
  }
  return (unsigned int)PortType;
}
