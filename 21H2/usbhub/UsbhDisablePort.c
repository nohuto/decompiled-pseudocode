/*
 * XREFs of UsbhDisablePort @ 0x1C0036D8C
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhCancelResetTimeout @ 0x1C000DCF0 (UsbhCancelResetTimeout.c)
 *     UsbhBusPnpStop_Action @ 0x1C0030B18 (UsbhBusPnpStop_Action.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00345D4 (UsbhQueueSoftConnectChange.c)
 *     UsbhFinishStart @ 0x1C0036EB4 (UsbhFinishStart.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003A7CC (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x1C0041FF0 (UsbhDriverNotFoundWorker.c)
 *     UsbhPortConnect @ 0x1C004C820 (UsbhPortConnect.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C004DA10 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C004DFD0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0019810 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C0028F5C (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 */

char __fastcall UsbhDisablePort(__int64 a1, __int64 a2)
{
  int v3; // edi
  int v4; // edx
  char result; // al
  int v6; // edx
  int v7; // [rsp+20h] [rbp-48h]
  __int16 v8; // [rsp+78h] [rbp+10h] BYREF
  int v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF
  __int16 v11; // [rsp+8Ch] [rbp+24h]
  __int16 v12; // [rsp+8Eh] [rbp+26h]

  v11 = *(_WORD *)(a2 + 4);
  v9 = 0;
  v8 = 0;
  v10 = 65827;
  v3 = a1;
  v12 = 0;
  v4 = UsbhSyncSendCommand(a1, (__int64)&v10, 0LL, &v8, v7, &v9);
  result = 0;
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    result = Usb_Disconnected(v4);
    if ( !result )
      return UsbhException(v3, *(unsigned __int16 *)(a2 + 4), 20, 0, 0, v6, v9, usbfile_bus_c, 2257, 0);
  }
  return result;
}
