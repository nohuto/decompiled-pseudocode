/*
 * XREFs of UsbhDisablePort @ 0x1C0038040
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhCancelResetTimeout @ 0x1C0013AE0 (UsbhCancelResetTimeout.c)
 *     UsbhBusPnpStop_Action @ 0x1C0031EC0 (UsbhBusPnpStop_Action.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0035938 (UsbhQueueSoftConnectChange.c)
 *     UsbhFinishStart @ 0x1C0038168 (UsbhFinishStart.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003BADC (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x1C00432A0 (UsbhDriverNotFoundWorker.c)
 *     UsbhPortConnect @ 0x1C004DC30 (UsbhPortConnect.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C004EE20 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C004F3E0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C004F4D8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

char __fastcall UsbhDisablePort(__int64 a1, __int64 a2)
{
  int v3; // edi
  int v4; // edx
  char result; // al
  int v6; // edx
  int v7; // [rsp+20h] [rbp-48h]
  int v8; // [rsp+48h] [rbp-20h]
  __int16 v9; // [rsp+78h] [rbp+10h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF
  __int16 v12; // [rsp+8Ch] [rbp+24h]
  __int16 v13; // [rsp+8Eh] [rbp+26h]

  v12 = *(_WORD *)(a2 + 4);
  v10 = 0;
  v9 = 0;
  v11 = 65827;
  v3 = a1;
  v13 = 0;
  v4 = UsbhSyncSendCommand(a1, (__int64)&v11, 0LL, &v9, v7, &v10);
  result = 0;
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    result = Usb_Disconnected(v4);
    if ( !result )
    {
      LOBYTE(v8) = 0;
      return UsbhException(v3, *(unsigned __int16 *)(a2 + 4), 20, 0, 0, v6, v10, usbfile_bus_c, 2257, v8);
    }
  }
  return result;
}
