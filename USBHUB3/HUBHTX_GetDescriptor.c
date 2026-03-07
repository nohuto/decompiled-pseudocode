__int64 __fastcall HUBHTX_GetDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  char v7; // al
  int v8; // esi
  int v11; // [rsp+20h] [rbp-38h]

  *(_BYTE *)(a1 + 953) = 6;
  *(_BYTE *)(a1 + 955) = a4;
  v7 = *(_BYTE *)(a1 + 952);
  v8 = a3;
  *(_WORD *)(a1 + 958) = a3;
  *(_BYTE *)(a1 + 952) = v7 & 0x9C | (a6 != 0 ? -96 : 0x80);
  *(_BYTE *)(a1 + 954) = 0;
  *(_WORD *)(a1 + 956) = 0;
  if ( a6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_c(
        *(_QWORD *)(a1 + 2520),
        4u,
        3u,
        0xFu,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        a4);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_cd(*(_QWORD *)(a1 + 2520), a2, a3, a4, v11);
  }
  return HUBMISC_ControlTransfer(
           a1,
           *(_QWORD *)(a1 + 248),
           a1,
           (int)a1 + 800,
           (__int64)HUBHTX_HubControlTransferComplete,
           a2,
           v8,
           1,
           *(_BYTE *)(a1 + 2272));
}
