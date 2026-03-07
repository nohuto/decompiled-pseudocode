__int64 __fastcall PfSnSetPrefetcherInformation(__int64 a1, __m256i *a2, int a3, KPROCESSOR_MODE a4)
{
  int v5; // eax
  int v6; // ebx
  __int64 v8; // rdx
  bool v9; // sf
  int v10; // eax
  __m256i v11; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-78h]
  _OWORD v13[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v14; // [rsp+90h] [rbp-28h]

  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v11 = *a2;
  if ( v11.m256i_i64[0] != 0x6B75684300000001LL )
    return (unsigned int)-1073741811;
  if ( v11.m256i_i32[2] > 8u || (v5 = 296, !_bittest(&v5, v11.m256i_u32[2])) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return (unsigned int)-1073741790;
  }
  if ( v11.m256i_i32[2] == 3 )
  {
    if ( v11.m256i_i32[6] != 4 )
      return (unsigned int)-1073741811;
    if ( a4 && (v11.m256i_i8[16] & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = *(_DWORD *)v11.m256i_i64[2];
    if ( v12 == 2 || !a4 )
    {
      v6 = PfSnBeginBootPhase(v12);
      if ( v12 == 2 )
      {
        memset((char *)&v11.m256i_u64[1] + 4, 0, 20);
        v11.m256i_i64[0] = 0x400000004LL;
        v11.m256i_i32[2] = 1;
        LOBYTE(v8) = a4;
        PfpProcessScenarioPhase(&v11, v8);
      }
      v9 = v6 < 0;
LABEL_25:
      if ( v9 )
        return (unsigned int)v6;
      return 0;
    }
    return (unsigned int)-1073741790;
  }
  if ( v11.m256i_i32[2] == 5 )
  {
    if ( v11.m256i_i32[6] == 12 )
    {
      if ( a4 && (v11.m256i_i8[16] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11.m256i_i64[0] = *(_QWORD *)v11.m256i_i64[2];
      v11.m256i_i32[2] = *(_DWORD *)(v11.m256i_i64[2] + 8);
      v10 = PfSnOperationProcess(&v11);
LABEL_38:
      v6 = v10;
      v9 = v10 < 0;
      goto LABEL_25;
    }
    return (unsigned int)-1073741811;
  }
  if ( v11.m256i_i32[2] != 6 )
  {
    if ( v11.m256i_i32[2] != 8 )
      return (unsigned int)-1073741821;
    if ( v11.m256i_i32[6] != 16 )
      return (unsigned int)-1073741306;
    if ( a4 && (v11.m256i_i8[16] & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)v11.m256i_i8 = *(_OWORD *)v11.m256i_i64[2];
    LOBYTE(a2) = a4;
    v10 = PfSnAppLaunchScenarioControl(&v11, a2);
    goto LABEL_38;
  }
  if ( v11.m256i_i32[6] != 72 )
    return (unsigned int)-1073741306;
  if ( a4 && (v11.m256i_i8[16] & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13[0] = *(_OWORD *)v11.m256i_i64[2];
  v13[1] = *(_OWORD *)(v11.m256i_i64[2] + 16);
  v13[2] = *(_OWORD *)(v11.m256i_i64[2] + 32);
  v13[3] = *(_OWORD *)(v11.m256i_i64[2] + 48);
  v14 = *(_QWORD *)(v11.m256i_i64[2] + 64);
  if ( LODWORD(v13[0]) != 2 )
    return (unsigned int)-1073741811;
  PfSnPrefetchCacheEntryUpdate(v13);
  return 0;
}
