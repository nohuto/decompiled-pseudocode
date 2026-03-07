__int64 __fastcall UsbhSendMsOs20AltEnumCommand(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rsi
  char v7; // r8
  __int64 v8; // rcx
  int v9; // r10d
  _BYTE v11[4]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+44h] [rbp-24h]
  __int16 v13; // [rsp+80h] [rbp+18h] BYREF

  v6 = PdoExt(a2);
  v7 = *(_BYTE *)(a3 + 7);
  v11[1] = *(_BYTE *)(a3 + 6);
  v8 = *((_QWORD *)v6 + 148);
  v11[3] = v7;
  v11[0] = 64;
  v11[2] = 0;
  v12 = 8;
  v13 = 0;
  v9 = UsbhSyncSendCommandToDevice(v8, a2, v11, 0LL, &v13);
  if ( v9 >= 0 )
    v6[355] |= 0x40000000u;
  else
    Log(a1, 4, 1095053873, 0LL, 0LL);
  return (unsigned int)v9;
}
