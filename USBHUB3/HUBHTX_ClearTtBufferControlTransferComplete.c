/*
 * XREFs of HUBHTX_ClearTtBufferControlTransferComplete @ 0x1C0006A80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C000242C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBHTX_ClearTtBufferControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v6; // ebp
  __int64 v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 28);
  if ( v4 < 0 )
  {
    v8 = a4 + 168;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_DWORD *)(a4 + 28);
      v11 = *(_DWORD *)(a3 + 8);
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)v8 + 2520LL),
        2u,
        3u,
        0x75u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v11,
        v13);
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      LODWORD(v12) = v4;
      LODWORD(v10) = v6;
      LODWORD(v9) = 0;
      McTemplateK0pqqq_EtwWriteTransfer(
        a1,
        &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0LL,
        *(_QWORD *)(*(_QWORD *)v8 + 248LL),
        v9,
        v10,
        v12);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a4 + 168) + 528LL))(
    *(_QWORD *)(*(_QWORD *)(a4 + 168) + 376LL),
    *(_QWORD *)(a4 + 176));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  ExFreePoolWithTag((PVOID)a4, 0x68334855u);
}
