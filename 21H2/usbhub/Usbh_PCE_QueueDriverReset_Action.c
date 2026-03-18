/*
 * XREFs of Usbh_PCE_QueueDriverReset_Action @ 0x1C000CF9C
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000F168 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C00128D0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhLockPcqWithTag @ 0x1C001D1A0 (UsbhLockPcqWithTag.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C001E030 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1C001F098 (UsbhHubQueueProcessChangeWorker.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002DDB8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002DFC0 (WPP_RECORDER_SF_dq.c)
 *     UsbhSetPcqEventStatus @ 0x1C00348C0 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0034A70 (UsbhUnlockPcqWithTag.c)
 *     WPP_RECORDER_SF_dc @ 0x1C0035C4C (WPP_RECORDER_SF_dc.c)
 */

__int64 Usbh_PCE_QueueDriverReset_Action(__int64 a1, __int64 a2, char a3, ...)
{
  int v3; // ebx
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // r10d
  int v11; // r8d
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // eax
  KIRQL v16; // dl
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 result; // rax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // edx
  char v25; // r10
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-20h]
  KIRQL NewIrql; // [rsp+88h] [rbp+48h] BYREF
  __int64 v30; // [rsp+98h] [rbp+58h] BYREF
  va_list va; // [rsp+98h] [rbp+58h]
  __int64 v32; // [rsp+A0h] [rbp+60h]
  __int64 v33; // [rsp+A8h] [rbp+68h]
  va_list va1; // [rsp+B0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v30 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v3 = v30;
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
    if ( (int)v8 > 13 )
    {
      if ( (_DWORD)v8 == 14 )
        goto LABEL_21;
      if ( (int)v8 > 18 && (_DWORD)v8 != 20 )
      {
LABEL_43:
        v26 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v26 + a2 + 1384) = 19;
LABEL_44:
        LOBYTE(v12) = NewIrql;
        result = UsbhUnlockPcqWithTag(a1, a2, v12, 0LL);
LABEL_16:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            return WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v20, v21, 32, v28, v9, v8);
        }
        return result;
      }
    }
    else if ( (int)v8 < 5 && (_DWORD)v8 != 1 )
    {
      switch ( (_DWORD)v8 )
      {
        case 2:
          Log(a1, 512, 825585714, v8, *(unsigned __int16 *)(a2 + 4));
          v13 = v33;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v32, v33) >= 0 )
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
            v14 = *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 4;
            *(_DWORD *)(32 * v14 + a2 + 1384) = 4;
            Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
            v15 = *(_DWORD *)(a2 + 12);
            v16 = NewIrql;
            v17 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 448) = 0;
            *(_DWORD *)(v17 + a2 + 1384) = v15;
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v16);
            result = UsbhHubQueueProcessChangeWorker(v18, a2);
            goto LABEL_16;
          }
          Log(a1, 8, 825585716, a2, v9);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              v24,
              1,
              29,
              (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
              v9,
              v25);
          }
LABEL_25:
          UsbhSignalSyncDeviceResetPdo(a1, v13, 3221225473LL);
          if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
            UsbhSetPcqEventStatus(a1, a2, 3LL);
          goto LABEL_44;
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
          v22 = v33;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v32, v33) < 0 )
          {
            UsbhSignalSyncDeviceResetPdo(a1, v22, 3221225473LL);
            if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
              UsbhSetPcqEventStatus(a1, a2, 3LL);
          }
          v23 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 14;
          *(_DWORD *)(v23 + a2 + 1384) = 14;
          goto LABEL_44;
        case 4:
LABEL_21:
          Log(a1, 8, 825585717, a2, v9);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              30,
              (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
              v9);
          }
          v13 = v33;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v32, v33) >= 0 )
            goto LABEL_44;
          goto LABEL_25;
      }
      goto LABEL_43;
    }
    Log(a1, 512, 825585713, v8, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalSyncDeviceResetPdo(a1, v33, 3221225473LL);
    if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
      UsbhSetPcqEventStatus(a1, a2, 3LL);
    goto LABEL_44;
  }
  UsbhSignalSyncDeviceResetPdo(a1, v33, 3221225473LL);
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 3LL);
  LOBYTE(v27) = NewIrql;
  return UsbhUnlockPcqWithTag(a1, a2, v27, 0LL);
}
