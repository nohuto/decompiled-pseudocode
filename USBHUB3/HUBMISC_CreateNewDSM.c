/*
 * XREFs of HUBMISC_CreateNewDSM @ 0x1C0031308
 * Callers:
 *     HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1C0011C10 (HUBPSM30_CreatingDeviceInConnectedWithResetInProgress.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001CA0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00154F0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateNewDSM(__int64 *a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // r13d
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // r12
  int v11; // eax
  unsigned __int16 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 Timer; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // [rsp+28h] [rbp-49h]
  __int64 v25; // [rsp+30h] [rbp-41h]
  __int128 v26; // [rsp+48h] [rbp-29h] BYREF
  __int128 v27; // [rsp+58h] [rbp-19h]
  __int64 v28; // [rsp+68h] [rbp-9h]
  __int128 v29; // [rsp+70h] [rbp-1h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+80h] [rbp+Fh]
  __int64 v31; // [rsp+88h] [rbp+17h]
  __int128 v32; // [rsp+90h] [rbp+1Fh]
  void *v33; // [rsp+A0h] [rbp+2Fh]
  __int64 v34; // [rsp+E0h] [rbp+6Fh] BYREF

  HIDWORD(v31) = 1;
  v34 = 0LL;
  v29 = 0x38uLL;
  *((_QWORD *)&v32 + 1) = 0LL;
  v2 = 0LL;
  LODWORD(v28) = 0;
  v3 = -1073741823;
  v33 = off_1C006A0D0;
  v26 = 0LL;
  v27 = 0LL;
  *(_QWORD *)&v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      a1);
  LODWORD(v31) = 2;
  v30 = HUBMISC_EvtDsmDestroy;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         &v29,
         &v34);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a1[179], 2u, 4u, 0x2Eu, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids, v4);
    v34 = 0LL;
    goto LABEL_33;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v6,
    "DSM Create Tag",
    6922LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v34,
         off_1C006A0D0);
  memset((void *)v2, 0, 0xAA8uLL);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C006A1E8)
                  + 4) & 0x1000) != 0 )
    v3 = EtwActivityIdControl(3u, (LPGUID)(v2 + 1516));
  *(_QWORD *)(v2 + 8) = a1;
  v7 = *a1;
  *(_WORD *)(v2 + 2712) = 0;
  *(_QWORD *)v2 = v7;
  *(_DWORD *)(v2 + 2716) = 259;
  *(_DWORD *)(v2 + 2720) = 0x40000000;
  v8 = *((unsigned int *)a1 + 51);
  if ( (v8 & 1) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1632), 0xFFFFFFDF);
  else
    _InterlockedOr((volatile signed __int32 *)(v2 + 1632), 0x20u);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
  {
    LODWORD(v24) = *((unsigned __int16 *)a1 + 100);
    McTemplateK0pq_EtwWriteTransfer(
      v8,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_START,
      (const GUID *)(v2 + 1516),
      *(_QWORD *)(*(_QWORD *)v2 + 248LL),
      v24);
  }
  v33 = 0LL;
  v30 = 0LL;
  v31 = 0x100000001LL;
  v29 = 0LL;
  LODWORD(v29) = 56;
  v32 = 0LL;
  *(_QWORD *)&v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(*a1 + 16));
  v10 = (_QWORD *)(v2 + 248);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v29,
          v9,
          v2 + 248);
  v5 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_16:
      *v10 = 0LL;
LABEL_33:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = v5;
        WPP_RECORDER_SF_d(a1[179], 2u, 4u, 0x35u, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids, v25);
      }
      if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      {
        LODWORD(v24) = v5;
        McTemplateK0pq_EtwWriteTransfer(
          v2 + 1516,
          &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
          (const GUID *)((v2 + 1516) & -(__int64)(v2 != 0)),
          *(_QWORD *)(*a1 + 248),
          v24);
      }
      v20 = 3009;
      if ( v2 )
      {
        if ( *(_QWORD *)(v2 + 248) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 248),
            "DSM Tag",
            7355LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 248) = 0LL;
        }
        v21 = *(_QWORD *)(v2 + 416);
        if ( v21 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 416),
            "DSM Tag",
            7355LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 416) = 0LL;
        }
        v22 = *(_QWORD *)(v2 + 1544);
        if ( v22 )
        {
          LOBYTE(v21) = 1;
          ExDeleteTimer(v22, v21, 0LL, 0LL);
          *(_QWORD *)(v2 + 1544) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 2416) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 2416),
            "DSM Tag",
            7355LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 2416) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 432) )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 432),
            "DSM Tag",
            7355LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
          *(_QWORD *)(v2 + 432) = 0LL;
        }
        if ( *(_QWORD *)(v2 + 1496) )
        {
          (*(void (**)(void))(*(_QWORD *)v2 + 504LL))();
          *(_QWORD *)(v2 + 1496) = 0LL;
        }
        if ( v34 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      }
      return v20;
    }
    v12 = 47;
LABEL_15:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      2u,
      5u,
      v12,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v11);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v10,
    "DSM Tag",
    6982LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 264) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v10);
  v33 = 0LL;
  v30 = 0LL;
  v31 = 0x100000001LL;
  v29 = 0LL;
  LODWORD(v29) = 56;
  v32 = 0LL;
  *(_QWORD *)&v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      a1);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(*a1 + 16));
  v10 = (_QWORD *)(v2 + 416);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          &v29,
          v13,
          v2 + 416);
  v5 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v12 = 48;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v10,
    "DSM Tag",
    7018LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 424) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v10);
  *(_WORD *)(v2 + 2040) = 1033;
  KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 1344));
  *(_DWORD *)(v2 + 1384) = 0;
  *(_DWORD *)(v2 + 1456) = 0;
  *(_DWORD *)(v2 + 1356) = 4000;
  *(_DWORD *)(v2 + 1488) = 4000;
  v14 = *(_QWORD *)v2;
  *(_QWORD *)(v2 + 1480) = &DSMStateTable;
  *(_QWORD *)(v2 + 1472) = HUBSM_AddDsmEvent;
  *(_QWORD *)(v2 + 1464) = v2;
  *(_QWORD *)(v2 + 1536) = *(_QWORD *)(v14 + 248);
  *(_QWORD *)(v2 + 1504) = v14;
  *(_QWORD *)(v2 + 2600) = v2 + 2608;
  *(_DWORD *)(v2 + 2592) = 288;
  Timer = ExAllocateTimer(HUBMISC_DsmEventTimer, v2, 4LL);
  *(_QWORD *)(v2 + 1544) = Timer;
  if ( Timer )
  {
    v33 = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    LODWORD(v29) = 56;
    v32 = 0LL;
    v31 = 0x100000001LL;
    v10 = (_QWORD *)(v2 + 2416);
    *(_QWORD *)&v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        a1);
    LODWORD(v31) = 2;
    v28 = 0LL;
    v27 = 0LL;
    LODWORD(v27) = 0;
    DWORD2(v27) = 0;
    *((_QWORD *)&v26 + 1) = HUBPDO_EvtOutOfBandwidthTimer;
    *(_QWORD *)&v26 = 40LL;
    BYTE4(v27) = 1;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01015 + 2544))(
            WdfDriverGlobals,
            &v26,
            &v29,
            v2 + 2416);
    v5 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v12 = 50;
      goto LABEL_15;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      *v10,
      "DSM Tag",
      7113LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    KeInitializeEvent((PRKEVENT)(v2 + 1584), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 1608), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 472), NotificationEvent, 0);
    v16 = *(_QWORD *)v2;
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v2 + 16LL));
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v16 + 496))(*(_QWORD *)(v16 + 248), v17, 1LL);
    *(_QWORD *)(v2 + 1496) = v18;
    if ( !v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
          2u,
          5u,
          0x33u,
          (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
      v5 = -1073741670;
      goto LABEL_33;
    }
    v33 = 0LL;
    v30 = 0LL;
    v31 = 0x100000001LL;
    v29 = 0LL;
    LODWORD(v29) = 56;
    v32 = 0LL;
    *(_QWORD *)&v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        a1);
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64, _QWORD))(WdfFunctions_01015 + 1536))(
            WdfDriverGlobals,
            &v29,
            (unsigned int)ExDefaultNonPagedPoolType,
            1681082453LL,
            96LL,
            v2 + 432,
            0LL);
    v5 = v19;
    if ( v19 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = v19;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
          2u,
          5u,
          0x34u,
          (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
          v25);
      }
      goto LABEL_33;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 432),
      "DSM Tag",
      7171LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 40));
    a1[166] = v2;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      2u,
      3u,
      0x31u,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
  }
  if ( v3 >= 0 )
  {
    if ( g_IoSetActivityIdIrp )
      g_IoSetActivityIdIrp(*(_QWORD *)(v2 + 264), v2 + 1516);
    if ( g_IoSetActivityIdIrp )
      g_IoSetActivityIdIrp(*(_QWORD *)(v2 + 424), v2 + 1516);
    _InterlockedOr((volatile signed __int32 *)(v2 + 1636), 0x40u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      4u,
      4u,
      0x36u,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      a1,
      v2);
  return 3013;
}
