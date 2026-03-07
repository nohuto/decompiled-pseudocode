__int64 __fastcall HUBHSM_GettingHubStatus(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rdi
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 952) = *(_BYTE *)(v1 + 952) & 0x1C | 0x80;
  *(_BYTE *)(v1 + 953) = 0;
  *(_DWORD *)(v1 + 954) = 0;
  *(_WORD *)(v1 + 958) = 2;
  v2 = (__int64 *)(v1 + 2520);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*v2, 4u, 3u, 0x17u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
  v3 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 248),
         v1,
         (int)v1 + 800,
         (__int64)HUBHTX_HubControlTransferComplete,
         v1 + 796,
         2,
         0,
         *(_BYTE *)(v1 + 2272));
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = v3;
      WPP_RECORDER_SF_d(*v2, 2u, 3u, 0x18u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v5);
    }
    HUBSM_AddEvent(v1 + 1264, 2004LL);
  }
  return 1000LL;
}
