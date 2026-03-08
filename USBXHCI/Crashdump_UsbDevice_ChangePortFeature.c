/*
 * XREFs of Crashdump_UsbDevice_ChangePortFeature @ 0x1C004FA68
 * Callers:
 *     Crashdump_UsbDevice_ResetPort @ 0x1C0050A40 (Crashdump_UsbDevice_ResetPort.c)
 *     Crashdump_UsbDevice_SetPortPower @ 0x1C0051068 (Crashdump_UsbDevice_SetPortPower.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C00510F8 (Crashdump_UsbDevice_SuspendPort.c)
 * Callees:
 *     Crashdump_Endpoint_SendControlTransfer @ 0x1C004F524 (Crashdump_Endpoint_SendControlTransfer.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ChangePortFeature(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  __int16 v5; // di
  unsigned __int16 v6; // si
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v6 = a2;
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Crashdump_UsbDevice_ChangePortFeature: begin: port: %u, feature: %u, request: %u\n",
    a2,
    a3,
    a4);
  v8 = *(_QWORD *)(a1 + 120);
  BYTE1(v11) = a4;
  LOBYTE(v11) = 35;
  WORD1(v11) = v5;
  HIDWORD(v11) = v6;
  v9 = Crashdump_Endpoint_SendControlTransfer(v8, &v11, 0, 0LL);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ChangePortFeature: end 0x%X\n", v9);
  return v9;
}
