/*
 * XREFs of FWUPDATE_SetMMIO @ 0x1C0040B50
 * Callers:
 *     HUBHSM_WritingUsb4DromMetaData @ 0x1C000A380 (HUBHSM_WritingUsb4DromMetaData.c)
 *     HUBHSM_WritingUsb4DromReadOpcode @ 0x1C000A3F0 (HUBHSM_WritingUsb4DromReadOpcode.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall FWUPDATE_SetMMIO(__int64 a1, __int16 a2, __int64 a3)
{
  char v4; // al
  int v5; // edi
  __int64 v7; // [rsp+28h] [rbp-30h]

  v4 = *(_BYTE *)(a1 + 952) & 0x1C;
  *(_BYTE *)(a1 + 953) = 65;
  *(_WORD *)(a1 + 956) = a2;
  *(_BYTE *)(a1 + 952) = v4 | 0x40;
  *(_WORD *)(a1 + 954) = 1024;
  *(_WORD *)(a1 + 958) = 4;
  v5 = HUBMISC_ControlTransfer(
         a1,
         *(_QWORD *)(a1 + 248),
         a1,
         (_QWORD *)(a1 + 800),
         (__int64)FWUPDATE_HubVendorControlTransferComplete,
         a3,
         4,
         0,
         *(_BYTE *)(a1 + 2272));
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v7) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      0x31u,
      (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
      v7);
  }
  return (unsigned int)v5;
}
