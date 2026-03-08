/*
 * XREFs of RtlpComputeCrcInternal @ 0x1403B8710
 * Callers:
 *     RtlCrc64 @ 0x1403B86F0 (RtlCrc64.c)
 *     RtlCrc32 @ 0x14045BD70 (RtlCrc32.c)
 *     PopEnsureErratumSubscribed @ 0x14058B594 (PopEnsureErratumSubscribed.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CD074 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CD258 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpComputeCrcInternal(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r13
  __int64 v6; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // rbx
  unsigned __int64 v61; // rdx
  char v62; // al
  char v63; // cl

  v4 = a4;
  v5 = 0LL;
  v6 = *(_QWORD *)(a4 + 32);
  v8 = a3 ^ v6;
  v9 = a1;
  v10 = -(int)a1 & 7;
  if ( (-(int)a1 & 7) != 0 )
  {
    v61 = 0LL;
    if ( v10 > a2 )
      v10 = a2;
    if ( v10 )
    {
      do
      {
        v62 = *(_BYTE *)(v61 + a1);
        ++v61;
        v8 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL * (unsigned __int8)(v8 ^ v62)) ^ (v8 >> 8);
      }
      while ( v61 < v10 );
    }
    a2 -= v10;
    v9 = v10 + a1;
  }
  v11 = a2 - (a2 & 0x1F);
  if ( v11 >= 0x40 )
  {
    a2 &= 0x1Fu;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = v11 + v9 - 32;
    if ( v9 < v15 )
    {
      v16 = *(_QWORD *)(v4 + 16);
      do
      {
        _mm_prefetch((const char *)(v9 + 256), 2);
        v17 = *(_QWORD *)(v9 + 8) ^ v14;
        v18 = *(_QWORD *)v9 ^ v8;
        v19 = *(_QWORD *)(v9 + 16) ^ v13;
        v20 = *(_QWORD *)(v9 + 24) ^ v12;
        v21 = (unsigned __int8)v18;
        v18 >>= 8;
        v22 = *(_QWORD *)(v16 + 8 * v21 + 14336);
        v23 = (unsigned __int8)v18;
        v18 >>= 8;
        v24 = *(_QWORD *)(v16 + 8 * v23 + 12288) ^ v22;
        v25 = (unsigned __int8)v18;
        v18 >>= 8;
        v26 = *(_QWORD *)(v16 + 8 * v25 + 10240) ^ v24;
        v27 = (unsigned __int8)v18;
        v18 >>= 8;
        v9 += 32LL;
        v8 = *(_QWORD *)(v16 + 8 * (v18 >> 24)) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v18) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v18) + 4096) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v18 + 6144) ^ *(_QWORD *)(v16 + 8 * v27 + 0x2000) ^ v26;
        v14 = *(_QWORD *)(v16 + 8 * HIBYTE(v17)) ^ *(_QWORD *)(v16 + 8LL * BYTE6(v17) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE5(v17) + 4096) ^ *(_QWORD *)(v16 + 8LL * BYTE4(v17) + 6144) ^ *(_QWORD *)(v16 + 8LL * BYTE3(v17) + 0x2000) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v17) + 10240) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v17) + 12288) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v17 + 14336);
        v13 = *(_QWORD *)(v16 + 8 * HIBYTE(v19)) ^ *(_QWORD *)(v16 + 8LL * BYTE6(v19) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE5(v19) + 4096) ^ *(_QWORD *)(v16 + 8LL * BYTE4(v19) + 6144) ^ *(_QWORD *)(v16 + 8LL * BYTE3(v19) + 0x2000) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v19) + 10240) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v19) + 12288) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v19 + 14336);
        v12 = *(_QWORD *)(v16 + 8 * HIBYTE(v20)) ^ *(_QWORD *)(v16 + 8LL * BYTE6(v20) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE5(v20) + 4096) ^ *(_QWORD *)(v16 + 8LL * BYTE4(v20) + 6144) ^ *(_QWORD *)(v16 + 8LL * BYTE3(v20) + 0x2000) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v20) + 10240) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v20) + 12288) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v20 + 14336);
      }
      while ( v9 < v15 );
      v4 = a4;
    }
    v28 = *(_QWORD *)(v4 + 8);
    v29 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)(*(_BYTE *)v9 ^ v8)) ^ ((*(_QWORD *)v9 ^ v8) >> 8);
    v30 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v29) ^ (v29 >> 8);
    v31 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v30) ^ (v30 >> 8);
    v32 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v31) ^ (v31 >> 8);
    v33 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v32) ^ (v32 >> 8);
    v34 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v33) ^ (v33 >> 8);
    v35 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v34) ^ (v34 >> 8);
    v36 = v14 ^ *(_QWORD *)(v9 + 8) ^ *(_QWORD *)(v28 + 8LL * (unsigned __int8)v35) ^ (v35 >> 8);
    v37 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v36) ^ (v36 >> 8);
    v38 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v37) ^ (v37 >> 8);
    v39 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v38) ^ (v38 >> 8);
    v40 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v39) ^ (v39 >> 8);
    v41 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v40) ^ (v40 >> 8);
    v42 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v41) ^ (v41 >> 8);
    v43 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v42) ^ (v42 >> 8);
    v44 = v13 ^ *(_QWORD *)(v9 + 16) ^ *(_QWORD *)(v28 + 8LL * (unsigned __int8)v43) ^ (v43 >> 8);
    v45 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v44) ^ (v44 >> 8);
    v46 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v45) ^ (v45 >> 8);
    v47 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v46) ^ (v46 >> 8);
    v48 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v47) ^ (v47 >> 8);
    v49 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v48) ^ (v48 >> 8);
    v50 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v49) ^ (v49 >> 8);
    v51 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v50) ^ (v50 >> 8);
    v52 = v12 ^ *(_QWORD *)(v9 + 24) ^ *(_QWORD *)(v28 + 8LL * (unsigned __int8)v51) ^ (v51 >> 8);
    v53 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v52) ^ (v52 >> 8);
    v54 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v53) ^ (v53 >> 8);
    v55 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v54) ^ (v54 >> 8);
    v56 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v55) ^ (v55 >> 8);
    v57 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v56) ^ (v56 >> 8);
    v58 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v57) ^ (v57 >> 8);
    v59 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v58) ^ (v58 >> 8);
    v8 = *(_QWORD *)(v28 + 8LL * (unsigned __int8)v59) ^ (v59 >> 8);
    v9 += 32LL;
  }
  if ( a2 )
  {
    do
    {
      v63 = *(_BYTE *)(v9 + v5++);
      v8 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL * (unsigned __int8)(v8 ^ v63)) ^ (v8 >> 8);
    }
    while ( v5 < a2 );
  }
  return v8 ^ v6;
}
