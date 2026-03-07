__int64 __fastcall DxgkEnumAdaptersImpl(struct _D3DKMT_ENUMADAPTERS *a1, __int64 a2, __int64 a3, enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS *v4; // rbx
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // rsi
  unsigned int v9; // eax
  _OWORD *v10; // rax
  unsigned int v11; // [rsp+50h] [rbp-198h] BYREF
  unsigned int v12; // [rsp+54h] [rbp-194h]
  __int64 v13; // [rsp+58h] [rbp-190h]
  _DWORD *v14; // [rsp+60h] [rbp-188h]
  __int64 v15; // [rsp+68h] [rbp-180h]
  _DWORD v16[84]; // [rsp+70h] [rbp-178h] BYREF

  v4 = a1;
  if ( a1 )
  {
    memset(v16, 0, 0x144uLL);
    v11 = 0;
    v13 = 0LL;
    v14 = &v16[1];
    v12 = 16;
    v6 = 2LL;
    v15 = 2LL;
    LOBYTE(v7) = 1;
    v8 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v11, 1, v7, 6u);
    v9 = v11;
    if ( v11 > 0x10 )
    {
      WdLogSingleEntry1(1LL, 1034LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= MAX_ENUM_ADAPTERS",
        1034LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = v11;
    }
    if ( v9 > v12 )
    {
      WdLogSingleEntry1(1LL, 1035LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
        1035LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = v11;
    }
    if ( v9 > (unsigned int)v13 )
    {
      WdLogSingleEntry1(1LL, 1036LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
        1036LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = v11;
    }
    if ( (int)v8 >= 0 )
    {
      v16[0] = v9;
      if ( (unsigned __int64)&v4[1] > MmUserProbeAddress || &v4[1] <= v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v10 = v16;
      do
      {
        *(_OWORD *)&v4->NumAdapters = *v10;
        *(_OWORD *)&v4->Adapters[0].NumOfSources = v10[1];
        *(_OWORD *)&v4->Adapters[1].AdapterLuid.HighPart = v10[2];
        *(_OWORD *)&v4->Adapters[2].AdapterLuid.LowPart = v10[3];
        *(_OWORD *)&v4->Adapters[3].hAdapter = v10[4];
        *(_OWORD *)&v4->Adapters[3].bPresentMoveRegionsPreferred = v10[5];
        *(_OWORD *)&v4->Adapters[4].NumOfSources = v10[6];
        v4 = (struct _D3DKMT_ENUMADAPTERS *)((char *)v4 + 128);
        *(_OWORD *)&v4[-1].Adapters[15].AdapterLuid.LowPart = v10[7];
        v10 += 8;
        --v6;
      }
      while ( v6 );
      *(_OWORD *)&v4->NumAdapters = *v10;
      *(_OWORD *)&v4->Adapters[0].NumOfSources = v10[1];
      *(_OWORD *)&v4->Adapters[1].AdapterLuid.HighPart = v10[2];
      *(_OWORD *)&v4->Adapters[2].AdapterLuid.LowPart = v10[3];
      v4->Adapters[3].hAdapter = *((_DWORD *)v10 + 16);
    }
    else
    {
      WdLogSingleEntry1(2LL, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkEnumAdaptersInternal failed, returning 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters caller specified NULL D3DKMT_ENUMADAPTERS, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
