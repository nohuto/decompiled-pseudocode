/*
 * XREFs of HUBHTX_SendInterruptTransferComplete @ 0x1C0003CC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C000242C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBHTX_SendInterruptTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v6; // ebx
  int v7; // ebp
  __int64 *v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-28h]

  v4 = *(unsigned __int16 *)(a4 + 1012);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_DWORD *)(a4 + 980);
  *(_WORD *)(a4 + 1130) = v4;
  *(_DWORD *)(a4 + 1136) = 8 * v4;
  *(_QWORD *)(a4 + 1144) = *(_QWORD *)(a4 + 1120);
  if ( v6 < 0 )
  {
    v8 = (__int64 *)(a4 + 2520);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = v7;
      v12 = v6;
      WPP_RECORDER_SF_DD(*v8, 2u, 3u, 0x1Du, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v12, v14);
    }
    if ( v6 != -1073741536 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v7;
        LODWORD(v11) = v6;
        WPP_RECORDER_SF_DD(*v8, 2u, 3u, 0x1Eu, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v11, v13);
      }
      if ( (*(_DWORD *)(a4 + 2592) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierInterruptTransferFailure", a4 + 1264);
      *(_DWORD *)(a4 + 2596) = 1073872898;
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      {
        LODWORD(v13) = v6;
        LODWORD(v11) = v7;
        LODWORD(v10) = 0;
        McTemplateK0pqqq_EtwWriteTransfer(
          a1,
          &USBHUB3_ETW_EVENT_PORT_INTERRUPT_TRANSFER_ERROR,
          (const GUID *)(a4 + 2412),
          *(_QWORD *)(a4 + 248),
          v10,
          v11,
          v13);
      }
    }
  }
  return HUBSM_AddEvent(a4 + 1264, ((v6 >> 31) & 0xFFFFFFFC) + 2034);
}
