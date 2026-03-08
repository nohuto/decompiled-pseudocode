/*
 * XREFs of FixupColorScan @ 0x1C025F804
 * Callers:
 *     GetFixupScan @ 0x1C014BF50 (GetFixupScan.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
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
  unsigned __int64 v9; // rcx
  char *v10; // r15
  __m128i v11; // xmm1
  _WORD *v12; // xmm0_8
  _WORD *v13; // rcx
  int v14; // r11d
  int v15; // esi
  int v16; // r10d
  _BYTE *v17; // rdi
  int v18; // r14d
  _DWORD *v19; // r15
  __int64 v20; // r12
  char *v21; // r13
  __int64 v22; // r9
  int v23; // ebx
  int v24; // edx
  int v25; // r8d
  int v26; // edi
  unsigned int v27; // eax
  int v28; // esi
  int v29; // r8d
  int v30; // eax
  int v31; // r8d
  int v32; // edi
  int v33; // ebx
  unsigned int v34; // eax
  int v35; // r11d
  int v36; // esi
  int v37; // r8d
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // edx
  bool v42; // zf
  void *result; // rax
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
    v9 = v7.m128i_i64[0];
    v5->m128i_i32[0] = v2 & 0xFFFFFFDF;
    v8 = HIDWORD(Size) + 1;
  }
  else
  {
    v58 = HIDWORD(a1[33].m128i_i64[0]);
    if ( SHIDWORD(Size) > 1 )
    {
      v10 = (char *)a1[30].m128i_i64[0];
      v11 = *(__m128i *)&v60[16];
      v65 = *(__m128i *)v60;
      *(_QWORD *)&v60[24] = *(_QWORD *)&v60[32];
      v64 = v11;
      *(_QWORD *)&v60[32] = v10;
      memmove(v10, *(const void **)&v60[16], (unsigned int)Size);
      v12 = (_WORD *)_mm_srli_si128(v11, 8).m128i_u64[0];
      if ( v5[3].m128i_i32[3] <= 0 )
      {
        memmove(v12, *(const void **)&v60[8], (unsigned int)Size);
      }
      else
      {
        ((void (__fastcall *)(__int64 *, __int64))v5[1].m128i_i64[1])(&v5->m128i_i64[1], (__int64)v12 + 3);
        *v12 = v12[3];
        v13 = &v12[v6];
        *((_BYTE *)v12 + 2) = *((_BYTE *)v12 + 8);
        *(_WORD *)((char *)v13 + v6 + 3) = *(_WORD *)((char *)v13 + v6 - 3);
        *((_BYTE *)v13 + v6 + 5) = *((_BYTE *)v13 + v6 - 1);
      }
      v14 = **(_DWORD **)&v60[8] & 0xFFFFFF;
      v15 = **(_DWORD **)&v60[16] & 0xFFFFFF;
      v68 = *(_DWORD *)(*(_QWORD *)&v60[16] + 6LL) & 0xFFFFFF;
      v16 = *(_DWORD *)(*(_QWORD *)&v60[8] + 6LL) & 0xFFFFFF;
      v52 = v6 - 1;
      v9 = *(_QWORD *)&v60[24];
      v49 = *(unsigned __int8 *)(*(_QWORD *)&v60[8] + 3LL)
          + 4 * (*(unsigned __int8 *)(*(_QWORD *)&v60[8] + 5LL) + 2 * *(unsigned __int8 *)(*(_QWORD *)&v60[8] + 4LL));
      if ( (_DWORD)v6 != 1 )
      {
        v17 = v10 + 5;
        v18 = *(_DWORD *)(*(_QWORD *)&v60[8] + 3LL) & 0xFFFFFF;
        v19 = (_DWORD *)(*(_QWORD *)&v60[16] + 9LL);
        v53 = v17;
        v20 = *(_QWORD *)&v60[8] - *(_QWORD *)&v60[16];
        v63 = *(_QWORD *)v60 - *(_QWORD *)&v60[16];
        v21 = (char *)v12 - *(_QWORD *)&v60[16];
        v22 = *(_QWORD *)&v60[24] - *(_QWORD *)&v60[16];
        v23 = *(_DWORD *)(*(_QWORD *)&v60[16] + 3LL) & 0xFFFFFF;
        v54 = *(_QWORD *)&v60[24] - *(_QWORD *)&v60[16];
        do
        {
          v47 = v14;
          v24 = v18;
          v45 = v15;
          v50 = v18;
          v14 = v18;
          v51 = v23;
          v18 = v16;
          v15 = v23;
          v23 = v68;
          v68 = *v19 & 0xFFFFFF;
          v16 = *(_DWORD *)((char *)v19 + v20) & 0xFFFFFF;
          v55 = v49;
          v57 = *((unsigned __int8 *)v19 + v20 - 1);
          v69 = v23;
          v49 = *((unsigned __int8 *)v19 + v20 - 3) + 4 * (v57 + 2 * *((unsigned __int8 *)v19 + v20 - 2));
          if ( v24 != v18 && !(v14 ^ v23 | v18 ^ v15) )
          {
            v48 = *(_DWORD *)((char *)v19 + v63 - 6) & 0xFFFFFF;
            v44 = *(_DWORD *)&v21[(_QWORD)v19 - 6] & 0xFFFFFF;
            v56 = *(_DWORD *)((char *)v19 + v63 - 3) & 0xFFFFFF;
            v46 = *(_DWORD *)&v21[(_QWORD)v19 - 3] & 0xFFFFFF;
            if ( v14 ^ v16 | v18 ^ v47 | v15 ^ v68 | v23 ^ v45
              && v14 ^ v44 | v15 ^ *(_DWORD *)((char *)v19 + v63 - 6) & 0xFFFFFF | v18 ^ v46 | v23 ^ *(_DWORD *)((char *)v19 + v63 - 3) & 0xFFFFFF )
            {
              if ( v55 < v49 )
              {
                v31 = *(_DWORD *)((char *)v19 + v22 - 3);
                v32 = (unsigned __int8)v23;
                v33 = (unsigned __int8)v14;
                v34 = ((unsigned __int8)v14
                     + (unsigned __int8)v21[(_QWORD)v19 - 3]
                     + 12 * (unsigned __int8)v31
                     + (unsigned int)(unsigned __int8)v47
                     + v32
                     + 8) >> 4;
                v35 = v14 & 0xFF00;
                *((_BYTE *)v19 + v22 - 3) = v34;
                v36 = v69 & 0xFF00;
                *((_BYTE *)v19 + v22 - 2) = (v35 + (v46 & 0xFF00) + 12 * (v31 & 0xFF00) + (v47 & 0xFF00u) + v36 + 2048) >> 12;
                *((_BYTE *)v19 + v54 - 1) = ((v50 & 0xFF0000)
                                           + v47
                                           + (v46 & 0xFF0000)
                                           + 12 * (v31 & 0xFF0000)
                                           + (v69 & 0xFF0000)
                                           + 0x80000) >> 20;
                v37 = *(_DWORD *)(v53 - 2);
                v38 = v32 + 8;
                v17 = v53;
                *(v53 - 2) = (v33
                            + (unsigned __int8)v68
                            + 12 * (unsigned __int8)v37
                            + (unsigned int)(unsigned __int8)v48
                            + v38) >> 4;
                *(v53 - 1) = (v35 + (v68 & 0xFF00) + 12 * (v37 & 0xFF00) + (v48 & 0xFF00u) + v36 + 2048) >> 12;
                *v53 = ((v50 & 0xFF0000) + v68 + (v48 & 0xFF0000) + 12 * (v37 & 0xFF0000) + (v69 & 0xFF0000) + 0x80000) >> 20;
              }
              else
              {
                v25 = *(_DWORD *)((char *)v19 + v22 - 6);
                v26 = (unsigned __int8)v15;
                v27 = ((unsigned __int8)v15
                     + (unsigned __int8)v16
                     + 8
                     + (unsigned __int8)v18
                     + (unsigned __int8)v21[(_QWORD)v19 - 6]
                     + 12 * (unsigned int)(unsigned __int8)v25) >> 4;
                v28 = v15 & 0xFF00;
                *((_BYTE *)v19 + v22 - 6) = v27;
                *((_BYTE *)v19 + v22 - 5) = (v28
                                           + (v16 & 0xFF00)
                                           + 2048
                                           + (v18 & 0xFF00)
                                           + (v44 & 0xFF00)
                                           + 12 * (v25 & 0xFF00u)) >> 12;
                *((_BYTE *)v19 + v54 - 4) = ((v51 & 0xFF0000)
                                           + (v18 & 0xFF0000)
                                           + (v44 & 0xFF0000)
                                           + 12 * (v25 & 0xFF0000)
                                           + v16
                                           + 0x80000) >> 20;
                v29 = *(_DWORD *)(v53 + 1);
                v30 = v26 + 8;
                v17 = v53;
                v53[1] = ((unsigned __int8)v18
                        + (unsigned __int8)v45
                        + 12 * (unsigned __int8)v29
                        + (unsigned int)(unsigned __int8)v56
                        + v30) >> 4;
                v53[2] = ((v18 & 0xFF00) + (v45 & 0xFF00) + 12 * (v29 & 0xFF00) + (v56 & 0xFF00u) + v28 + 2048) >> 12;
                v53[3] = ((v51 & 0xFF0000) + (v18 & 0xFF0000) + (v56 & 0xFF0000) + 12 * (v29 & 0xFF0000) + v45 + 0x80000) >> 20;
              }
              v22 = *(_QWORD *)&v60[24] - *(_QWORD *)&v60[16];
              v14 = v50;
              v15 = v51;
              v23 = v69;
            }
            else
            {
              v39 = ((unsigned int)*((unsigned __int8 *)v19 + v20 - 4) + v57 + 1) >> 1;
              v17[3] = v39;
              *v17 = v39;
              *((_BYTE *)v19 + v22 - 1) = v39;
              *((_BYTE *)v19 + v22 - 4) = v39;
              v40 = (*((unsigned __int8 *)v19 + v20 - 5) + 1 + (unsigned int)*((unsigned __int8 *)v19 + v20 - 2)) >> 1;
              v17[2] = v40;
              *(v17 - 1) = v40;
              *((_BYTE *)v19 + v22 - 2) = v40;
              *((_BYTE *)v19 + v22 - 5) = v40;
              v41 = (*((unsigned __int8 *)v19 + v20 - 6) + (unsigned int)*((unsigned __int8 *)v19 + v20 - 3) + 1) >> 1;
              v17[1] = v41;
              *(v17 - 2) = v41;
              *((_BYTE *)v19 + v22 - 3) = v41;
              *((_BYTE *)v19 + v22 - 6) = v41;
            }
          }
          v17 += 3;
          v19 = (_DWORD *)((char *)v19 + 3);
          v42 = v52-- == 1;
          v53 = v17;
        }
        while ( !v42 );
        v5 = a1;
        v9 = *(_QWORD *)&v60[24];
      }
      v8 = v58;
      v3 = a2;
      v4 = v59;
      v62 = *(__m128i *)&v60[24];
    }
    else
    {
      v9 = _mm_srli_si128(v7, 8).m128i_u64[0];
    }
  }
  if ( v3 )
    memmove(v3, (const void *)(v9 + 3), v4);
  result = v3;
  HIDWORD(Size) = v8 - 1;
  v5[30] = v65;
  v5[31] = v64;
  v5[32] = v62;
  v5[33].m128i_i64[0] = Size;
  return result;
}
