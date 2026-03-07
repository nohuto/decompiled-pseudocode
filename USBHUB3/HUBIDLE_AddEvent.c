__int64 __fastcall HUBIDLE_AddEvent(__int64 a1, int a2, IRP *a3)
{
  int v3; // ebx
  __int64 v5; // r13
  IRP *v6; // rbp
  unsigned int v9; // edi
  int v10; // r14d
  KIRQL v11; // dl
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(__int64, IRP *); // rax
  __int64 v29; // rcx
  __int64 v31; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+30h] [rbp-78h]
  __int64 v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  KIRQL NewIrql; // [rsp+50h] [rbp-58h]
  int v37; // [rsp+54h] [rbp-54h]
  GUID v38; // [rsp+58h] [rbp-50h] BYREF

  v3 = *(_DWORD *)(a1 + 160);
  v5 = *(_QWORD *)(a1 + 152);
  v6 = 0LL;
  v37 = v3;
  v38 = 0LL;
  v9 = 259;
  v10 = a2;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 136));
  v11 = NewIrql;
  if ( v10 != 1000 )
  {
    while ( 1 )
    {
      LODWORD(v12) = 0;
      v13 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144) - v3));
      v14 = *(_DWORD *)(v13 + 16);
      if ( v14 == 1000 )
      {
LABEL_6:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v32) = a2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 48) + 8LL) + 1432LL),
            2u,
            5u,
            0xBu,
            (__int64)&WPP_2569be9ff7fd3488897cf7ed99434f3d_Traceguids,
            v32);
        }
        HUBMISC_DbgBreak("Unhandled Event in Idle State Machine");
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          LODWORD(v35) = 0;
          LODWORD(v34) = a2;
          LODWORD(v33) = *(_DWORD *)(a1 + 144);
          LODWORD(v32) = *(_DWORD *)(a1 + 160);
          McTemplateK0ppqqqq_EtwWriteTransfer(
            v16,
            &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT,
            0LL,
            0LL,
            0LL,
            v32,
            v33,
            v34,
            v35);
        }
        goto LABEL_10;
      }
      v15 = 0LL;
      while ( v10 != v14 )
      {
        v12 = (unsigned int)(v12 + 1);
        v15 = (unsigned int)v12;
        v14 = *(_DWORD *)(v13 + 8 * v12 + 16);
        if ( v14 == 1000 )
          goto LABEL_6;
      }
      v26 = *(_DWORD *)(v13 + 8 * v15 + 20);
      if ( v26 == 1000 )
        break;
      switch ( v26 )
      {
        case 1001:
          goto LABEL_6;
        case 1002:
          v9 = -2147483631;
          goto LABEL_37;
        case 1003:
          v9 = -1073741810;
LABEL_37:
          v6 = a3;
          goto LABEL_10;
      }
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128) + 4) = v26;
      *(_DWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 128)) = v10;
      *(_BYTE *)(a1 + 128) = (*(_BYTE *)(a1 + 128) + 1) & 0xF;
      if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      {
        LODWORD(v35) = 0;
        v27 = (unsigned int)(v26 - *(_DWORD *)(a1 + 160));
        LODWORD(v34) = v10;
        LODWORD(v33) = **(_DWORD **)(*(_QWORD *)(a1 + 152) + 8 * v27);
        LODWORD(v32) = *(_DWORD *)(a1 + 160);
        McTemplateK0ppqqqq_EtwWriteTransfer(
          v27,
          &USBHUB3_ETW_EVENT_STATE_MACHINE,
          0LL,
          *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
          a1,
          v32,
          v33,
          v34,
          v35);
      }
      *(_DWORD *)(a1 + 144) = v26;
      v28 = *(__int64 (__fastcall **)(__int64, IRP *))(*(_QWORD *)(v5 + 8LL * (unsigned int)(v26 - v37)) + 8LL);
      if ( !v28 )
        goto LABEL_10;
      v10 = v28(a1, a3);
      if ( v10 == 1000 )
        goto LABEL_10;
      v3 = v37;
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
LABEL_10:
    v11 = NewIrql;
  }
  v17 = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 176) = 0;
  if ( v17 == 1 || v17 == 2 || v17 == 3 || v17 == 4 || v17 == 5 || v17 == 8 )
  {
    v6 = *(IRP **)(a1 + 168);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 136), v11);
  v19 = v17 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( !v23 )
          {
            v9 = 0;
            LOBYTE(v25) = 0;
            goto LABEL_56;
          }
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 == 1 )
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
                           off_1C006A2E8) = a1;
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
                WdfDriverGlobals,
                *(_QWORD *)(a1 + 184));
            }
          }
          else
          {
            if ( a3 && *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
              (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a3, &v38);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
              McTemplateK0p_EtwWriteTransfer(
                v18,
                &USBHUB3_ETW_EVENT_DEVICE_IDLE_CALLBACK,
                &v38,
                *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL));
            v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 184LL) + 32LL);
            (*(void (__fastcall **)(_QWORD))v29)(*(_QWORD *)(v29 + 8));
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
  LOBYTE(v25) = 0;
LABEL_56:
  if ( v6 )
  {
    v38 = 0LL;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v6, &v38);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      LODWORD(v31) = v9;
      McTemplateK0pq_EtwWriteTransfer(
        v18,
        &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_COMPLETE,
        &v38,
        *(_QWORD *)(*(_QWORD *)(a1 - 48) + 24LL),
        v31);
    }
    v6->IoStatus.Status = v9;
    IofCompleteRequest(v6, 0);
  }
  if ( (_BYTE)v25 )
    return 259;
  return v9;
}
