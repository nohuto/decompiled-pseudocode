__int64 __fastcall HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int MsOsFeatureDescriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 960);
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(v3, 1, a3, 5, v3 + 1732, 10LL);
  if ( MsOsFeatureDescriptor < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = MsOsFeatureDescriptor;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        5u,
        0x62u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v6);
    }
    HUBSM_AddEvent(v3 + 504, 4004);
  }
  return 1000LL;
}
