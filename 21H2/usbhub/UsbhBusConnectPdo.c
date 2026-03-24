/*
 * XREFs of UsbhBusConnectPdo @ 0x1C0017E8C
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhSetEnumerationFailed @ 0x1C004F4D8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C001518C (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0017FEC (UsbhSignalDriverResetEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002F39C (WPP_RECORDER_SF_dq.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0036FD4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhBusIoInvalidateDeviceRelations @ 0x1C00371C0 (UsbhBusIoInvalidateDeviceRelations.c)
 *     WPP_RECORDER_SF_S @ 0x1C003C0E0 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_c @ 0x1C003C204 (WPP_RECORDER_SF_c.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005C4B8 (UsbhEtwLogDeviceInformation.c)
 */

void __fastcall UsbhBusConnectPdo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r15
  __int64 v6; // rbx
  _DWORD *v7; // r13
  _DWORD *v8; // rsi
  int v9; // edx
  int v10; // r8d
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  int v13; // edx
  int v14; // r8d
  KIRQL v15; // dl

  v2 = *(_QWORD *)(a2 + 376);
  *(_BYTE *)(v2 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(v2 + 136) = 1;
  *(_DWORD *)(v2 + 88) = 2018460752;
  *(_DWORD *)(v2 + 92) = 2;
  qword_1C006C500 = v2;
  *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
  v5 = *(_QWORD *)(a2 + 392);
  if ( !v5 )
  {
    *(_DWORD *)(v2 + 136) = 0;
    qword_1C006C500 = 0LL;
    v15 = *(_BYTE *)(v2 + 132);
    *(_DWORD *)(v2 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v15);
    return;
  }
  v6 = (int)PdoExt(*(_QWORD *)(a2 + 392))[281];
  v7 = FdoExt(a1);
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 1);
  v8 = PdoExt(v5);
  Log(a1, 4, 1919248208, v5, v6);
  if ( (_DWORD)v6 != 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 42, (__int64)"FKh&", *((_WORD *)v8 + 714), v5);
    v11 = (_QWORD *)*((_QWORD *)v7 + 602);
    v12 = v8 + 330;
    if ( (_DWORD *)*v11 != v7 + 1202 )
      __fastfail(3u);
    *((_QWORD *)v8 + 166) = v11;
    *v12 = v7 + 1202;
    *v11 = v12;
    *((_QWORD *)v7 + 602) = v12;
    LOBYTE(v12) = 1;
    UsbhEtwLogDeviceInformation(v8, &USBHUB_ETW_EVENT_DEVICE_ADD, v12);
    SET_PDO_HWPNPSTATE(v5, 2LL, 2LL);
    v7[226] = 1;
    *(_DWORD *)(v2 + 136) = 0;
    qword_1C006C500 = 0LL;
    *(_DWORD *)(v2 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(v2 + 132));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 43, (__int64)"FKh&");
    if ( (v8[355] & 0x100) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 44, (__int64)"FKh&");
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 45, (__int64)"FKh&");
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 46, (__int64)"FKh&", *((_BYTE *)v8 + 1400));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_c(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 47, (__int64)"FKh&", *((_BYTE *)v8 + 1401));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 48, (__int64)"FKh&", *((_WORD *)v8 + 701));
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_c(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v13,
                  v14,
                  49,
                  (__int64)"FKh&",
                  *((_BYTE *)v8 + 1168));
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    50,
                    (__int64)"FKh&",
                    *((_BYTE *)v8 + 1404));
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      0,
                      1,
                      51,
                      (__int64)"FKh&",
                      *((_BYTE *)v8 + 1405));
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1,
                        52,
                        (__int64)"FKh&",
                        *((_BYTE *)v8 + 1406));
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        WPP_RECORDER_SF_d(
                          WPP_GLOBAL_Control->DeviceExtension,
                          0,
                          1,
                          53,
                          (__int64)"FKh&",
                          *((_BYTE *)v8 + 1407));
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          WPP_RECORDER_SF_d(
                            WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            1,
                            54,
                            (__int64)"FKh&",
                            *((_WORD *)v8 + 704));
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                            WPP_RECORDER_SF_d(
                              WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1,
                              55,
                              (__int64)"FKh&",
                              *((_WORD *)v8 + 705));
                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                          {
                            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                              WPP_RECORDER_SF_d(
                                WPP_GLOBAL_Control->DeviceExtension,
                                0,
                                1,
                                56,
                                (__int64)"FKh&",
                                *((_WORD *)v8 + 706));
                            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                            {
                              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                WPP_RECORDER_SF_d(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  0,
                                  1,
                                  57,
                                  (__int64)"FKh&",
                                  *((_BYTE *)v8 + 1414));
                              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                              {
                                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                  WPP_RECORDER_SF_d(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    0,
                                    1,
                                    58,
                                    (__int64)"FKh&",
                                    *((_BYTE *)v8 + 1415));
                                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                {
                                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                    WPP_RECORDER_SF_d(
                                      WPP_GLOBAL_Control->DeviceExtension,
                                      0,
                                      1,
                                      59,
                                      (__int64)"FKh&",
                                      *((_BYTE *)v8 + 1416));
                                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                                    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                  {
                                    WPP_RECORDER_SF_d(
                                      WPP_GLOBAL_Control->DeviceExtension,
                                      0,
                                      1,
                                      60,
                                      (__int64)"FKh&",
                                      *((_BYTE *)v8 + 1417));
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    if ( *((_QWORD *)v8 + 261)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 61, (__int64)"FKh&", *((_QWORD *)v8 + 261));
    }
    if ( *((_QWORD *)v8 + 263)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 62, (__int64)"FKh&", *((_QWORD *)v8 + 263));
    }
    if ( *((_QWORD *)v8 + 265)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 63, (__int64)"FKh&", *((_QWORD *)v8 + 265));
    }
    if ( *((_QWORD *)v8 + 269)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 64, (__int64)"FKh&", *((_QWORD *)v8 + 269));
    }
    if ( *((_QWORD *)v8 + 267)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 65, (__int64)"FKh&", *((_QWORD *)v8 + 267));
    }
    if ( *((_QWORD *)v8 + 271) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_97:
        UsbhBusIoInvalidateDeviceRelations(a1, v2);
        return;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 66, (__int64)"FKh&", *((_QWORD *)v8 + 271));
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 67, (__int64)"FKh&");
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 68, (__int64)"FKh&");
    }
    goto LABEL_97;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a2 + 4),
        v10,
        41,
        (__int64)"FKh&",
        *(_WORD *)(a2 + 4),
        *(_QWORD *)(a2 + 392));
  }
  *(_DWORD *)(v2 + 136) = 0;
  qword_1C006C500 = 0LL;
  *(_DWORD *)(v2 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, *(_BYTE *)(v2 + 132));
  UsbhSignalSyncDeviceResetPdo(a1, v5, 0);
  UsbhSignalDriverResetEvent(a1, a2);
}
