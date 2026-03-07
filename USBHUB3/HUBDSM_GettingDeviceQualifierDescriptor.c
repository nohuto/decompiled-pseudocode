__int64 __fastcall HUBDSM_GettingDeviceQualifierDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  int Descriptor; // eax
  __int64 v4; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  Descriptor = HUBDTX_GetDescriptor(v1, (int)v1 + 2042, 10, 6, 0, 0);
  if ( Descriptor < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = Descriptor;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x2Bu,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v4);
    }
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}
