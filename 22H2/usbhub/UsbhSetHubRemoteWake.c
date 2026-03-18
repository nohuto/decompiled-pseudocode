/*
 * XREFs of UsbhSetHubRemoteWake @ 0x1C002E394
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000F880 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C003C8B8 (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C003C90C (UsbhDisarmHubWakeOnConnect.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhSetHubRemoteWake(__int64 a1, char a2)
{
  _DWORD *v4; // rax
  int v5; // r10d
  __int64 v6; // rbx
  int v7; // r10d
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+48h] [rbp-20h]
  __int16 v11; // [rsp+78h] [rbp+10h] BYREF
  int v12; // [rsp+80h] [rbp+18h] BYREF
  char v13; // [rsp+88h] [rbp+20h] BYREF
  char v14; // [rsp+89h] [rbp+21h]
  int v15; // [rsp+8Ah] [rbp+22h]
  __int16 v16; // [rsp+8Eh] [rbp+26h]

  v12 = 0;
  v11 = 0;
  v4 = FdoExt(a1);
  v13 = 0;
  v14 = a2 != 0 ? 3 : 1;
  Log(a1, 8, 1400332651, (unsigned int)v4[344], 0LL);
  v15 = v5;
  v16 = 0;
  v6 = (int)UsbhSyncSendCommand(a1, (__int64)&v13, 0LL, &v11, v9, &v12);
  Log(a1, 8, 1937206065, v6, v12);
  if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
  {
    LOBYTE(v10) = 0;
    UsbhException(a1, 0, 123, 0, 0, v6, v7, usbfile_hub_c, 3746, v10);
  }
  Log(a1, 8, 1937206066, v6, 0LL);
  return (unsigned int)v6;
}
