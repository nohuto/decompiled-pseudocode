/*
 * XREFs of HUBHTX_PortControlTransferComplete @ 0x1C0003E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqhh_EtwWriteTransfer @ 0x1C0002398 (McTemplateK0pqhh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C000242C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ccccc @ 0x1C0002890 (WPP_RECORDER_SF_ccccc.c)
 *     WPP_RECORDER_SF_cccccc @ 0x1C00029C0 (WPP_RECORDER_SF_cccccc.c)
 *     WPP_RECORDER_SF_cccccccc @ 0x1C0002B0C (WPP_RECORDER_SF_cccccccc.c)
 *     WPP_RECORDER_SF_chcccc @ 0x1C0002D7C (WPP_RECORDER_SF_chcccc.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_PortControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  int v6; // ebx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-98h]
  int v20; // [rsp+20h] [rbp-98h]
  int v21; // [rsp+20h] [rbp-98h]
  __int64 v22; // [rsp+28h] [rbp-90h]
  __int64 v23; // [rsp+30h] [rbp-88h]
  _DWORD v24[3]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v25; // [rsp+7Ch] [rbp-3Ch]
  int v26; // [rsp+84h] [rbp-34h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = *(_DWORD *)(a4 + 44);
  if ( v4 >= 0 )
  {
    if ( !*(_BYTE *)(a4 + 169) )
    {
      v8 = *(_DWORD *)(a4 + 1336) & 0x20;
      if ( v6 == 1 )
      {
        if ( !v8
          && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)a4 + 16LL),
               0LL,
               0LL,
               1687,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c") >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v5 + 1336), 0x20u);
        }
      }
      else if ( v8 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)a4 + 16LL),
          0LL,
          1695LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
        _InterlockedAnd((volatile signed __int32 *)(v5 + 1336), 0xFFFFFFDF);
      }
      v9 = **(_DWORD **)(v5 + 80);
      if ( *(_DWORD *)(v5 + 1256) == 5000 )
      {
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
        {
          LOWORD(v22) = *(_WORD *)(v5 + 184);
          LODWORD(v19) = *(unsigned __int16 *)(v5 + 200);
          McTemplateK0pqhh_EtwWriteTransfer(
            *(unsigned __int16 *)(v5 + 200),
            &USBHUB3_ETW_EVENT_30_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 248LL),
            v19,
            v22,
            *(_WORD *)(v5 + 186));
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a4) = ((v9 & 8) != 0) + 48;
          LOBYTE(a2) = ((v9 & 0x10) != 0) + 48;
          WPP_RECORDER_SF_chcccc(*(_QWORD *)(v5 + 1432), a2, (unsigned __int8)(((v9 & 0x200) != 0) + 48), a4, v19);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = (BYTE2(v9) >> 7) + 48;
            LOBYTE(v11) = ((v9 & 0x80000) != 0) + 48;
            LOBYTE(v10) = ((v9 & 0x200000) != 0) + 48;
            WPP_RECORDER_SF_cccccc(*(_QWORD *)(v5 + 1432), v10, v11, v12, v20);
          }
        }
      }
      else
      {
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
        {
          LOWORD(v22) = *(_WORD *)(v5 + 184);
          LODWORD(v19) = *(unsigned __int16 *)(v5 + 200);
          McTemplateK0pqhh_EtwWriteTransfer(
            *(unsigned __int16 *)(v5 + 200),
            &USBHUB3_ETW_EVENT_20_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 248LL),
            v19,
            v22,
            *(_WORD *)(v5 + 186));
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a4) = ((v9 & 4) != 0) + 48;
          LOBYTE(a3) = ((v9 & 0x10) != 0) + 48;
          LOBYTE(a2) = ((v9 & 2) != 0) + 48;
          WPP_RECORDER_SF_cccccccc(*(_QWORD *)(v5 + 1432), a2, a3, a4, v19);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = HIWORD(v9);
            LOBYTE(v14) = ((v9 & 0x80000) != 0) + 48;
            LOBYTE(v13) = ((v9 & 0x40000) != 0) + 48;
            LOBYTE(v15) = (BYTE2(v9) & 1) + 48;
            WPP_RECORDER_SF_ccccc(*(_QWORD *)(v5 + 1432), v13, v14, v15, v21);
          }
        }
      }
    }
    if ( *(_BYTE *)(v5 + 169) == 3 )
    {
      if ( *(_WORD *)(v5 + 170) == 2 )
      {
        *(_WORD *)(v5 + 192) |= 4u;
        *(_WORD *)(v5 + 184) |= 4u;
      }
      if ( *(_WORD *)(v5 + 170) == 5 )
      {
        if ( *(_BYTE *)(v5 + 173) == 3 )
        {
          *(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x60;
          *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x60;
        }
        if ( *(_WORD *)(v5 + 170) == 5 && *(_BYTE *)(v5 + 173) == 4 )
        {
          *(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x80;
          *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x80;
        }
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a4 + 1432),
        2u,
        4u,
        0x22u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a4 + 44));
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 2592LL) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", *(_QWORD *)v5 + 1264LL);
    *(_DWORD *)(*(_QWORD *)v5 + 2596LL) = 1073872897;
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      LODWORD(v23) = v4;
      LODWORD(v22) = v6;
      LODWORD(v19) = *(unsigned __int16 *)(v5 + 200);
      McTemplateK0pqqq_EtwWriteTransfer(
        a1,
        &USBHUB3_ETW_EVENT_PORT_CONTROL_TRANSFER_ERROR,
        0LL,
        *(_QWORD *)(*(_QWORD *)v5 + 248LL),
        v19,
        v22,
        v23);
    }
  }
  v25 = 0LL;
  v26 = 0;
  v24[1] = 0;
  v24[2] = 0;
  v24[0] = 24;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          a1,
          v24);
  if ( v16 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C006A1E8);
    LODWORD(v22) = v16;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v17 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v22);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(v5 + 1240))(v5, ((v4 >> 31) & 0xFFFFFFFC) + 3012);
}
