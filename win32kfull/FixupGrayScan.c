void *__fastcall FixupGrayScan(__int64 a1, void *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // ecx
  void *v5; // rsi
  __m128i v6; // xmm1
  int v7; // edi
  unsigned __int64 v8; // r10
  unsigned __int8 *v9; // r13
  __m128i v10; // xmm1
  _BYTE *v11; // xmm0_8
  unsigned int v12; // r9d
  unsigned int v13; // r11d
  int v14; // edx
  int v15; // r12d
  unsigned __int8 *v16; // r8
  unsigned int v17; // ebx
  _BYTE *v18; // rsi
  __int64 v19; // r15
  int v20; // r10d
  unsigned __int8 *v21; // r13
  int v22; // r14d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // edx
  void *result; // rax
  unsigned int v27; // [rsp+20h] [rbp-89h]
  int v28; // [rsp+24h] [rbp-85h]
  int v29; // [rsp+28h] [rbp-81h]
  int v30; // [rsp+2Ch] [rbp-7Dh]
  unsigned int v31; // [rsp+30h] [rbp-79h]
  int v32; // [rsp+34h] [rbp-75h]
  int v33; // [rsp+38h] [rbp-71h]
  unsigned int v34; // [rsp+40h] [rbp-69h]
  _BYTE v35[40]; // [rsp+50h] [rbp-59h]
  size_t Size; // [rsp+78h] [rbp-31h]
  __m128i v37; // [rsp+80h] [rbp-29h]
  __int64 v38; // [rsp+80h] [rbp-29h]
  __m128i v39; // [rsp+90h] [rbp-19h]
  __int64 v40; // [rsp+A0h] [rbp-9h]
  __int128 v41; // [rsp+A8h] [rbp-1h]
  unsigned int v44; // [rsp+120h] [rbp+77h]
  int v45; // [rsp+128h] [rbp+7Fh]

  v2 = *(unsigned int *)(a1 + 56);
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = a2;
  v34 = v4;
  v6 = *(__m128i *)(v3 + 512);
  v41 = *(_OWORD *)(v3 + 480);
  *(_QWORD *)v35 = *(_QWORD *)(v3 + 488);
  v37 = v6;
  v39 = *(__m128i *)(v3 + 496);
  *(__m128i *)&v35[8] = v39;
  Size = *(_QWORD *)(v3 + 528);
  v7 = HIDWORD(Size);
  *(__m128i *)&v35[24] = v6;
  if ( (*(_DWORD *)v3 & 0x20) != 0 )
  {
    v8 = v6.m128i_i64[0];
    *(_DWORD *)v3 &= ~0x20u;
    v7 = HIDWORD(Size) + 1;
  }
  else if ( SHIDWORD(Size) > 1 )
  {
    v9 = *(unsigned __int8 **)(v3 + 480);
    v10 = *(__m128i *)&v35[16];
    v41 = *(_OWORD *)v35;
    *(_QWORD *)&v35[24] = *(_QWORD *)&v35[32];
    v39 = v10;
    *(_QWORD *)&v35[32] = v9;
    memmove(v9, *(const void **)&v35[16], (unsigned int)Size);
    v11 = (_BYTE *)_mm_srli_si128(v10, 8).m128i_u64[0];
    if ( *(int *)(v3 + 60) <= 0 )
    {
      memmove(v11, *(const void **)&v35[8], (unsigned int)Size);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _BYTE *))(v3 + 24))(v3 + 8, v11 + 1);
      *v11 = v11[2];
      v11[v2 + 1] = v11[v2 - 1];
    }
    v12 = *(unsigned __int8 *)(*(_QWORD *)&v35[8] + 1LL);
    v13 = (unsigned __int8)**(_BYTE **)&v35[8];
    v14 = *(unsigned __int8 *)(*(_QWORD *)&v35[16] + 1LL);
    v8 = *(_QWORD *)&v35[24];
    v44 = v12;
    v15 = v2 - 1;
    if ( v15 )
    {
      v16 = (unsigned __int8 *)(*(_QWORD *)&v35[16] + 3LL);
      v17 = *(unsigned __int8 *)(*(_QWORD *)&v35[8] + 2LL);
      v38 = *(_QWORD *)v35 - *(_QWORD *)&v35[16];
      v18 = &v11[-*(_QWORD *)&v35[16]];
      v19 = *(_QWORD *)&v35[8] - *(_QWORD *)&v35[16];
      v20 = *(unsigned __int8 *)(*(_QWORD *)&v35[16] + 2LL);
      v21 = v9 + 1;
      v22 = (unsigned __int8)**(_BYTE **)&v35[16];
      v40 = *(_QWORD *)&v35[24] - *(_QWORD *)&v35[16];
      do
      {
        v23 = v17;
        v24 = v12;
        v27 = v13;
        v29 = v22;
        v13 = v12;
        v31 = v44;
        v12 = v17;
        v17 = v16[v19];
        v22 = v14;
        v14 = v20;
        v20 = *v16;
        v33 = v14;
        v44 = v12;
        if ( v24 != v23 && !(v13 ^ v14 | v12 ^ v22) )
        {
          if ( v13 ^ v17 | v12 ^ v27 | v22 ^ v20 | v14 ^ v29
            && (v28 = v16[v38 - 2],
                v30 = v16[v38 - 1],
                v45 = v16[(_QWORD)v18 - 2],
                v32 = v16[(_QWORD)v18 - 1],
                v13 ^ v45 | v22 ^ v28 | v12 ^ v32 | v14 ^ v30) )
          {
            if ( v31 < v12 )
            {
              v16[v40 - 1] = (v13 + v14 + v27 + v32 + 12 * v16[v40 - 1] + 8) >> 4;
              *v21 = (v13 + v14 + v28 + v20 + 4 * (3 * *v21 + 2)) >> 4;
            }
            else
            {
              v16[v40 - 2] = (v12 + v22 + v17 + v45 + 12 * v16[v40 - 2] + 8) >> 4;
              v21[1] = (v12 + v22 + v30 + v29 + 12 * v21[1] + 8) >> 4;
            }
          }
          else
          {
            v25 = (v16[v19 - 2] + (unsigned int)v16[v19 - 1] + 1) >> 1;
            v21[1] = v25;
            *v21 = v25;
            v16[v40 - 1] = v25;
            v16[v40 - 2] = v25;
            v14 = v33;
          }
        }
        ++v16;
        ++v21;
        --v15;
      }
      while ( v15 );
      v3 = a1;
      v8 = *(_QWORD *)&v35[24];
    }
    v5 = a2;
    v4 = v34;
    v37 = *(__m128i *)&v35[24];
  }
  else
  {
    v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  }
  if ( v5 )
    memmove(v5, (const void *)(v8 + 1), v4);
  result = v5;
  HIDWORD(Size) = v7 - 1;
  *(_OWORD *)(v3 + 480) = v41;
  *(__m128i *)(v3 + 496) = v39;
  *(__m128i *)(v3 + 512) = v37;
  *(_QWORD *)(v3 + 528) = Size;
  return result;
}
