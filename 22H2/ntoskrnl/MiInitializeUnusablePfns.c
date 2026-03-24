/*
 * XREFs of MiInitializeUnusablePfns @ 0x1403ABE00
 * Callers:
 *     MiInitializeDynamicPfns @ 0x14052E4E0 (MiInitializeDynamicPfns.c)
 *     MiDoGangAssignment @ 0x1405600B0 (MiDoGangAssignment.c)
 *     MiSwitchToPfns @ 0x140A42F08 (MiSwitchToPfns.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14023DDC0 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiSetPageTablePfnBuddy @ 0x1403570E4 (MiSetPageTablePfnBuddy.c)
 *     MiCreatePfnTemplate @ 0x1403AC244 (MiCreatePfnTemplate.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F5A54 (MiCreateInitialLargeLeafPfns.c)
 */

__int64 __fastcall MiInitializeUnusablePfns(
        __m128i *a1,
        unsigned __int64 a2,
        __int16 a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  char v7; // bl
  __m128i *v9; // rdi
  __m128i *v10; // rcx
  unsigned __int64 v11; // r15
  __m128i *v12; // r13
  __int64 v13; // r12
  __int64 result; // rax
  __int64 v15; // r10
  int v16; // edx
  __int64 v17; // r11
  _DWORD *v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // rax
  _QWORD *v21; // r15
  unsigned int v22; // ebx
  __int64 v23; // r11
  __int64 ContainingPageTable; // rax
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // r11
  unsigned __int64 ValidPte; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 i; // rbx
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  BOOL v35; // eax
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __m128i v41; // xmm2
  __m128i v42; // [rsp+30h] [rbp-30h] BYREF
  __m128i v43; // [rsp+40h] [rbp-20h] BYREF
  __m128i v44; // [rsp+50h] [rbp-10h] BYREF
  int v45; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v46; // [rsp+A8h] [rbp+48h]
  int v47; // [rsp+B8h] [rbp+58h]

  v46 = a2;
  v42 = 0LL;
  v7 = a4;
  v43 = 0LL;
  v9 = a1;
  v44 = 0LL;
  v10 = a1 + 0x5800000000LL;
  v11 = 48 * a2;
  v12 = &v9[3 * a2];
  v13 = (__int64)v10 / 48;
  if ( (a4 & 0x1800) != 0 )
    return MiCreateInitialLargeLeafPfns((__int64)v10 / 48, a2, (a4 >> 11) & 1, 1, a3, 0);
  MiCreatePfnTemplate(1LL, &v42);
  LOBYTE(v16) = 6;
  v47 = 6;
  if ( v7 < 0 )
  {
    v44.m128i_i64[1] = v44.m128i_i64[1] & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
    _InterlockedExchangeAdd64(&qword_140C4E000, a2);
    goto LABEL_13;
  }
  if ( (v7 & 0x40) != 0 )
  {
    v42.m128i_i64[1] = 0xFFFFF68000000000uLL;
    goto LABEL_13;
  }
  if ( (v7 & 2) != 0 )
  {
    if ( (a7 & 2) == 0 )
    {
      v44.m128i_i16[0] = 1;
      v43.m128i_i64[1] = v43.m128i_i64[1] & 0xC000000000000000uLL | 1;
      goto LABEL_13;
    }
    v16 = 2;
  }
  else
  {
    v16 = 5;
  }
  v47 = v16;
LABEL_13:
  v44.m128i_i8[2] = v16 | v44.m128i_i8[2] & 0xF8;
  result = 0x1FF8000000000LL;
  v44.m128i_i64[1] ^= (v44.m128i_i64[1] ^ (v15 << 39)) & 0x1FF8000000000LL;
  if ( (v7 & 0xC0) != 0 )
  {
    v43.m128i_i64[1] = v43.m128i_i64[1] & 0xC000000000000000uLL | 1;
    v43.m128i_i64[0] = MiSwizzleInvalidPte(128LL);
    v44.m128i_i64[1] = v17 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    MiSetPageTablePfnBuddy((__int64)&v42, (__int64)KeGetCurrentThread()->ApcState.Process, 1LL, v18);
    v43.m128i_i64[1] |= 0x4000000000000000uLL;
    v44.m128i_i16[0] = 2;
    result = _InterlockedExchangeAdd64(&qword_140C4EFB8, a2);
  }
  if ( (v7 & 2) != 0 )
  {
    v19 = *(unsigned __int16 *)(a5 + 32);
    v20 = MiSwizzleInvalidPte(16 * ((a5 << 12) | *(_WORD *)(a5 + 32) & 0x3E | 0x40));
    v21 = (_QWORD *)a6;
    v43.m128i_i64[0] = v20;
    v22 = (v19 >> 1) & 0x1F;
    v44.m128i_i64[1] = v23 | 0x8000000000000000uLL;
    ContainingPageTable = MiGetContainingPageTable(a6);
    v26 = 48 * ContainingPageTable - 0x58000000000LL;
    v44.m128i_i64[1] = v27 ^ (ContainingPageTable ^ v27) & 0xFFFFFFFFFLL;
    if ( v47 == 6 )
      ValidPte = MiMakeValidPte((unsigned __int64)v21, v13, v22, v25);
    else
      ValidPte = MiMakeTransitionPte(v13, v22);
    for ( i = ValidPte; v9 != v12; i ^= (i ^ (i + 4096)) & 0xFFFFFFFFF000LL )
    {
      v33 = v43;
      v42.m128i_i64[1] = (__int64)v21;
      *v9 = v42;
      v34 = v44;
      v9[1] = v33;
      v9[2] = v34;
      v35 = MiPteInShadowRange((unsigned __int64)v21);
      if ( (i & 1) == 0 )
      {
        v29 = 0LL;
        if ( v35 )
          v29 = (unsigned int)MiPteHasShadow() != 0;
        *v21 = i;
        if ( !(_DWORD)v29 )
          goto LABEL_34;
        v29 = i;
LABEL_33:
        MiWritePteShadow((__int64)v21, v29, v30);
        goto LABEL_34;
      }
      v30 = 0LL;
      v29 = i;
      if ( v35 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v30 = 1LL;
          if ( HIBYTE(word_140C4E008) )
            goto LABEL_27;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_27;
        }
        v29 |= 0x8000000000000000uLL;
      }
LABEL_27:
      *v21 = v29;
      if ( (_DWORD)v30 )
        goto LABEL_33;
LABEL_34:
      ++v21;
      v9 += 3;
    }
    v45 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v45, v29, v30, v31);
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v26 + 24) ^= (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) + v46)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else if ( v11 <= 0x1000 )
  {
    if ( v9 != v12 )
    {
      v39 = _mm_loadu_si128(&v44);
      v40 = _mm_loadu_si128(&v43);
      v41 = _mm_loadu_si128(&v42);
      do
      {
        *v9 = v41;
        v9[1] = v40;
        v9[2] = v39;
        v9 += 3;
      }
      while ( v9 != v12 );
    }
  }
  else
  {
    if ( v9 != v12 )
    {
      v36 = _mm_loadu_si128(&v44);
      v37 = _mm_loadu_si128(&v43);
      v38 = _mm_loadu_si128(&v42);
      do
      {
        _mm_stream_si128(v9, v38);
        _mm_stream_si128(v9 + 1, v37);
        _mm_stream_si128(v9 + 2, v36);
        v9 += 3;
      }
      while ( v9 != v12 );
    }
    _mm_sfence();
  }
  return result;
}
