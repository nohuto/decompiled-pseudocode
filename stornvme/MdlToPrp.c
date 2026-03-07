__int64 __fastcall MdlToPrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 SrbScsiData; // rax
  char *v11; // rcx
  int v12; // r8d
  int v13; // r9d
  int v14; // r11d
  char v15; // cl
  int v16; // r10d
  unsigned __int8 v17; // cl
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // edi
  unsigned int v24; // r8d
  __int64 v25; // r11
  __m128i *v26; // r9
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 v29; // rdx
  __m128i v30; // xmm1
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 *v33; // [rsp+20h] [rbp-38h]
  unsigned int *v34; // [rsp+28h] [rbp-30h]
  __int64 v35; // [rsp+40h] [rbp-18h] BYREF
  __int64 v36; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v37; // [rsp+98h] [rbp+40h] BYREF
  unsigned int v38; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v39; // [rsp+A8h] [rbp+50h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v35 = 0LL;
  v5 = 0;
  v36 = 0LL;
  v39 = 0;
  v37 = 0;
  if ( (*(_BYTE *)(v4 + 4253) & 6) != 2 )
    return 0LL;
  result = StorPortExtendedFunction(6LL, a1, a2, &v36);
  if ( !(_DWORD)result )
  {
    v34 = &v39;
    v33 = &v35;
    result = StorPortExtendedFunction(76LL, a1, a2, v36);
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
      v9 = (_DWORD *)(a2 + v8);
      if ( *(_DWORD *)(a1 + 128) )
      {
        v38 = 0;
        SrbScsiData = GetSrbScsiData(a2, (unsigned int)&v38, 0, 0, 0LL);
        if ( GetLbaFromCdb(SrbScsiData, v38, SrbScsiData) )
        {
          v15 = *v11;
          if ( v15 == 40 || v15 == 42 || v15 == -120 || v15 == -118 )
          {
            v16 = *(_DWORD *)(a1 + 128);
            v37 += v16;
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v17 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v17 = *(_BYTE *)(a2 + 7);
            v18 = v17;
            v19 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v17 + 1952) + 52LL);
            *v9 -= -v19 & (v19 + v16 - 1);
            if ( (unsigned int)v18 < *(_DWORD *)(a1 + 232) )
            {
              v20 = *(_QWORD *)(a1 + 8 * v18 + 1952);
              if ( v20 )
                v13 = *(_DWORD *)(v20 + 16);
            }
            BuildReadWriteCommand(a1, a2, v12, v14, v4 + 4096, v13);
          }
        }
      }
      v37 += *(_DWORD *)(v4 + 4216);
      if ( (unsigned int)GetSrbFunction(a2, (unsigned int)*v9) == 9 )
      {
        if ( *(_DWORD *)(v7 + 36) )
        {
          v21 = *(_DWORD *)(v7 + 36);
        }
        else if ( *(_DWORD *)(v7 + 32) )
        {
          v21 = *(_DWORD *)(v7 + 32);
        }
      }
      v23 = (v21 >> 12) + (((v22 & 0xFFF) + (v21 & 0xFFF) + 4095) >> 12);
      if ( v22 >= 0x1000 )
      {
        v5 = v22 >> 12;
        v22 -= v22 >> 12 << 12;
        v37 = v22;
      }
      if ( !v23 || v5 + v23 > v39 )
        return 3238002689LL;
      *(_QWORD *)(v4 + 4120) = v22 + (*(_QWORD *)(v35 + 8LL * v5) << 12);
      if ( v23 != 1 )
      {
        if ( v23 == 2 )
        {
          *(_QWORD *)(v4 + 4128) = *(_QWORD *)(v35 + 8LL * (v5 + 1)) << 12;
          memset((void *)v4, 0, 0x1000uLL);
          *(_QWORD *)v4 = *(_QWORD *)(v4 + 4128);
        }
        else
        {
          v38 = 0;
          memset((void *)v4, 0, 0x1000uLL);
          v24 = 1;
          v25 = v23 - 1;
          v26 = (__m128i *)v4;
          if ( (unsigned int)v25 < 8 )
            goto LABEL_46;
          v27 = v35;
          if ( v4 + 8 <= v35 + 8 * (unsigned __int64)((unsigned int)v25 + v5)
            && v4 + 8 * v25 >= v35 + 8 * (unsigned __int64)(v5 + 1) )
          {
            goto LABEL_47;
          }
          v28 = v35;
          v29 = v5 + 5;
          v30 = _mm_cvtsi32_si128(0xCu);
          do
          {
            v24 += 8;
            *v26 = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(v28 + 8LL * (unsigned int)(v29 - 4))), v30);
            v31 = (unsigned int)(v29 + 2);
            v26[1] = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(v28 + 8LL * (unsigned int)(v29 - 2))), v30);
            v32 = _mm_loadu_si128((const __m128i *)(v28 + 8 * v29));
            v29 = (unsigned int)(v29 + 8);
            v26[2] = _mm_sll_epi64(v32, v30);
            v26[3] = _mm_sll_epi64(_mm_loadu_si128((const __m128i *)(v28 + 8 * v31)), v30);
            v26 += 4;
          }
          while ( v24 < v23 - (((_BYTE)v23 - 1) & 7) );
          while ( v24 < v23 )
          {
LABEL_46:
            v27 = v35;
LABEL_47:
            v26 = (__m128i *)((char *)v26 + 8);
            v26[-1].m128i_i64[1] = *(_QWORD *)(v27 + 8LL * (v24 + v5)) << 12;
            ++v24;
          }
          *(_QWORD *)(v4 + 4128) = StorPortGetPhysicalAddress(a1, a2, v4, &v38, v33, v34, &v37);
        }
      }
      return 0LL;
    }
  }
  return result;
}
