/*
 * XREFs of FWUPDATE_GetMMIO @ 0x1C0040C24
 * Callers:
 *     HUBHSM_ReadingUsb4DromStatus @ 0x1C0009FD0 (HUBHSM_ReadingUsb4DromStatus.c)
 *     HUBHSM_ReadingUsb4DromDwordOffset @ 0x1C000A320 (HUBHSM_ReadingUsb4DromDwordOffset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall FWUPDATE_GetMMIO(__int64 a1, __int16 a2, __int64 a3)
{
  char v4; // al
  int v5; // edi
  __int64 v7; // [rsp+28h] [rbp-30h]

  v4 = *(_BYTE *)(a1 + 952) & 0x1C;
  *(_BYTE *)(a1 + 953) = 64;
  *(_WORD *)(a1 + 956) = a2;
  *(_BYTE *)(a1 + 952) = v4 | 0xC0;
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
      0x32u,
      (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
      v7);
  }
  return (unsigned int)v5;
}
