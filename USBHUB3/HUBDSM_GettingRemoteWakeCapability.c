__int64 __fastcall HUBDSM_GettingRemoteWakeCapability(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 400) & 0x1C;
  *(_BYTE *)(v1 + 401) = 0;
  *(_DWORD *)(v1 + 404) = 0x20000;
  *(_BYTE *)(v1 + 400) = v2 | 0x81;
  *(_WORD *)(v1 + 402) = 0;
  v3 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         v1 + 1732,
         2,
         1,
         *(_BYTE *)(v1 + 1512));
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x1Eu,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v5);
    }
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}
