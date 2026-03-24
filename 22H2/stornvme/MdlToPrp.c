/*
 * XREFs of MdlToPrp @ 0x1C0005410
 * Callers:
 *     SetPrpFromSrb @ 0x1C0002628 (SetPrpFromSrb.c)
 *     ScsiToNVMe @ 0x1C0004A30 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0004498 (GetSrbScsiData.c)
 *     GetSrbFunction @ 0x1C000A660 (GetSrbFunction.c)
 *     BuildReadWriteCommand @ 0x1C0011108 (BuildReadWriteCommand.c)
 *     GetLbaFromCdb @ 0x1C0012620 (GetLbaFromCdb.c)
 */

__int64 __fastcall MdlToPrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 SrbScsiData; // rax
  unsigned int v11; // r13d
  char *v12; // rcx
  int v13; // r8d
  int v14; // r9d
  char v15; // cl
  unsigned __int8 v16; // cl
  __int64 v17; // r11
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // r10d
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // r11
  __m128i *v28; // r9
  __int64 v29; // rdx
  __m128i v30; // xmm1
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v36; // [rsp+A8h] [rbp+50h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = 0;
  v34 = 0LL;
  v36 = 0;
  if ( (*(_BYTE *)(v4 + 4253) & 6) != 2 )
    return 0LL;
  result = StorPortExtendedFunction(6LL, a1, a2, &v34);
  if ( !(_DWORD)result )
  {
    result = StorPortExtendedFunction(76LL, a1, a2, v34);
    if ( !(_DWORD)result )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
      {
        v7 = *(_QWORD *)(a2 + 64);
        v8 = 60LL;
      }
      else
      {
        v7 = *(_QWORD *)(a2 + 24);
        v8 = 16LL;
      }
      v9 = (_DWORD *)(v8 + a2);
      if ( *(_DWORD *)(a1 + 120) )
      {
        v35 = 0;
        SrbScsiData = GetSrbScsiData(a2, &v35, 0LL, 0LL, 0LL);
        v11 = v35;
        if ( GetLbaFromCdb(SrbScsiData, v35, SrbScsiData) )
        {
          v15 = *v12;
          if ( v15 == 40 || v15 == 42 || v15 == -120 || v15 == -118 )
          {
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v16 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v16 = *(_BYTE *)(a2 + 7);
            v17 = a1 + 8LL * v16;
            *v9 -= -*(_DWORD *)(*(_QWORD *)(v17 + 1736) + 52LL) & (*(_DWORD *)(*(_QWORD *)(v17 + 1736) + 52LL)
                                                                 + *(_DWORD *)(a1 + 120)
                                                                 - 1);
            if ( (unsigned int)v16 < *(_DWORD *)(a1 + 208) )
            {
              v18 = *(_QWORD *)(v17 + 1736);
              if ( v18 )
                v14 = *(_DWORD *)(v18 + 16);
            }
            BuildReadWriteCommand(a1, a2, v13, v11, v4 + 4096, v14);
          }
        }
      }
      if ( (unsigned int)GetSrbFunction(a2, (unsigned int)*v9) == 9 )
      {
        if ( *(_DWORD *)(v7 + 36) )
        {
          v19 = *(_DWORD *)(v7 + 36);
        }
        else if ( *(_DWORD *)(v7 + 32) )
        {
          v19 = *(_DWORD *)(v7 + 32);
        }
      }
      v21 = (v19 >> 12) + (((v20 & 0xFFF) + (v19 & 0xFFF) + 4095) >> 12);
      if ( v20 >= 0x1000 )
      {
        v5 = v20 >> 12;
        v20 -= v20 >> 12 << 12;
      }
      if ( !v21 || v5 + v21 > v36 )
        return 3238002689LL;
      *(_QWORD *)(v4 + 4120) = v20 + (*(_QWORD *)(8LL * v5) << 12);
      if ( v21 != 1 )
      {
        if ( v21 == 2 )
        {
          v22 = (_QWORD *)v4;
          v23 = 64LL;
          *(_QWORD *)(v4 + 4128) = *(_QWORD *)(8LL * (v5 + 1)) << 12;
          do
          {
            *v22 = 0LL;
            v22[1] = 0LL;
            v22[2] = 0LL;
            v22 += 8;
            *(v22 - 5) = 0LL;
            *(v22 - 4) = 0LL;
            *(v22 - 3) = 0LL;
            *(v22 - 2) = 0LL;
            *(v22 - 1) = 0LL;
            --v23;
          }
          while ( v23 );
          *(_QWORD *)v4 = *(_QWORD *)(v4 + 4128);
        }
        else
        {
          v35 = 0;
          v24 = (_QWORD *)v4;
          v25 = 64LL;
          do
          {
            *v24 = 0LL;
            v24[1] = 0LL;
            v24[2] = 0LL;
            v24 += 8;
            *(v24 - 5) = 0LL;
            *(v24 - 4) = 0LL;
            *(v24 - 3) = 0LL;
            *(v24 - 2) = 0LL;
            *(v24 - 1) = 0LL;
            --v25;
          }
          while ( v25 );
          v26 = 1;
          v27 = v21 - 1;
          v28 = (__m128i *)v4;
          if ( (unsigned int)v27 >= 8
            && (v4 + 8 > 8 * (unsigned __int64)((unsigned int)v27 + v5) || v4 + 8 * v27 < 8 * (unsigned __int64)(v5 + 1)) )
          {
            v29 = v5 + 3;
            v30 = _mm_cvtsi32_si128(0xCu);
            do
            {
              v26 += 8;
              *v28 = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(8LL * (unsigned int)(v29 - 2))), v30);
              v28[1] = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(8 * v29)), v30);
              v31 = _mm_loadu_si128((const __m128i *)(8LL * (unsigned int)(v29 + 2)));
              v32 = (unsigned int)(v29 + 4);
              v29 = (unsigned int)(v29 + 8);
              v28[2] = _mm_sll_epi64(v31, v30);
              v28[3] = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(8 * v32)), v30);
              v28 += 4;
            }
            while ( v26 < v21 - (((_BYTE)v21 - 1) & 7) );
          }
          for ( ; v26 < v21; v28[-1].m128i_i64[1] = *(_QWORD *)(8 * v33) << 12 )
          {
            v33 = v26 + v5;
            ++v26;
            v28 = (__m128i *)((char *)v28 + 8);
          }
          *(_QWORD *)(v4 + 4128) = StorPortGetPhysicalAddress(a1, a2, v4, &v35);
        }
      }
      return 0LL;
    }
  }
  return result;
}
