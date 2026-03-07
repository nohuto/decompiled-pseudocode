__int64 __fastcall MiInitializeNewPfns(
        __m128i *a1,
        unsigned __int64 a2,
        const __m128i *a3,
        unsigned __int16 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  __m128i *v9; // rsi
  __int64 v10; // rbx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 result; // rax
  __m128i v14; // xmm2
  __m128i *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int16 *v18; // r10
  int v19; // r13d
  unsigned __int64 *v20; // r12
  unsigned __int64 v21; // rdi
  unsigned __int64 ContainingPageTable; // rax
  __int64 v23; // rbp
  unsigned __int64 ValidPte; // rax
  __m128i *v25; // rdx
  __m128i *v26; // rcx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __int64 v30; // [rsp+30h] [rbp-38h] BYREF
  int v31; // [rsp+70h] [rbp+8h] BYREF

  v9 = a1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4);
  if ( (a5 & 0x3000) != 0 )
    return (__int64)MiCreateInitialLargeLeafPfns(v10, a2, (a5 >> 12) & 1, 1, a4, 0);
  if ( (a5 & 0x180) != 0 )
  {
    _InterlockedExchangeAdd64(&qword_140C69630, a2);
    if ( (a5 & 0x100) != 0 )
      _InterlockedExchangeAdd64(&qword_140C65828, a2);
  }
  if ( (a5 & 2) != 0 )
  {
    v17 = MiSwizzleInvalidPte(16 * ((a6 << 12) | *(_WORD *)(a6 + 32) & 0x3E | 0x40));
    v19 = *(_BYTE *)(v16 + 34) & 7;
    v30 = v17;
    if ( v19 == 2 && (unsigned int)MiDetermineNewPfnHeatState(0, 1u) )
    {
      MiSetNonResidentPteHeat((unsigned __int64 *)&v30, 1);
      v17 = v30;
    }
    v20 = a7;
    v21 = a3[2].m128i_i64[1] | 0x8000000000000000uLL;
    a3[2].m128i_i64[1] = v21;
    a3[1].m128i_i64[0] = v17;
    a5 = (*v18 >> 1) & 0x1F;
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v20);
    v23 = 48 * ContainingPageTable - 0x220000000000LL;
    a3[2].m128i_i64[1] = v21 ^ (ContainingPageTable ^ v21) & 0xFFFFFFFFFFLL;
    if ( v19 == 6 )
      ValidPte = MiMakeValidPte((unsigned __int64)v20, v10, a5);
    else
      ValidPte = MiSwizzleInvalidPte(32 * (((v10 & 0xFFFFFFFFFFLL) << 7) | a5 | 0x40));
    v25 = &v9[3 * a2];
    while ( v9 != v25 )
    {
      a3->m128i_i64[1] = (__int64)v20;
      v26 = v9 + 3;
      v27 = _mm_loadu_si128(a3);
      v28 = _mm_loadu_si128(a3 + 1);
      v29 = _mm_loadu_si128(a3 + 2);
      while ( v9 != v26 )
      {
        *v9 = v27;
        v9[1] = v28;
        v9[2] = v29;
        v9 += 3;
      }
      v9 = v26;
      *v20++ = ValidPte;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFFF000LL;
    }
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v23 + 24) < 0 );
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + a2)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v11 = *a3;
    v12 = a3[1];
    result = 48 * a2;
    v14 = a3[2];
    v15 = &a1[3 * a2];
    if ( 48 * a2 > 0x1000 )
    {
      while ( v9 != v15 )
      {
        _mm_stream_si128(v9, v11);
        _mm_stream_si128(v9 + 1, v12);
        _mm_stream_si128(v9 + 2, v14);
        v9 += 3;
      }
      _mm_sfence();
    }
    else
    {
      while ( v9 != v15 )
      {
        *v9 = v11;
        v9[1] = v12;
        v9[2] = v14;
        v9 += 3;
      }
    }
  }
  return result;
}
