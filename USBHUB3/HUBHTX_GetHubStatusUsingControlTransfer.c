/*
 * XREFs of HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003880
 * Callers:
 *     HUBHSM_GettingHubPortStatus @ 0x1C0008890 (HUBHSM_GettingHubPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetHubStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v3; // rdi
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-40h]

  v1 = a1 + 780;
  *(_BYTE *)(a1 + 952) = *(_BYTE *)(a1 + 952) & 0x1C | 0xA0;
  *(_BYTE *)(a1 + 953) = 0;
  *(_DWORD *)(a1 + 954) = 0;
  *(_WORD *)(a1 + 958) = 4;
  *(_DWORD *)(a1 + 784) = *(_DWORD *)(a1 + 780);
  v3 = (__int64 *)(a1 + 2520);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*v3, 4u, 3u, 0x19u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 248),
             a1,
             (int)a1 + 800,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1,
             4,
             0,
             *(_BYTE *)(a1 + 2272));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = result;
      WPP_RECORDER_SF_d(*v3, 2u, 3u, 0x1Au, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v5);
    }
    return HUBSM_AddEvent(a1 + 1264, 2004LL);
  }
  return result;
}
