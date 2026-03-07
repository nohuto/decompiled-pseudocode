__int64 Usbh_PCE_QueueDriverReset_Action(__int64 a1, __int64 a2, char a3, ...)
{
  int v3; // ebx
  int v7; // eax
  __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // r10d
  int v11; // r8d
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  int v18; // eax
  KIRQL v19; // dl
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 result; // rax
  int v23; // edx
  int v24; // r8d
  int v25; // edx
  char v26; // r10
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-20h]
  KIRQL NewIrql; // [rsp+88h] [rbp+48h] BYREF
  __int64 v31; // [rsp+98h] [rbp+58h] BYREF
  va_list va; // [rsp+98h] [rbp+58h]
  __int64 v33; // [rsp+A0h] [rbp+60h]
  __int64 v34; // [rsp+A8h] [rbp+68h]
  va_list va1; // [rsp+B0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v34 = va_arg(va1, _QWORD);
  v3 = v31;
  NewIrql = 0;
  FdoExt(a1);
  v7 = UsbhLockPcqWithTag(a1, a2, 15, (unsigned int)&NewIrql, v3);
  v8 = v7;
  if ( !*(_BYTE *)(a2 + 2839) && !*(_BYTE *)(a2 + 2840) && (unsigned int)(*(_DWORD *)(a2 + 400) - 1) > 1 )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    Log(a1, 512, 825585712, v7, v9);
    Log(a1, v10, 825585713, a2, *(unsigned __int16 *)(a2 + 4));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v11,
        27,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4),
        a3);
    Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1404) = 10;
    KeResetEvent((PRKEVENT)(a2 + 824));
    if ( (int)v8 > 10 )
    {
      if ( (_DWORD)v8 == 11 || (_DWORD)v8 == 12 || (_DWORD)v8 == 13 )
        goto LABEL_52;
      if ( (_DWORD)v8 != 14 )
      {
        if ( (_DWORD)v8 == 15 || (_DWORD)v8 == 16 || (_DWORD)v8 == 17 || (_DWORD)v8 == 18 )
          goto LABEL_52;
        v13 = (_DWORD)v8 == 20;
        goto LABEL_45;
      }
    }
    else
    {
      switch ( (_DWORD)v8 )
      {
        case 0xA:
        case 1:
          goto LABEL_52;
        case 2:
          Log(a1, 512, 825585714, v8, *(unsigned __int16 *)(a2 + 4));
          v16 = v34;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, v9, (__int64 *)va, v33, v34) >= 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                28,
                (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
                v9);
            }
            Log(a1, 8, 825585715, a2, v9);
            v17 = *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 4;
            *(_DWORD *)(32 * v17 + a2 + 1384) = 4;
            Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
            v18 = *(_DWORD *)(a2 + 12);
            v19 = NewIrql;
            v20 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 448) = 0;
            *(_DWORD *)(v20 + a2 + 1384) = v18;
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v19);
            result = UsbhHubQueueProcessChangeWorker(v21, a2);
            goto LABEL_55;
          }
          Log(a1, 8, 825585716, a2, v9);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              v25,
              1,
              29,
              (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
              v9,
              v26);
          }
LABEL_33:
          UsbhSignalSyncDeviceResetPdo(a1, v16, -1073741823);
          if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
            UsbhSetPcqEventStatus(a1, a2, 3LL);
          goto LABEL_54;
        case 3:
          Log(a1, 8, 825585718, a2, v9);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              31,
              (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
              v9);
          }
          v14 = v34;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, v9, (__int64 *)va, v33, v34) < 0 )
          {
            UsbhSignalSyncDeviceResetPdo(a1, v14, -1073741823);
            if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
              UsbhSetPcqEventStatus(a1, a2, 3LL);
          }
          v15 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 14;
          *(_DWORD *)(v15 + a2 + 1384) = 14;
          goto LABEL_54;
      }
      if ( (_DWORD)v8 != 4 )
      {
        if ( (_DWORD)v8 == 5 || (_DWORD)v8 == 6 || (_DWORD)v8 == 7 || (_DWORD)v8 == 8 )
          goto LABEL_52;
        v13 = (_DWORD)v8 == 9;
LABEL_45:
        if ( !v13 )
        {
          v27 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v27 + a2 + 1384) = 19;
LABEL_54:
          LOBYTE(v12) = NewIrql;
          result = UsbhUnlockPcqWithTag(a1, a2, v12, 0LL);
LABEL_55:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              return WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v23, v24, 32, v29, v9, v8);
          }
          return result;
        }
LABEL_52:
        Log(a1, 512, 825585713, v8, *(unsigned __int16 *)(a2 + 4));
        UsbhSignalSyncDeviceResetPdo(a1, v34, -1073741823);
        if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
          UsbhSetPcqEventStatus(a1, a2, 3LL);
        goto LABEL_54;
      }
    }
    Log(a1, 8, 825585717, a2, v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        30,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v9);
    v16 = v34;
    if ( (int)UsbhInsertQueuePortChangeObject(a1, v9, (__int64 *)va, v33, v34) >= 0 )
      goto LABEL_54;
    goto LABEL_33;
  }
  UsbhSignalSyncDeviceResetPdo(a1, v34, -1073741823);
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 3LL);
  LOBYTE(v28) = NewIrql;
  return UsbhUnlockPcqWithTag(a1, a2, v28, 0LL);
}
