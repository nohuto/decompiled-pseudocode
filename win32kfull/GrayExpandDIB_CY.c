/*
 * XREFs of GrayExpandDIB_CY @ 0x1C02640E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GetFixupScan @ 0x1C014BF50 (GetFixupScan.c)
 *     AlphaBlendBGRF @ 0x1C0260824 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0265A54 (MappingBGRF.c)
 */

__int64 __fastcall GrayExpandDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int8 *v15; // r15
  __int64 v16; // rax
  unsigned __int8 *v17; // rdi
  const void *v18; // r14
  char *v19; // rsi
  size_t v20; // r13
  __int64 v21; // rbx
  void *FixupScan; // rax
  void *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // esi
  int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // r12d
  int v29; // eax
  __int128 v30; // xmm0
  unsigned __int8 *v31; // r13
  _BYTE *v32; // xmm1_8
  _BYTE *v33; // rbx
  const void *v34; // r14
  void *v35; // rax
  signed __int64 v36; // r14
  int v37; // ecx
  __int64 *v38; // rdx
  int v39; // eax
  unsigned __int16 v40; // si
  __int64 v41; // xmm0_8
  unsigned __int8 *v42; // r14
  _BYTE *v43; // xmm1_8
  _BYTE *v44; // rbx
  void *v45; // rax
  int v46; // ecx
  unsigned __int64 v47; // r9
  __int64 v48; // rdx
  unsigned __int8 *v49; // r14
  int v50; // ecx
  unsigned __int8 *v51; // r11
  _WORD *v52; // r8
  int v53; // ebx
  int v54; // r10d
  int *v55; // r9
  int v56; // r11d
  int v57; // edx
  __int64 v58; // rax
  int *v59; // r9
  int v60; // r11d
  __int64 v61; // rcx
  int v62; // edx
  __int64 v63; // rax
  int *v64; // r9
  int v65; // r10d
  __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rax
  __int16 v70; // ax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v74; // [rsp+58h] [rbp-B0h]
  __m256i v75; // [rsp+68h] [rbp-A0h]
  __int64 v76; // [rsp+88h] [rbp-80h]
  size_t Size; // [rsp+90h] [rbp-78h]
  int v78; // [rsp+A0h] [rbp-68h]
  __int64 *v79; // [rsp+A8h] [rbp-60h]
  int v80[34]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v81; // [rsp+140h] [rbp+38h]
  int v82; // [rsp+148h] [rbp+40h]
  unsigned int v83; // [rsp+14Ch] [rbp+44h]
  int v84; // [rsp+154h] [rbp+4Ch]
  void (__fastcall *v85)(int *, __int64, _WORD *, unsigned __int64); // [rsp+178h] [rbp+70h]
  void (__fastcall *v86)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1C8h] [rbp+C0h]
  __int64 v87; // [rsp+1D0h] [rbp+C8h]
  void (__fastcall *v88)(__int64, void *, const void *, __int64, int); // [rsp+1D8h] [rbp+D0h]
  __int64 v89; // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F0h] [rbp+E8h]
  __int64 v91; // [rsp+238h] [rbp+130h]
  __int64 v92; // [rsp+240h] [rbp+138h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  __int64 v94; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  int v96; // [rsp+268h] [rbp+160h]
  int v97; // [rsp+26Ch] [rbp+164h]
  int v98; // [rsp+270h] [rbp+168h]
  __int64 v99; // [rsp+278h] [rbp+170h]
  __int64 v100; // [rsp+280h] [rbp+178h]
  __int64 v101; // [rsp+288h] [rbp+180h]
  int v102; // [rsp+290h] [rbp+188h]
  void *v103; // [rsp+2D0h] [rbp+1C8h]
  __int64 v104; // [rsp+2D8h] [rbp+1D0h]
  __int64 v105; // [rsp+2E0h] [rbp+1D8h]
  __int64 v106; // [rsp+2E8h] [rbp+1E0h]
  __int64 v107; // [rsp+2F0h] [rbp+1E8h]
  _WORD *v108; // [rsp+2F8h] [rbp+1F0h]
  _WORD *v109; // [rsp+300h] [rbp+1F8h]
  int v110; // [rsp+308h] [rbp+200h]

  v1 = 4LL;
  v2 = v80;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = *(unsigned __int8 **)(v90 + 32);
  v16 = v82 + 6;
  v17 = v15 + 4099;
  v75.m256i_i64[0] = (__int64)&v15[v16 + 4099];
  v75.m256i_i64[1] = v16 + v75.m256i_i64[0];
  v75.m256i_i64[2] = v16 + v16 + v75.m256i_i64[0];
  v18 = (const void *)(v16 + v75.m256i_i64[2]);
  v19 = (char *)(v16 + v16 + v75.m256i_i64[2]);
  v75.m256i_i64[3] = v16 + v75.m256i_i64[2];
  v76 = (__int64)v19;
  v20 = v82;
  Size = v82;
  v21 = v16 + v75.m256i_i64[2] + v82;
  FixupScan = GetFixupScan((__int64)v80, v103);
  v88(v89, FixupScan, v18, v21, 1);
  if ( (*(_BYTE *)(v90 + 8) & 1) != 0 )
  {
    v23 = GetFixupScan((__int64)v80, v103);
    v88(v89, v23, v19, (__int64)&v19[v20], 1);
  }
  else
  {
    memmove(v19, v18, v20);
  }
  v24 = v90;
  v25 = *(unsigned __int16 *)(v90 + 12);
  v26 = v25 & 0xF;
  v27 = v25 >> 4;
  v28 = v26 + v27;
  if ( v26 + v27 )
  {
    do
    {
      v29 = v27;
      --v28;
      v30 = *(_OWORD *)v75.m256i_i8;
      v31 = &v17[v20];
      --v27;
      v75.m256i_i64[1] = v75.m256i_i64[2];
      v32 = (_BYTE *)_mm_srli_si128(*(__m128i *)&v75.m256i_u64[2], 8).m128i_u64[0];
      v75.m256i_i64[2] = (__int64)v32;
      v33 = v32;
      v75.m256i_i64[0] = *((_QWORD *)&v30 + 1);
      v75.m256i_i64[3] = v76;
      v34 = (const void *)v76;
      v76 = (__int64)v17;
      if ( v29 <= 0 )
      {
        v35 = GetFixupScan((__int64)v80, v103);
        v88(v89, v35, v17, (__int64)v31, 1);
      }
      else
      {
        memmove(v17, v34, Size);
      }
      if ( (v80[0] & 0x200) != 0 )
      {
        v20 = Size;
        memmove(v32, v34, Size);
      }
      else
      {
        v36 = (_BYTE *)v34 - v32;
        do
        {
          v37 = (6 * (unsigned __int8)v33[v36] - *v17 - (unsigned __int8)*v33) >> 2;
          if ( (v37 & 0xFF00) != 0 )
            LOBYTE(v37) = ~HIBYTE(v37);
          *v33 = v37;
          ++v17;
          ++v33;
        }
        while ( v17 < v31 );
        v20 = Size;
      }
      v17 = (unsigned __int8 *)v30;
    }
    while ( v28 );
    v24 = v90;
  }
  v38 = *(__int64 **)(v24 + 40);
  v39 = *(_DWORD *)(v24 + 16);
  while ( v39 )
  {
    v78 = v39 - 1;
    v74 = *v38;
    v79 = v38 + 1;
    v40 = *v38;
    if ( (v40 & 0x8000u) != 0 )
    {
      v41 = v75.m256i_i64[0];
      v42 = &v17[v20];
      v43 = (_BYTE *)_mm_srli_si128(*(__m128i *)&v75.m256i_u64[2], 8).m128i_u64[0];
      *(_OWORD *)v75.m256i_i8 = *(_OWORD *)&v75.m256i_u64[1];
      v44 = v43;
      v75.m256i_i64[3] = v76;
      v75.m256i_i64[2] = (__int64)v43;
      v76 = (__int64)v17;
      v45 = GetFixupScan((__int64)v80, v103);
      v88(v89, v45, v17, (__int64)&v17[v20], 1);
      if ( (v80[0] & 0x200) != 0 )
      {
        memmove(v43, (const void *)v75.m256i_i64[3], v20);
      }
      else
      {
        do
        {
          v46 = (6 * (unsigned __int8)v44[v75.m256i_i64[3] - (_QWORD)v43] - *v17 - (unsigned __int8)*v44) >> 2;
          if ( (v46 & 0xFF00) != 0 )
            LOBYTE(v46) = ~HIBYTE(v46);
          *v44 = v46;
          ++v17;
          ++v44;
        }
        while ( v17 < v42 );
      }
      v17 = (unsigned __int8 *)v41;
      v40 &= 0x3FFFu;
    }
    v47 = (unsigned __int64)v15;
    v48 = HIWORD(v74);
    v49 = (unsigned __int8 *)v75.m256i_i64[2];
    v50 = -WORD2(v74);
    v51 = (unsigned __int8 *)v75.m256i_i64[1];
    v52 = v108;
    v53 = -v40;
    v54 = -WORD1(v74);
    if ( v40 )
    {
      v55 = (int *)(v15 + 2048);
      v56 = 256 - HIWORD(v74);
      do
      {
        v53 += v40;
        v54 += WORD1(v74);
        v50 += WORD2(v74);
        *(v55 - 512) = v53;
        v56 += HIWORD(v74);
        *(v55 - 256) = v54;
        *v55 = v50;
        v55[256] = v56;
        ++v55;
      }
      while ( v55 - 512 < (int *)v15 + 256 );
      v47 = v75.m256i_i64[0];
      do
      {
        v57 = *(_DWORD *)&v15[4 * v17[v47 - v75.m256i_i64[0]]]
            + *(_DWORD *)&v15[4 * *(unsigned __int8 *)(v47 + v75.m256i_i64[1] - v75.m256i_i64[0]) + 2048]
            + *(_DWORD *)&v15[4 * *(unsigned __int8 *)(v47 + v75.m256i_i64[2] - v75.m256i_i64[0]) + 3072];
        v58 = *(unsigned __int8 *)v47++;
        v48 = (unsigned int)((*(_DWORD *)&v15[4 * v58 + 1024] + v57) >> 5);
        *v52 = v48;
        v52 = (_WORD *)((char *)v52 + v110);
      }
      while ( v52 != v109 );
    }
    else if ( WORD1(v74) )
    {
      v59 = (int *)(v15 + 2048);
      v60 = 256 - HIWORD(v74);
      do
      {
        v54 += WORD1(v74);
        v50 += WORD2(v74);
        v60 += HIWORD(v74);
        *(v59 - 256) = v54;
        *v59 = v50;
        v59[256] = v60;
        ++v59;
      }
      while ( v59 - 512 < (int *)v15 + 256 );
      v47 = v75.m256i_i64[0];
      do
      {
        v61 = *(unsigned __int8 *)(v47 + v75.m256i_i64[1] - v75.m256i_i64[0]);
        v62 = *(_DWORD *)&v15[4 * *(unsigned __int8 *)(v47 + v75.m256i_i64[2] - v75.m256i_i64[0]) + 3072];
        v63 = *(unsigned __int8 *)v47++;
        v48 = (unsigned int)((*(_DWORD *)&v15[4 * v63 + 1024] + *(_DWORD *)&v15[4 * v61 + 2048] + v62) >> 5);
        *v52 = v48;
        v52 = (_WORD *)((char *)v52 + v110);
      }
      while ( v52 != v109 );
    }
    else if ( WORD2(v74) )
    {
      v64 = (int *)(v15 + 3072);
      v65 = 256 - HIWORD(v74);
      do
      {
        v50 += WORD2(v74);
        v65 += HIWORD(v74);
        *(v64 - 256) = v50;
        *v64++ = v65;
      }
      while ( v64 - 768 < (int *)v15 + 256 );
      v47 = v75.m256i_i64[2] - v75.m256i_i64[1];
      do
      {
        v66 = v51[v47];
        v67 = *v51++;
        v48 = (unsigned int)((*(_DWORD *)&v15[4 * v67 + 2048] + *(_DWORD *)&v15[4 * v66 + 3072]) >> 5);
        *v52 = v48;
        v52 = (_WORD *)((char *)v52 + v110);
      }
      while ( v52 != v109 );
    }
    else
    {
      v68 = 256 - HIWORD(v74);
      do
      {
        v68 += HIWORD(v74);
        *(_DWORD *)(v47 + 3072) = v68;
        v47 += 4LL;
      }
      while ( v47 < (unsigned __int64)(v15 + 1024) );
      do
      {
        v69 = *v49++;
        *v52 = *(int *)&v15[4 * v69 + 3072] >> 5;
        v52 = (_WORD *)((char *)v52 + v110);
      }
      while ( v52 != v109 );
    }
    v70 = v80[0];
    if ( SLOBYTE(v80[0]) < 0 )
    {
      v85(v80, v48, v52, v47);
      v70 = v80[0];
    }
    if ( (v70 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v80);
      LOBYTE(v70) = v80[0];
    }
    if ( (v70 & 0x10) != 0 )
    {
      MappingBGRF(v104, v105, v92, v99);
      v71 = v102 + v99;
      if ( v71 == v100 )
        v71 = v101;
      v99 = v71;
    }
    v86(v80, v106, v107, v81, v91, v93, v93 + v97, v98, v87);
    v20 = Size;
    v72 = v96 + v93;
    if ( v72 == v94 )
      v72 = v95;
    v81 += v84;
    v39 = v78;
    v38 = v79;
    v93 = v72;
  }
  return v83;
}
