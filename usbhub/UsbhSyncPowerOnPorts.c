__int64 __fastcall UsbhSyncPowerOnPorts(__int64 a1)
{
  unsigned __int16 v2; // bx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r10d
  int v13; // edx
  int v14; // [rsp+20h] [rbp-88h]
  int v15; // [rsp+5Ch] [rbp-4Ch] BYREF
  __int64 v16; // [rsp+60h] [rbp-48h] BYREF
  int v17[2]; // [rsp+68h] [rbp-40h] BYREF
  __int16 v18; // [rsp+70h] [rbp-38h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  v2 = 1;
  LODWORD(v3) = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v4 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v4);
    if ( v2 > *(unsigned __int8 *)(v4 + 2938) )
      break;
    v16 = 0LL;
    LOWORD(v17[1]) = 0;
    v18 = 0;
    v15 = 0;
    HIWORD(v17[1]) = v2;
    v17[0] = 0;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v5 = 812675184;
      *(_QWORD *)(v5 + 16) = v2;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 24) = 0LL;
    }
    HIWORD(v16) = v17[1];
    LODWORD(v16) = 525091;
    LOBYTE(v18) = 3;
    WORD2(v16) = v2;
    v3 = (int)UsbhSyncSendCommand(a1, (__int64)&v16, 0LL, &v17[1], v14, &v15);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        v8 = v15;
        *(_DWORD *)v7 = 829452400;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = v3;
        *(_QWORD *)(v7 + 24) = v8;
      }
    }
    if ( (unsigned int)v3 >> 30 == 3 && !(unsigned __int8)Usb_Disconnected((unsigned int)v3) )
      UsbhException(a1, v2, 12, (int)v17, 10, v3, v13, usbfile_hub_c, 3524, 0);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1349808752;
        *(_QWORD *)(v10 + 24) = v2;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v3;
      }
    }
    if ( (unsigned int)v3 >> 30 == 3 )
      break;
    ++v2;
  }
  if ( (int)v3 >= 0 )
  {
    Log(a1, 8, 2002872692, HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next), 0LL);
    UsbhRawWait(v11);
  }
  Log(a1, 8, 1934643031, (int)v3, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v3);
  return (unsigned int)v3;
}
