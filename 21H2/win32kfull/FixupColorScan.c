/*
 * XREFs of FixupColorScan @ 0x1C01517E8
 * Callers:
 *     GetFixupScan @ 0x1C00C79F0 (GetFixupScan.c)
 *     RepDIB_CY @ 0x1C013AD20 (RepDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

void *__fastcall FixupColorScan(__m128i *a1, void *a2)
{
  int v2; // eax
  void *v3; // rsi
  unsigned int v4; // edx
  __m128i *v5; // r14
  __int64 v6; // rdi
  __m128i v7; // xmm1
  int v8; // ebx
  char *v9; // r15
  __m128i v10; // xmm1
  _WORD *v11; // xmm0_8
  _WORD *v12; // rcx
  int v13; // r11d
  int v14; // esi
  int v15; // r10d
  unsigned __int64 v16; // rcx
  _BYTE *v17; // rdi
  int v18; // r14d
  _DWORD *v19; // r15
  __int64 v20; // r12
  char *v21; // r13
  __int64 v22; // r9
  int v23; // ebx
  int v24; // edx
  bool v25; // zf
  void *result; // rax
  int v27; // r8d
  int v28; // edi
  unsigned int v29; // eax
  int v30; // esi
  int v31; // r8d
  int v32; // eax
  int v33; // r8d
  int v34; // edi
  int v35; // ebx
  unsigned int v36; // eax
  int v37; // r11d
  int v38; // esi
  int v39; // r8d
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // edx
  int v44; // [rsp+20h] [rbp-A9h]
  int v45; // [rsp+24h] [rbp-A5h]
  int v46; // [rsp+28h] [rbp-A1h]
  int v47; // [rsp+2Ch] [rbp-9Dh]
  int v48; // [rsp+30h] [rbp-99h]
  unsigned int v49; // [rsp+34h] [rbp-95h]
  int v50; // [rsp+3Ch] [rbp-8Dh]
  int v51; // [rsp+40h] [rbp-89h]
  int v52; // [rsp+44h] [rbp-85h]
  _BYTE *v53; // [rsp+48h] [rbp-81h]
  __int64 v54; // [rsp+50h] [rbp-79h]
  unsigned int v55; // [rsp+58h] [rbp-71h]
  int v56; // [rsp+5Ch] [rbp-6Dh]
  int v57; // [rsp+60h] [rbp-69h]
  int v58; // [rsp+64h] [rbp-65h]
  unsigned int v59; // [rsp+68h] [rbp-61h]
  _BYTE v60[40]; // [rsp+78h] [rbp-51h]
  size_t Size; // [rsp+A0h] [rbp-29h]
  __m128i v62; // [rsp+A8h] [rbp-21h]
  __int64 v63; // [rsp+A8h] [rbp-21h]
  __m128i v64; // [rsp+B8h] [rbp-11h]
  __m128i v65; // [rsp+C8h] [rbp-1h]
  int v68; // [rsp+140h] [rbp+77h]
  int v69; // [rsp+148h] [rbp+7Fh]

  v2 = a1->m128i_i32[0];
  v3 = a2;
  v4 = a1[4].m128i_u32[0];
  v5 = a1;
  v6 = a1[3].m128i_u32[2];
  v59 = v4;
  v7 = a1[32];
  v65 = a1[30];
  *(_QWORD *)v60 = a1[30].m128i_i64[1];
  v62 = v7;
  v64 = a1[31];
  *(__m128i *)&v60[8] = v64;
  Size = a1[33].m128i_u64[0];
  v8 = HIDWORD(Size);
  *(__m128i *)&v60[24] = v7;
  if ( (a1->m128i_i32[0] & 0x20) != 0 )
  {
    v16 = v7.m128i_i64[0];
    v5->m128i_i32[0] = v2 & 0xFFFFFFDF;
    v8 = HIDWORD(Size) + 1;
  }
  else
  {
    v58 = HIDWORD(a1[33].m128i_i64[0]);
    if ( SHIDWORD(Size) <= 1 )
    {
      v16 = _mm_srli_si128(v7, 8).m128i_u64[0];
    }
    else
    {
      v9 = (char *)a1[30].m128i_i64[0];
      v10 = *(__m128i *)&v60[16];
      v65 = *(__m128i *)v60;
      *(_QWORD *)&v60[24] = *(_QWORD *)&v60[32];
      v64 = v10;
      *(_QWORD *)&v60[32] = v9;
      memmove(v9, *(const void **)&v60[16], (unsigned int)Size);
      v11 = (_WORD *)_mm_srli_si128(v10, 8).m128i_u64[0];
      if ( v5[3].m128i_i32[3] <= 0 )
      {
        memmove(v11, *(const void **)&v60[8], (unsigned int)Size);
      }
      else
      {
        ((void (__fastcall *)(__int64 *, __int64))v5[1].m128i_i64[1])(&v5->m128i_i64[1], (__int64)v11 + 3);
        *v11 = v11[3];
        v12 = &v11[v6];
        *((_BYTE *)v11 + 2) = *((_BYTE *)v11 + 8);
        *(_WORD *)((char *)v12 + v6 + 3) = *(_WORD *)((char *)v12 + v6 - 3);
        *((_BYTE *)v12 + v6 + 5) = *((_BYTE *)v12 + v6 - 1);
      }
      v13 = **(_DWORD **)&v60[8] & 0xFFFFFF;
      v14 = **(_DWORD **)&v60[16] & 0xFFFFFF;
      v68 = *(_DWORD *)(*(_QWORD *)&v60[16] + 6LL) & 0xFFFFFF;
      v15 = *(_DWORD *)(*(_QWORD *)&v60[8] + 6LL) & 0xFFFFFF;
      v52 = v6 - 1;
      v16 = *(_QWORD *)&v60[24];
      v49 = *(unsigned __int8 *)(*(_QWORD *)&v60[8] + 3LL)
          + 4 * (*(unsigned __int8 *)(*(_QWORD *)&v60[8] + 5LL) + 2 * *(unsigned __int8 *)(*(_QWORD *)&v60[8] + 4LL));
      if ( (_DWORD)v6 != 1 )
      {
        v17 = v9 + 5;
        v18 = *(_DWORD *)(*(_QWORD *)&v60[8] + 3LL) & 0xFFFFFF;
        v19 = (_DWORD *)(*(_QWORD *)&v60[16] + 9LL);
        v53 = v17;
        v20 = *(_QWORD *)&v60[8] - *(_QWORD *)&v60[16];
        v63 = *(_QWORD *)v60 - *(_QWORD *)&v60[16];
        v21 = (char *)v11 - *(_QWORD *)&v60[16];
        v22 = *(_QWORD *)&v60[24] - *(_QWORD *)&v60[16];
        v23 = *(_DWORD *)(*(_QWORD *)&v60[16] + 3LL) & 0xFFFFFF;
        v54 = *(_QWORD *)&v60[24] - *(_QWORD *)&v60[16];
        do
        {
          v47 = v13;
          v24 = v18;
          v45 = v14;
          v50 = v18;
          v13 = v18;
          v51 = v23;
          v18 = v15;
          v14 = v23;
          v23 = v68;
          v68 = *v19 & 0xFFFFFF;
          v15 = *(_DWORD *)((char *)v19 + v20) & 0xFFFFFF;
          v55 = v49;
          v57 = *((unsigned __int8 *)v19 + v20 - 1);
          v69 = v23;
          v49 = *((unsigned __int8 *)v19 + v20 - 3) + 4 * (v57 + 2 * *((unsigned __int8 *)v19 + v20 - 2));
          if ( v24 != v18 && !(v13 ^ v23 | v18 ^ v14) )
          {
            v48 = *(_DWORD *)((char *)v19 + v63 - 6) & 0xFFFFFF;
            v44 = *(_DWORD *)&v21[(_QWORD)v19 - 6] & 0xFFFFFF;
            v56 = *(_DWORD *)((char *)v19 + v63 - 3) & 0xFFFFFF;
            v46 = *(_DWORD *)&v21[(_QWORD)v19 - 3] & 0xFFFFFF;
            if ( v13 ^ v15 | v18 ^ v47 | v14 ^ v68 | v23 ^ v45
              && v13 ^ v44 | v14 ^ *(_DWORD *)((char *)v19 + v63 - 6) & 0xFFFFFF | v18 ^ v46 | v23 ^ *(_DWORD *)((char *)v19 + v63 - 3) & 0xFFFFFF )
            {
              if ( v55 < v49 )
              {
                v33 = *(_DWORD *)((char *)v19 + v22 - 3);
                v34 = (unsigned __int8)v23;
                v35 = (unsigned __int8)v13;
                v36 = ((unsigned __int8)v13
                     + (unsigned __int8)v21[(_QWORD)v19 - 3]
                     + 12 * (unsigned __int8)v33
                     + (unsigned int)(unsigned __int8)v47
                     + v34
                     + 8) >> 4;
                v37 = v13 & 0xFF00;
                *((_BYTE *)v19 + v22 - 3) = v36;
                v38 = v69 & 0xFF00;
                *((_BYTE *)v19 + v22 - 2) = (v37 + (v46 & 0xFF00) + 12 * (v33 & 0xFF00) + (v47 & 0xFF00u) + v38 + 2048) >> 12;
                *((_BYTE *)v19 + v54 - 1) = ((v50 & 0xFF0000)
                                           + v47
                                           + (v46 & 0xFF0000)
                                           + 12 * (v33 & 0xFF0000)
                                           + (v69 & 0xFF0000)
                                           + 0x80000) >> 20;
                v39 = *(_DWORD *)(v53 - 2);
                v40 = v34 + 8;
                v17 = v53;
                *(v53 - 2) = (v35
                            + (unsigned __int8)v68
                            + 12 * (unsigned __int8)v39
                            + (unsigned int)(unsigned __int8)v48
                            + v40) >> 4;
                *(v53 - 1) = (v37 + (v68 & 0xFF00) + 12 * (v39 & 0xFF00) + (v48 & 0xFF00u) + v38 + 2048) >> 12;
                *v53 = ((v50 & 0xFF0000) + v68 + (v48 & 0xFF0000) + 12 * (v39 & 0xFF0000) + (v69 & 0xFF0000) + 0x80000) >> 20;
              }
              else
              {
                v27 = *(_DWORD *)((char *)v19 + v22 - 6);
                v28 = (unsigned __int8)v14;
                v29 = ((unsigned __int8)v14
                     + (unsigned __int8)v15
                     + 8
                     + (unsigned __int8)v18
                     + (unsigned __int8)v21[(_QWORD)v19 - 6]
                     + 12 * (unsigned int)(unsigned __int8)v27) >> 4;
                v30 = v14 & 0xFF00;
                *((_BYTE *)v19 + v22 - 6) = v29;
                *((_BYTE *)v19 + v22 - 5) = (v30
                                           + (v15 & 0xFF00)
                                           + 2048
                                           + (v18 & 0xFF00)
                                           + (v44 & 0xFF00)
                                           + 12 * (v27 & 0xFF00u)) >> 12;
                *((_BYTE *)v19 + v54 - 4) = ((v51 & 0xFF0000)
                                           + (v18 & 0xFF0000)
                                           + (v44 & 0xFF0000)
                                           + 12 * (v27 & 0xFF0000)
                                           + v15
                                           + 0x80000) >> 20;
                v31 = *(_DWORD *)(v53 + 1);
                v32 = v28 + 8;
                v17 = v53;
                v53[1] = ((unsigned __int8)v18
                        + (unsigned __int8)v45
                        + 12 * (unsigned __int8)v31
                        + (unsigned int)(unsigned __int8)v56
                        + v32) >> 4;
                v53[2] = ((v18 & 0xFF00) + (v45 & 0xFF00) + 12 * (v31 & 0xFF00) + (v56 & 0xFF00u) + v30 + 2048) >> 12;
                v53[3] = ((v51 & 0xFF0000) + (v18 & 0xFF0000) + (v56 & 0xFF0000) + 12 * (v31 & 0xFF0000) + v45 + 0x80000) >> 20;
              }
              v22 = *(_QWORD *)&v60[24] - *(_QWORD *)&v60[16];
              v13 = v50;
              v14 = v51;
              v23 = v69;
            }
            else
            {
              v41 = ((unsigned int)*((unsigned __int8 *)v19 + v20 - 4) + v57 + 1) >> 1;
              v17[3] = v41;
              *v17 = v41;
              *((_BYTE *)v19 + v22 - 1) = v41;
              *((_BYTE *)v19 + v22 - 4) = v41;
              v42 = (*((unsigned __int8 *)v19 + v20 - 5) + 1 + (unsigned int)*((unsigned __int8 *)v19 + v20 - 2)) >> 1;
              v17[2] = v42;
              *(v17 - 1) = v42;
              *((_BYTE *)v19 + v22 - 2) = v42;
              *((_BYTE *)v19 + v22 - 5) = v42;
              v43 = (*((unsigned __int8 *)v19 + v20 - 6) + (unsigned int)*((unsigned __int8 *)v19 + v20 - 3) + 1) >> 1;
              v17[1] = v43;
              *(v17 - 2) = v43;
              *((_BYTE *)v19 + v22 - 3) = v43;
              *((_BYTE *)v19 + v22 - 6) = v43;
            }
          }
          v17 += 3;
          v19 = (_DWORD *)((char *)v19 + 3);
          v25 = v52-- == 1;
          v53 = v17;
        }
        while ( !v25 );
        v5 = a1;
        v16 = *(_QWORD *)&v60[24];
      }
      v8 = v58;
      v3 = a2;
      v4 = v59;
      v62 = *(__m128i *)&v60[24];
    }
  }
  if ( v3 )
    memmove(v3, (const void *)(v16 + 3), v4);
  result = v3;
  HIDWORD(Size) = v8 - 1;
  v5[30] = v65;
  v5[31] = v64;
  v5[32] = v62;
  v5[33].m128i_i64[0] = Size;
  return result;
}
