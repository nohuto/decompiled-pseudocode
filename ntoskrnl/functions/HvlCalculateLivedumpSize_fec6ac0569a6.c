__int64 __fastcall HvlCalculateLivedumpSize(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v6; // r10d
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  bool v10; // zf

  if ( (HvlpRootFlags & 2) == 0 )
    return 3221225659LL;
  v6 = 0;
  if ( !qword_140C5F008 || !HvlpHypervisorStatsPage )
    return 3221225659LL;
  v7 = *(_QWORD *)(HvlpHypervisorStatsPage + 24);
  if ( (a1 & 2) == 0 )
  {
    v8 = *(_QWORD *)(HvlpHypervisorStatsPage + 88);
    if ( v7 <= v8 )
      return 3221225473LL;
    v7 -= v8;
  }
  v10 = VslVsmEnabled == 0;
  *a2 = (v7
       + ((((v7 + 767) >> 9) + 511) >> 9)
       + ((v7 + 767) >> 9)
       + ((((((v7 + 767) >> 9) + 511) >> 9) + 511) >> 9)
       + 257) << 12;
  if ( v10 )
  {
    *a4 = (unsigned __int64)(unsigned int)dword_140C5F018 << 12;
    *a3 = 0LL;
  }
  else
  {
    return (unsigned int)VslLiveDumpQuerySecondaryDataSize(a1, a3, a4);
  }
  return v6;
}
