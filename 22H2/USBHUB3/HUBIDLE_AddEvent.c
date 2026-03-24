/*
 * XREFs of HUBIDLE_AddEvent @ 0x1C003BAF4
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C00162D0 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016F00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C00181C0 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C00183B0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C00187A0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBIDLE_AddEvent @ 0x1C003BAF4 (HUBIDLE_AddEvent.c)
 *     HUBIDLE_EvtIdleWorkItem @ 0x1C003BF90 (HUBIDLE_EvtIdleWorkItem.c)
 *     HUBIDLE_CancelIdle @ 0x1C003BFE0 (HUBIDLE_CancelIdle.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C00796D4 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006A7C (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C0009C84 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     HUBMISC_DbgBreak @ 0x1C002FC54 (HUBMISC_DbgBreak.c)
 *     HUBIDLE_AddEvent @ 0x1C003BAF4 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBIDLE_AddEvent(__int64 a1, int a2, IRP *a3)
{
  int v3; // ebx
  __int64 v5; // r13
  IRP *v6; // rbp
  unsigned int v9; // edi
  int v10; // r14d
  KIRQL v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64, IRP *); // rax
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v32; // [rsp+20h] [rbp-88h]
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+40h] [rbp-68h]
  KIRQL v37; // [rsp+51h] [rbp-57h]
  int v38; // [rsp+54h] [rbp-54h]
  GUID v39; // [rsp+58h] [rbp-50h] BYREF

  v3 = *(_DWORD *)(a1 + 160);
  v5 = *(_QWORD *)(a1 + 152);
  v6 = 0LL;
  v38 = v3;
  v39 = 0LL;
  v9 = 259;
  v10 = a2;
  v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 136));
  v11 = v37;
  if ( v10 != 1000 )
  {
    while ( 1 )
    {
      LODWORD(v12) = 0;
      v13 = (unsigned int)(*(_DWORD *)(a1 + 144) - v3);
      v14 = 1001;
      v15 = *(_QWORD *)(v5 + 8 * v13);
      v16 = *(_DWORD *)(v15 + 16);
      if ( v16 != 1000 )
      {
        v17 = 0LL;
        while ( v10 != v16 )
        {
          v12 = (unsigned int)(v12 + 1);
          v17 = (unsigned int)v12;
          v16 = *(_DWORD *)(v15 + 8 * v12 + 16);
          if ( v16 == 1000 )
            goto LABEL_8;
        }
        v14 = *(_DWORD *)(v15 + 8 * v17 + 20);
      }
LABEL_8:
      if ( v14 == 1000 )
        break;
      switch ( v14 )
      {
        case 1001:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v33) = a2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 48) + 8LL) + 1432LL),
              2u,
              5u,
              0xBu,
              (__int64)&WPP_2569be9ff7fd3488897cf7ed99434f3d_Traceguids,
              v33);
          }
          HUBMISC_DbgBreak("Unhandled Event in Idle State Machine");
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
          {
            LODWORD(v36) = 0;
            LODWORD(v35) = a2;
            LODWORD(v34) = *(_DWORD *)(a1 + 144);
            LODWORD(v33) = *(_DWORD *)(a1 + 160);
            McTemplateK0ppqqqq_EtwWriteTransfer(
              v20,
              &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT,
              0LL,
              0LL,
              0LL,
              v33,
              v34,
              v35,
              v36);
          }
          goto LABEL_30;
        case 1002:
          v9 = -2147483631;
          goto LABEL_20;
        case 1003:
          v9 = -1073741810;
LABEL_20:
          v6 = a3;
          goto LABEL_30;
      }
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128) + 4) = v14;
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128)) = v10;
      *(_BYTE *)(a1 + 128) = (*(_BYTE *)(a1 + 128) + 1) & 0xF;
      if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      {
        LODWORD(v36) = 0;
        v18 = (unsigned int)(v14 - *(_DWORD *)(a1 + 160));
        LODWORD(v35) = v10;
        LODWORD(v34) = **(_DWORD **)(*(_QWORD *)(a1 + 152) + 8 * v18);
        LODWORD(v33) = *(_DWORD *)(a1 + 160);
        McTemplateK0ppqqqq_EtwWriteTransfer(
          v18,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          0LL,
          *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
          a1,
          v33,
          v34,
          v35,
          v36);
      }
      *(_DWORD *)(a1 + 144) = v14;
      v19 = *(__int64 (__fastcall **)(__int64, IRP *))(*(_QWORD *)(v5 + 8LL * (unsigned int)(v14 - v38)) + 8LL);
      if ( v19 )
        v10 = v19(a1, a3);
      else
        v10 = 1000;
      if ( v10 == 1000 )
        goto LABEL_30;
      v3 = v38;
    }
    if ( a2 != v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 48) + 8LL) + 1432LL),
          2u,
          5u,
          0xAu,
          (__int64)&WPP_2569be9ff7fd3488897cf7ed99434f3d_Traceguids);
      HUBMISC_DbgBreak("Idle State Machine is ignoring a Sync Event");
    }
LABEL_30:
    v11 = v37;
  }
  v21 = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 176) = 0;
  if ( (unsigned int)(v21 - 1) <= 4 || v21 == 8 )
  {
    v6 = *(IRP **)(a1 + 168);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 136), v11);
  v23 = v21 - 1;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            v9 = 0;
            LOBYTE(v29) = 0;
            goto LABEL_56;
          }
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 == 1 )
              {
                v9 = -1073741536;
                goto LABEL_56;
              }
            }
            else
            {
              *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           *(_QWORD *)(a1 + 184),
                           off_1C0066290) = a1;
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
                WdfDriverGlobals,
                *(_QWORD *)(a1 + 184));
            }
          }
          else
          {
            if ( a3 && *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
              (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a3, &v39);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
              McTemplateK0p_EtwWriteTransfer(
                v22,
                &USBHUB3_ETW_EVENT_DEVICE_IDLE_CALLBACK,
                &v39,
                *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL));
            v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 184LL) + 32LL);
            (*(void (__fastcall **)(_QWORD))v30)(*(_QWORD *)(v30 + 8));
            HUBIDLE_AddEvent(a1, 6001LL, 0LL);
          }
        }
        else
        {
          v9 = -1073741101;
        }
      }
      else
      {
        v9 = -1073741810;
      }
    }
    else
    {
      v9 = -2147483631;
    }
  }
  else
  {
    v9 = -1073741536;
  }
  LOBYTE(v29) = 0;
LABEL_56:
  if ( v6 )
  {
    v39 = 0LL;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v6, &v39);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      LODWORD(v32) = v9;
      McTemplateK0pq_EtwWriteTransfer(
        v22,
        &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_COMPLETE,
        &v39,
        *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
        v32);
    }
    v6->IoStatus.Status = v9;
    IofCompleteRequest(v6, 0);
  }
  if ( (_BYTE)v29 )
    return 259;
  return v9;
}
