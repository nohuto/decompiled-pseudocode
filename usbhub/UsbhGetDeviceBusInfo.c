__int64 __fastcall UsbhGetDeviceBusInfo(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // rbx
  _DWORD *v8; // r15
  __int64 v9; // r10
  void *v10; // r11
  _DWORD *v12; // rax
  int DeviceBusContext; // eax
  __int64 v14; // r14
  int v15; // edi
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r10
  void *v19; // r11
  void (__fastcall *v20)(__int64); // rax
  int v21; // r9d
  unsigned int v22; // r8d
  _DWORD *Pool2; // rbx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 (__fastcall *v26)(__int64, __int64, _DWORD *, unsigned int *, unsigned int *); // r10
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // [rsp+20h] [rbp-30h]
  unsigned int i; // [rsp+40h] [rbp-10h] BYREF
  __int64 v32; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+48h] BYREF

  v4 = a4;
  i = 0;
  v33 = 0;
  v32 = 0LL;
  v8 = FdoExt(a1);
  Log(a1, 8, 1734632041, (unsigned int)v4, (__int64)a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v4);
  if ( (unsigned int)v4 < 0x10 )
  {
    Log(a1, 8, 1734632005, v4, (__int64)a3);
    if ( WPP_RECORDER_INITIALIZED != v10 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 12, v9);
    }
    return 3221225507LL;
  }
  if ( !a2 )
  {
    Log(a1, 8, 1734631986, 0LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != v19 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 14, v18);
    v14 = *((_QWORD *)v8 + 570);
    v20 = (void (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 571);
    if ( v20 )
      v20(v14);
LABEL_20:
    Log(a1, 8, 1734631987, 0LL, 0LL);
    v22 = v21 + 16;
    for ( i = v21 + 16; ; v22 = i )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, v22, 1112885333LL);
      if ( !Pool2 )
        break;
      v24 = *(_QWORD *)(a1 + 64);
      v25 = 0;
      v33 = 0;
      v26 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, unsigned int *, unsigned int *))(v24 + 4608);
      if ( v26 )
      {
        v15 = v26(v14, 1LL, Pool2, &i, &v33);
        v25 = v33;
      }
      else
      {
        v15 = -1073741822;
      }
      Log(a1, 8, 1734631988, (__int64)Pool2, v25);
      if ( v15 != -1073741789 )
        goto LABEL_28;
      i = v33;
      Log(a1, 8, 1734631989, v33, -1073741789LL);
      ExFreePoolWithTag(Pool2, 0);
    }
    v15 = -1073741670;
LABEL_28:
    Usbh_UsbdInterfaceDereference(a1, v14);
    if ( Pool2 )
    {
      if ( v15 >= 0 )
      {
        a3[1] = *Pool2;
        a3[2] = Pool2[1];
        a3[3] = Pool2[2];
        Log(a1, 8, 1734629425, (unsigned int)*Pool2, (unsigned int)Pool2[1]);
        Log(a1, 8, 1734629426, (unsigned int)Pool2[2], 0LL);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_ddd(WPP_GLOBAL_Control->DeviceExtension, v27, v28, v29, v30, *Pool2, Pool2[1], Pool2[2]);
        }
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    goto LABEL_34;
  }
  v12 = PdoExt(a2);
  DeviceBusContext = Usbh_HubGetDeviceBusContext(a1, *((_QWORD *)v12 + 145), &v32);
  v14 = v32;
  v15 = DeviceBusContext;
  Log(a1, 8, 1734631985, DeviceBusContext, v32);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      v17,
      13,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v15,
      v14);
  if ( v15 >= 0 )
    goto LABEL_20;
LABEL_34:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v15);
  return (unsigned int)v15;
}
