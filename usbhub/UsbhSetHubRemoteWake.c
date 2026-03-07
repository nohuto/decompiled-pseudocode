__int64 __fastcall UsbhSetHubRemoteWake(__int64 a1, char a2)
{
  _DWORD *v4; // rax
  int v5; // r10d
  __int64 v6; // rbx
  int v7; // r10d
  int v9; // [rsp+20h] [rbp-48h]
  __int16 v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  char v12; // [rsp+88h] [rbp+20h] BYREF
  char v13; // [rsp+89h] [rbp+21h]
  int v14; // [rsp+8Ah] [rbp+22h]
  __int16 v15; // [rsp+8Eh] [rbp+26h]

  v11 = 0;
  v10 = 0;
  v4 = FdoExt(a1);
  v12 = 0;
  v13 = a2 != 0 ? 3 : 1;
  Log(a1, 8, 1400332651, (unsigned int)v4[344], 0LL);
  v14 = v5;
  v15 = 0;
  v6 = (int)UsbhSyncSendCommand(a1, (__int64)&v12, 0LL, &v10, v9, &v11);
  Log(a1, 8, 1937206065, v6, v11);
  if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
    UsbhException(a1, 0, 123, 0, 0, v6, v7, usbfile_hub_c, 3746, 0);
  Log(a1, 8, 1937206066, v6, 0LL);
  return (unsigned int)v6;
}
