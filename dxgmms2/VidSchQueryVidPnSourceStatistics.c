__int64 __fastcall VidSchQueryVidPnSourceStatistics(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // eax
  __int64 v6; // r14
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned __int8 v10; // al
  __m128i *v11; // rax
  __m128i v12; // xmm1
  __int64 v13; // rcx
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+78h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 40);
  v6 = a2;
  if ( a2 < v3 )
  {
    CopyVidPnSourceStatistics(a3, *(_QWORD *)(a1 + 8LL * a2 + 6480));
    if ( *(_BYTE *)(a1 + 2212) )
      v10 = *(_BYTE *)(v9 + a1 + 1808);
    else
      v10 = *(_BYTE *)(a1 + 1808);
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    *(_QWORD *)(v8 + 16) = v10;
    DXGADAPTER::GetVSyncTimeCounters(*(_QWORD *)(a1 + 16), v9, 0, (__int64)&v14);
    if ( *(_BYTE *)(a1 + 59) )
    {
      _mm_lfence();
      v11 = *(__m128i **)(a1 + 8 * v6 + 3200);
      v12 = v11[4907];
      v13 = v11[4907].m128i_i64[0];
      v17 = v11[4908].m128i_i64[0];
      a3[3] = v14 + v13;
      a3[4] = v15 + _mm_srli_si128(v12, 8).m128i_u64[0];
      a3[5] = v17 + v16;
    }
    else
    {
      a3[3] = v14;
      a3[4] = v15;
      a3[5] = v16;
    }
    CopyVidPnSourceStatistics(
      a3 + 10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 32) + 8LL * *(unsigned int *)(a1 + 4)) + 8 * v6 + 88));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(1LL, a2, v3);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId:%u. Should be less than :%u",
      v6,
      *(unsigned int *)(a1 + 40),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
