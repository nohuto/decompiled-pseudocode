/*
 * XREFs of Crashdump_UsbDevice_ResetPort @ 0x1C0050A40
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C004C868 (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_ResetDevice @ 0x1C004CD40 (Crashdump_ResetDevice.c)
 * Callees:
 *     Crashdump_UsbDevice_ChangePortFeature @ 0x1C004FA68 (Crashdump_UsbDevice_ChangePortFeature.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C00503E8 (Crashdump_UsbDevice_GetPortStatus.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ResetPort(_QWORD *a1, int a2, int a3)
{
  int v6; // edi
  int PortStatus; // ebx
  _BYTE *v8; // rbx
  int v9; // eax
  int v10; // r8d
  int v11; // edi
  _BYTE *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ResetPort: begin: port %u\n", a2);
  v6 = 0;
  if ( a3 == 20 )
  {
    while ( 1 )
    {
      PortStatus = Crashdump_UsbDevice_GetPortStatus(a1, a2, &v13);
      if ( PortStatus < 0 )
        break;
      v8 = v13;
      if ( (v13[2] & 1) != 0 )
      {
        v9 = Crashdump_UsbDevice_ChangePortFeature((__int64)a1, a2, 16, 1u);
        if ( v9 < 0 )
          DbgPrintEx(0x93u, 3u, "XHCIDUMP: Clearing Connect Status Change failed with 0x%X\n", v9);
      }
      if ( (*v8 & 1) != 0 )
        goto LABEL_10;
      KeStallExecutionProcessor(0x186A0u);
      if ( (unsigned int)++v6 >= 5 )
      {
        if ( (*v8 & 1) == 0 )
        {
LABEL_9:
          PortStatus = -1073741630;
          break;
        }
LABEL_10:
        v10 = 4;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v10 = 28;
LABEL_12:
    PortStatus = Crashdump_UsbDevice_ChangePortFeature((__int64)a1, a2, v10, 3u);
    if ( PortStatus >= 0 )
    {
      KeStallExecutionProcessor(0x4E20u);
      v11 = 0;
      while ( 1 )
      {
        PortStatus = Crashdump_UsbDevice_GetPortStatus(a1, a2, &v13);
        if ( PortStatus < 0 )
          break;
        if ( (*v13 & 0x10) == 0 && (v13[2] & 0x10) != 0 )
        {
          DbgPrintEx(
            0x93u,
            3u,
            "XHCIDUMP: Port reset took %u retries and %u ms to complete\n",
            v11 + 1,
            20000 * (v11 + 1) / 0x3E8u);
LABEL_20:
          if ( v11 == 1000 )
          {
            DbgPrintEx(0x93u, 3u, "XHCIDUMP: Port reset did not complete after %u retries and %u ms\n", 1000, 20000);
            goto LABEL_9;
          }
          PortStatus = 0;
          break;
        }
        KeStallExecutionProcessor(0x4E20u);
        if ( (unsigned int)++v11 >= 0x3E8 )
          goto LABEL_20;
      }
    }
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ResetPort: end 0x%X\n", PortStatus);
  return (unsigned int)PortStatus;
}
