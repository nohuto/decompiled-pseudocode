__int64 __fastcall UsbhSuspendPort(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  _DWORD *v4; // r13
  __int64 v5; // rdi
  int v7; // r10d
  int PortStatus; // eax
  int v9; // [rsp+20h] [rbp-40h]
  int v10; // [rsp+50h] [rbp-10h] BYREF
  __int16 v11; // [rsp+54h] [rbp-Ch]
  __int16 v12; // [rsp+56h] [rbp-Ah]
  __int16 v13; // [rsp+A8h] [rbp+48h] BYREF
  int v14; // [rsp+B0h] [rbp+50h] BYREF
  int v15; // [rsp+B8h] [rbp+58h] BYREF

  v2 = a2;
  v14 = 0;
  v13 = 0;
  v15 = 0;
  v4 = FdoExt(a1);
  Log(a1, 8, 1937076272, (unsigned int)v2, 0LL);
  v10 = 131875;
  v11 = v2;
  v12 = 0;
  v5 = (int)UsbhSyncSendCommand(a1, (__int64)&v10, 0LL, &v13, v9, &v14);
  Log(a1, 8, 1937076273, v5, v14);
  if ( (v5 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v5) )
    UsbhException(a1, (unsigned __int16)v2, 51, 0, 0, v5, v7, usbfile_hub_c, 3663, 0);
  Log(a1, 8, 1937077072, v5, v2);
  if ( (v4[641] & 2) != 0 )
  {
    PortStatus = UsbhGetPortStatus(a1, (unsigned __int16)v2, &v15, &v14);
    Log(a1, 8, 1937076307, PortStatus, v14);
  }
  return (unsigned int)v5;
}
