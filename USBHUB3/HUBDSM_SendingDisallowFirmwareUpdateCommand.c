__int64 __fastcall HUBDSM_SendingDisallowFirmwareUpdateCommand(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_BYTE *)(v1 + 401) = 27;
  *(_WORD *)(v1 + 402) = 0;
  *(_WORD *)(v1 + 406) = 0;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1512));
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = v2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x38u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v4);
    }
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}
