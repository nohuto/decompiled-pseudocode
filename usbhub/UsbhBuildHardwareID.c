__int64 __fastcall UsbhBuildHardwareID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // r13
  int v9; // eax
  int v10; // r8d
  int v11; // r10d
  __int64 v12; // r12
  int v13; // r13d
  __int16 v14; // r10
  __int64 Id; // rax
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // r8d
  char v23; // dl
  unsigned int v24; // ebp
  __int64 Pool2; // rax
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r10
  unsigned int v30; // r10d
  __int16 v31; // [rsp+78h] [rbp+10h]
  int v32; // [rsp+88h] [rbp+20h] BYREF

  v32 = 0;
  if ( a2 )
  {
    v8 = PdoExt(a2);
    if ( (v8[355] & 0x10004) == 0x10000 )
    {
      v9 = UsbhBuildUxdPnpId(v6, a2, a3);
      if ( v9 >= 0 )
      {
        Log(a1, 4096, 1752651096, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_Sqd(
              WPP_GLOBAL_Control->DeviceExtension,
              *(_QWORD *)(a3 + 8),
              v10,
              14,
              (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
              *(_QWORD *)(a3 + 8),
              *(_QWORD *)(a3 + 8),
              *(_DWORD *)(a3 + 4));
        }
        return 0LL;
      }
      Log(a1, 4096, 1752651845, 0LL, v9);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xFu,
          (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids);
    }
    v11 = *((unsigned __int16 *)v8 + 704);
    v12 = *((unsigned __int16 *)v8 + 705);
    v13 = *((unsigned __int16 *)v8 + 706);
    v31 = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dDD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0LL,
        v7,
        0x10u,
        (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
        v11,
        v12,
        v13);
      LOWORD(v11) = v31;
    }
    Log(a1, 4096, 1752648004, (unsigned __int16)v11, v12);
    Id = UsbhMakeId(0, (int)L"USB\\VID_nnnn", 0, (int)&v32, 0, 4, v14, 0LL);
    if ( Id )
    {
      v18 = UsbhMakeId(0, (int)L"&PID_nnnn", Id, (int)&v32, 0, 4, v12, 0LL);
      if ( v18 )
      {
        v19 = UsbhMakeId(1, (int)L"&REV_nnnn", v18, (int)&v32, 1, 4, v13, 0LL);
        v20 = UsbhMakeId(0, (int)L"USB\\VID_nnnn", v19, (int)&v32, 0, 4, v31, 0LL);
        if ( v20 )
        {
          v21 = UsbhMakeId(0, (int)L"&PID_nnnn", v20, (int)&v32, 2, 4, v12, 0LL);
          if ( v21 )
          {
            v23 = v32;
            *(_DWORD *)(a3 + 4) = v32;
            *(_QWORD *)(a3 + 8) = v21;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_Sd(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                v22,
                18,
                (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
                v21,
                v23);
            }
            return 0LL;
          }
          v16 = a2;
          v17 = 1751725089;
        }
        else
        {
          v16 = a2;
          v17 = 1751725345;
        }
      }
      else
      {
        v16 = a2;
        v17 = 1751724321;
      }
    }
    else
    {
      v16 = a2;
      v17 = 1751724577;
    }
  }
  else
  {
    v24 = 26;
    Pool2 = ExAllocatePool2(64LL, 26LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = *(_OWORD *)L"USB\\UNKNOWN";
      *(_DWORD *)(Pool2 + 16) = *(_DWORD *)L"OWN";
      *(_WORD *)(Pool2 + 20) = *(_WORD *)L"N";
    }
    else
    {
      v24 = 0;
    }
    if ( Pool2 )
    {
      *(_QWORD *)(a3 + 8) = Pool2;
      *(_DWORD *)(a3 + 4) = v24;
      Log(a1, 4096, 1751733537, Pool2, v24);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sqd(
          WPP_GLOBAL_Control->DeviceExtension,
          v26,
          v27,
          17,
          (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
          v28,
          v28,
          v24);
      return 0LL;
    }
    v16 = 0LL;
    v17 = 1751724833;
  }
  Log(a1, 4096, v17, v16, -1073741670LL);
  return v30;
}
