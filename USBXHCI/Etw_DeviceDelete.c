/*
 * XREFs of Etw_DeviceDelete @ 0x1C004AAF0
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0048CB0 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1C004B0B8 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_DeviceDelete(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
             *(unsigned __int8 *)(a2 + 658),
             (unsigned int)&USBXHCI_ETW_EVENT_DEVICE_DELETE_V3,
             0,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             *(_QWORD *)(a2 + 24),
             *(_QWORD *)a2,
             *(_DWORD *)(a2 + 20),
             *(_DWORD *)(a2 + 36),
             a2 + 44,
             *(_BYTE *)(a2 + 135),
             *(_BYTE *)(a2 + 136) != 0,
             *(_DWORD *)(a2 + 140),
             *(_DWORD *)(a2 + 144));
  return result;
}
