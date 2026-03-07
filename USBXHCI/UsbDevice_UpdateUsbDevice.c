__int64 __fastcall UsbDevice_UpdateUsbDevice(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  int v12; // edx
  int v13; // r9d
  char v14; // cl
  _OWORD *v15; // rax
  _OWORD *v16; // rax
  __int64 v18; // [rsp+40h] [rbp-49h] BYREF
  __int128 v19; // [rsp+48h] [rbp-41h]
  __int64 v20; // [rsp+58h] [rbp-31h]
  int v21; // [rsp+60h] [rbp-29h]
  int v22; // [rsp+64h] [rbp-25h]
  _QWORD v23[10]; // [rsp+70h] [rbp-19h] BYREF

  if ( (*(_DWORD *)(a2 + 24) & 8) != 0 && *(_BYTE *)(a2 + 52) )
    *(_BYTE *)(a1 + 136) = 1;
  if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)v4;
    *(_WORD *)(a1 + 132) = *(_WORD *)(v4 + 16);
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 568) = *(_BYTE *)(a2 + 60) & 1;
    RootHub_Update20HardwareLpmParameters(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned int *)(a2 + 60),
      *(unsigned __int8 *)(a1 + 135));
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x40) != 0 )
  {
    RootHub_SetPortResumeTime(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned __int16 *)(a2 + 64));
    *(_BYTE *)(a1 + 569) = 1;
  }
  if ( (unsigned int)Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage()
    && (*(_DWORD *)(a2 + 24) & 0x80u) != 0 )
  {
    *(_BYTE *)(a2 + 66) = RootHub_IsDeviceNative(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL), *(unsigned int *)(a1 + 44));
  }
  memset(v23, 0, 0x48uLL);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 664) + 8LL);
  v9 = *(_QWORD *)(v8 + 112);
  if ( *(_BYTE *)(a1 + 657) )
  {
    if ( !v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    v10 = *(_QWORD *)(a1 + 608);
    v18 = 0LL;
    v22 = 0;
    v20 = v10;
    v21 = 45;
    v19 = 0LL;
    v11 = SecureChannel_SendRequestSynchronously(v9, &v18, 40LL, v23, 72);
    if ( v11 >= 0 )
    {
      LOBYTE(v11) = v23[0];
      if ( SLODWORD(v23[0]) < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return Etw_DeviceUpdate(0LL, a1);
        v13 = 15;
        goto LABEL_22;
      }
      v14 = BYTE6(v23[0]);
      *(_WORD *)(a1 + 672) = WORD2(v23[0]);
      *(_BYTE *)(a1 + 688) = HIBYTE(v23[4]);
      *(_BYTE *)(a1 + 674) = v14;
      if ( v14 )
      {
        if ( !*(_QWORD *)(a1 + 680) )
          *(_QWORD *)(a1 + 680) = ExAllocatePool2(64LL, 32LL, 1229146200LL);
        v15 = *(_OWORD **)(a1 + 680);
        if ( v15 )
        {
          *v15 = *(_OWORD *)((char *)v23 + 7);
          v15[1] = *(_OWORD *)((char *)&v23[2] + 7);
        }
      }
      if ( *(_BYTE *)(a1 + 674) )
      {
        if ( !*(_QWORD *)(a1 + 696) )
          *(_QWORD *)(a1 + 696) = ExAllocatePool2(64LL, 32LL, 1229146200LL);
        v16 = *(_OWORD **)(a1 + 696);
        if ( v16 )
        {
          *v16 = *(_OWORD *)&v23[5];
          v16[1] = *(_OWORD *)&v23[7];
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 14;
LABEL_22:
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v8 + 72),
        v12,
        12,
        v13,
        (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
        v11);
    }
  }
  return Etw_DeviceUpdate(0LL, a1);
}
