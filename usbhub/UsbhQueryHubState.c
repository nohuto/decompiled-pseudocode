__int64 __fastcall UsbhQueryHubState(__int64 a1, __int64 a2, _DWORD *a3)
{
  _WORD *Pool2; // rax
  _WORD *v8; // rax
  int v9; // eax
  __int64 v10; // r15
  int v11; // edi
  unsigned __int16 *v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-40h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v17[2]; // [rsp+58h] [rbp-8h] BYREF
  int v18; // [rsp+5Ah] [rbp-6h]
  __int16 v19; // [rsp+5Eh] [rbp-2h]
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  v20 = 0;
  Pool2 = (_WORD *)ExAllocatePool2(64LL, 10LL, 1112885333LL);
  P = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = 4;
    v8 = P;
    *(_DWORD *)a2 = 0;
    v8[3] = 0;
    *((_WORD *)P + 1) = 0;
    *(_WORD *)P = 0;
    v17[0] = -96;
    *((_BYTE *)P + 8) = 0;
    v17[1] = 0;
    v18 = 0;
    v19 = *((_WORD *)P + 2);
    v9 = UsbhSyncSendCommand(a1, (__int64)v17, (__int64)P, (_WORD *)P + 2, v15, &v20);
    v10 = v20;
    v11 = v9;
    Log(a1, 4, 1365799796, v9, v20);
    v12 = (unsigned __int16 *)P;
    if ( v11 < 0 || *((_WORD *)P + 2) == 4 )
    {
      if ( (v11 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v11) )
      {
        Log(a1, 4, 1366324018, v12[2], v10);
        UsbhException(a1, 0, 8, (int)&P, 10, v11, v10, usbfile_bus_c, 1758, 0);
        v12 = (unsigned __int16 *)P;
      }
      if ( v11 >= 0 )
      {
        v13 = v12[1];
        *(_WORD *)(a2 + 2) = v13;
        v14 = *v12;
        *(_WORD *)a2 = v14;
        Log(a1, 4, 1215329140, v13, v14);
        v12 = (unsigned __int16 *)P;
      }
      if ( a3 )
        *a3 = v10;
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      return (unsigned int)v11;
    }
    else
    {
      Log(a1, 4, 1366324017, *((unsigned __int16 *)P + 2), v10);
      UsbhException(a1, 0, 9, (int)&P, 10, v11, v10, usbfile_bus_c, 1745, 0);
      if ( a3 )
        *a3 = v10;
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225473LL;
    }
  }
  else
  {
    Log(a1, 4, 1365795180, 0LL, 0LL);
    if ( a3 )
      *a3 = -1073737728;
    return 3221225626LL;
  }
}
