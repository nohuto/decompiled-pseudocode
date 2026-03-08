/*
 * XREFs of FWUPDATE_HubVendorControlTransferComplete @ 0x1C00409D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C000242C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FWUPDATE_HubVendorControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // esi
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+30h] [rbp-38h]
  _DWORD v16[3]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+4Ch] [rbp-1Ch]
  int v18; // [rsp+54h] [rbp-14h]

  v17 = 0LL;
  v18 = 0;
  v16[1] = 0;
  v16[2] = 0;
  v5 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 828);
  v16[0] = 24;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         a1,
         v16);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C006A1E8);
    v13 = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v13);
  }
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = v6;
      LODWORD(v12) = v5;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a4 + 2520),
        2u,
        3u,
        0x30u,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
        v12,
        v15);
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      LODWORD(v14) = v5;
      LODWORD(v12) = v6;
      LODWORD(v11) = 0;
      McTemplateK0pqqq_EtwWriteTransfer(
        v7,
        &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0LL,
        *(_QWORD *)(a4 + 248),
        v11,
        v12,
        v14);
    }
    if ( (*(_DWORD *)(a4 + 2592) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", a4 + 1264);
  }
  return HUBSM_AddEvent(a4 + 1264, ((v5 >> 31) & 0xFFFFFFFC) + 2008);
}
