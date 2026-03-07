__int64 __fastcall HUBHSM_LoggingLastOpcode(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 960);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ll(*(_QWORD *)(v4 + 2520), HIBYTE(*(_DWORD *)(v4 + 2704)) & 0x3F, a3, a4);
  return 2053LL;
}
