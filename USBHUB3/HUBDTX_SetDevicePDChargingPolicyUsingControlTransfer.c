/*
 * XREFs of HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C002D7DC
 * Callers:
 *     HUBDSM_SettingDevicePDChargingPolicy @ 0x1C00209F0 (HUBDSM_SettingDevicePDChargingPolicy.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 400) &= 0x1Cu;
  *(_BYTE *)(a1 + 401) = 3;
  *(_WORD *)(a1 + 406) = 0;
  *(_WORD *)(a1 + 402) = 54;
  *(_WORD *)(a1 + 404) = (*(_DWORD *)(*(_QWORD *)a1 + 92LL) == 100) + 1;
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 24),
             a1,
             (int)a1 + 248,
             (__int64)HUBDTX_ControlTransferComplete,
             0LL,
             0,
             1,
             *(_BYTE *)(a1 + 1512));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v3) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x69u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v3);
    }
    return HUBSM_AddEvent(a1 + 504, 4004);
  }
  return result;
}
