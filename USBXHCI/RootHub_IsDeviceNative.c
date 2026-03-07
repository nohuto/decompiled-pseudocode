bool __fastcall RootHub_IsDeviceNative(__int64 a1, int a2)
{
  char v4; // bl
  __m128i *v5; // rdx
  __int64 v6; // rcx
  int v7; // edx
  char Ulong; // bl
  int v9; // edx
  char v10; // bp

  v4 = 0;
  if ( (unsigned int)Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage()
    && *(_BYTE *)(120LL * (unsigned int)(a2 - 1) + *(_QWORD *)(a1 + 48) + 13) == 3 )
  {
    v5 = *(__m128i **)(a1 + 8);
    v6 = v5[5].m128i_i64[1];
    if ( (_mm_srli_si128(v5[21], 8).m128i_u64[0] & 0x400000) != 0 )
    {
      Ulong = XilRegister_ReadUlong(
                v6,
                (unsigned int *)(*(_QWORD *)(v6 + 24) + (unsigned int)(32 * (a2 - *(_DWORD *)(v6 + 140)) + 35524)));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v7,
          11,
          267,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          a2,
          Ulong);
      }
      return (Ulong & 0x10) == 0;
    }
    else if ( (_mm_srli_si128(v5[21], 8).m128i_u64[0] & 0x800000) != 0 )
    {
      v10 = XilRegister_ReadUlong(v6, (unsigned int *)(*(_QWORD *)(v6 + 24) + 52512LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v9,
          11,
          268,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          a2,
          v10);
      }
      return (v10 & 1) == 0;
    }
  }
  return v4;
}
