__int64 __fastcall UsbhSetPortPower(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  int v5; // r10d
  int v7; // [rsp+20h] [rbp-60h]
  int v8; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+58h] [rbp-28h] BYREF
  __int16 v10; // [rsp+5Ch] [rbp-24h]
  __int16 v11; // [rsp+5Eh] [rbp-22h]
  _WORD v12[4]; // [rsp+60h] [rbp-20h] BYREF
  char v13; // [rsp+68h] [rbp-18h]
  char v14; // [rsp+69h] [rbp-17h]

  v2 = a2;
  v14 = 0;
  v8 = 0;
  FdoExt(a1);
  *(_DWORD *)&v12[1] = 0;
  v12[3] = v2;
  v12[0] = 0;
  Log(a1, 8, 1886416944, (unsigned int)v2, 0LL);
  v11 = 0;
  v9 = 525091;
  v13 = 3;
  v10 = v2;
  v4 = (int)UsbhSyncSendCommand(a1, (__int64)&v9, 0LL, &v12[2], v7, &v8);
  Log(a1, 8, 1886416945, v4, v8);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v4) )
    UsbhException(a1, (unsigned __int16)v2, 12, (int)v12, 10, v4, v5, usbfile_hub_c, 3524, 0);
  Log(a1, 8, 1886549072, v4, v2);
  return (unsigned int)v4;
}
