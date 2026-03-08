/*
 * XREFs of HUBHSM_SettingHubDepth @ 0x1C0009D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHSM_SettingHubDepth(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  unsigned __int16 v3; // ax
  __int64 *v4; // rdi
  int v5; // eax
  int v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 952) & 0x1C;
  *(_BYTE *)(v1 + 953) = 12;
  *(_BYTE *)(v1 + 952) = v2 | 0x20;
  v3 = *(unsigned __int8 *)(v1 + 240) - 1;
  *(_WORD *)(v1 + 954) = v3;
  *(_DWORD *)(v1 + 956) = 0;
  v4 = (__int64 *)(v1 + 2520);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = v3;
    WPP_RECORDER_SF_d(*v4, 4u, 3u, 0x1Bu, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v7);
  }
  v5 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 248),
         v1,
         (int)v1 + 800,
         (__int64)HUBHTX_HubControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(v1 + 2272));
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_d(*v4, 2u, 3u, 0x1Cu, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v8);
    }
    HUBSM_AddEvent(v1 + 1264, 2004LL);
  }
  return 1000LL;
}
