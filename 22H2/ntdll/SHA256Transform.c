/*
 * XREFs of SHA256Transform @ 0x1800405B8
 * Callers:
 *     SHA256Update @ 0x180040498 (SHA256Update.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

__int64 __fastcall SHA256Transform(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  int v7; // r11d
  int v8; // ebx
  int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  int v12; // edi
  int v13; // esi
  int v14; // r9d
  __int64 v15; // r14
  int v16; // r8d
  int v17; // r12d
  __int64 v18; // r14
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r14
  int v22; // r8d
  int v23; // r15d
  int v24; // esi
  int v25; // r8d
  __int64 v26; // r14
  int v27; // r8d
  int v28; // ebx
  int v29; // edi
  int v30; // r8d
  __int64 v31; // r14
  int v32; // r8d
  int v33; // r11d
  int v34; // r13d
  int v35; // r8d
  __int64 v36; // r14
  int v37; // r8d
  __int64 v38; // r14
  int v39; // r8d
  int v40; // r8d
  __int64 v41; // r14
  int v42; // r8d
  int v43; // r8d
  __int64 result; // rax
  bool v45; // cf
  _DWORD *v46; // r14
  unsigned int v47; // edx
  int v48; // r14d
  unsigned int v49; // esi
  __int64 v50; // r9
  __int64 v51; // rbx
  unsigned int v52; // ecx
  int v53; // eax
  __int64 v54; // rdi
  int v55; // edx
  int v56; // r12d
  int v57; // r10d
  int v58; // ecx
  int v59; // r8d
  int v60; // eax
  __int64 v61; // r11
  unsigned int v62; // ecx
  int v63; // edx
  __int64 v64; // rbx
  int v65; // r8d
  int v66; // r15d
  int v67; // r14d
  unsigned int v68; // ecx
  int v69; // edx
  __int64 v70; // r11
  __int64 v71; // r9
  int v72; // r8d
  int v73; // edx
  int v74; // esi
  __int64 v75; // rbx
  __int64 v76; // r9
  int v77; // r13d
  unsigned int v78; // edx
  unsigned int v79; // ecx
  int v80; // edx
  __int64 v81; // r11
  int v82; // edx
  __int64 v83; // r9
  int v84; // edx
  __int64 v85; // rbx
  int v86; // edx
  __int64 v87; // r9
  unsigned int v88; // ecx
  unsigned int v89; // eax
  int v90; // edx
  __int64 v91; // r9
  int v92; // edx
  int v93; // edx
  int v94; // [rsp+0h] [rbp-80h]
  int v95; // [rsp+0h] [rbp-80h]
  int v96; // [rsp+4h] [rbp-7Ch]
  int v97; // [rsp+4h] [rbp-7Ch]
  int v98; // [rsp+8h] [rbp-78h]
  int v99; // [rsp+10h] [rbp-70h]
  unsigned int v100; // [rsp+18h] [rbp-68h]
  _DWORD v102[4]; // [rsp+30h] [rbp-50h]
  _BYTE v103[48]; // [rsp+40h] [rbp-40h] BYREF

  v3 = a2 - (_QWORD)v103;
  v4 = v103;
  v5 = 2LL;
  do
  {
    *(v4 - 2) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3)), 32);
    *(v4 - 1) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 8)), 32);
    *v4 = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 16)), 32);
    v6 = *(_QWORD *)((char *)v4 + v3 + 24);
    v4 += 4;
    *(v4 - 3) = __ROR8__(_byteswap_uint64(v6), 32);
    --v5;
  }
  while ( v5 );
  v7 = *a1;
  v8 = a1[1];
  v9 = a1[2];
  v10 = a1[3];
  v11 = a1[4];
  v12 = a1[5];
  v13 = a1[6];
  v14 = a1[7];
  v15 = 0LL;
  do
  {
    v16 = v14
        + v102[v15]
        + SHA256Magic[v15]
        + (v11 & v12 ^ v13 & ~v11)
        + (__ROR4__(v11, 6) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 25));
    v17 = v16 + v10;
    v18 = (unsigned int)(v15 + 1);
    v19 = v16 + (__ROR4__(v7, 13) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 2)) + (v7 & v8 ^ v9 & (v7 ^ v8));
    v20 = v102[v18]
        + SHA256Magic[v18]
        + (v17 & v11 ^ v12 & ~v17)
        + (__ROR4__(v17, 6) ^ __ROR4__(v17, 11) ^ __ROR4__(v17, 25));
    v21 = (unsigned int)(v18 + 1);
    v22 = v13 + v20;
    v23 = v22 + v9;
    v24 = v22 + (__ROR4__(v19, 13) ^ __ROR4__(v19, 22) ^ __ROR4__(v19, 2)) + (v7 & v8 ^ v19 & (v7 ^ v8));
    v25 = v102[v21]
        + SHA256Magic[v21]
        + (v23 & v17 ^ v11 & ~v23)
        + (__ROR4__(v23, 6) ^ __ROR4__(v23, 11) ^ __ROR4__(v23, 25));
    v26 = (unsigned int)(v21 + 1);
    v27 = v12 + v25;
    v28 = v27 + v8;
    v29 = v27 + (__ROR4__(v24, 2) ^ __ROR4__(v24, 13) ^ __ROR4__(v24, 22)) + (v7 & v24 ^ v19 & (v7 ^ v24));
    v30 = v102[v26]
        + SHA256Magic[v26]
        + (v28 & v23 ^ v17 & ~v28)
        + (__ROR4__(v28, 6) ^ __ROR4__(v28, 11) ^ __ROR4__(v28, 25));
    v31 = (unsigned int)(v26 + 1);
    v32 = v11 + v30;
    v33 = v32 + v7;
    v34 = v32 + (__ROR4__(v29, 2) ^ __ROR4__(v29, 13) ^ __ROR4__(v29, 22)) + (v29 & v24 ^ v19 & (v29 ^ v24));
    v35 = v17
        + v102[v31]
        + SHA256Magic[v31]
        + (v33 & v28 ^ v23 & ~v33)
        + (__ROR4__(v33, 6) ^ __ROR4__(v33, 11) ^ __ROR4__(v33, 25));
    v14 = v35 + v19;
    v36 = (unsigned int)(v31 + 1);
    v94 = v14;
    v10 = v35 + (__ROR4__(v34, 2) ^ __ROR4__(v34, 13) ^ __ROR4__(v34, 22)) + (v34 & v29 ^ v24 & (v34 ^ v29));
    v37 = v102[v36]
        + SHA256Magic[v36]
        + (v33 & v14 ^ v28 & ~v14)
        + (__ROR4__(v14, 6) ^ __ROR4__(v14, 11) ^ __ROR4__(v35 + v19, 25));
    v38 = (unsigned int)(v36 + 1);
    v39 = v23 + v37;
    v13 = v39 + v24;
    v9 = v39 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v34 ^ v29 & (v10 ^ v34));
    v40 = v28
        + v102[v38]
        + SHA256Magic[v38]
        + (v13 & v14 ^ v33 & ~v13)
        + (__ROR4__(v13, 6) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 25));
    v12 = v40 + v29;
    v41 = (unsigned int)(v38 + 1);
    v8 = v40 + (__ROR4__(v9, 2) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 22)) + (v9 & v10 ^ v34 & (v9 ^ v10));
    v42 = v102[v41]
        + SHA256Magic[v41]
        + (v12 & v13 ^ v14 & ~v12)
        + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
    v15 = (unsigned int)(v41 + 1);
    v43 = v33 + v42;
    v11 = v43 + v34;
    result = v43 + (__ROR4__(v8, 2) ^ (unsigned int)(__ROR4__(v8, 13) ^ __ROR4__(v8, 22)));
    v7 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
  }
  while ( (unsigned int)v15 < 0x10 );
  v100 = v15;
  v45 = (unsigned int)v15 < 0x40;
  v46 = a1;
  v96 = v8;
  v99 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
  v98 = v12;
  if ( v45 )
  {
    v47 = v100;
    v48 = v13;
    do
    {
      v49 = v47 + 1;
      v50 = v47 & 0xF;
      v51 = ((_BYTE)v47 + 1) & 0xF;
      v52 = v102[((_BYTE)v47 - 2) & 0xF];
      v102[v50] += v102[((_BYTE)v100 - 7) & 0xF]
                 + ((v102[v51] >> 3) ^ __ROR4__(v102[v51], 7) ^ __ROR4__(v102[v51], 18))
                 + ((v52 >> 10) ^ __ROR4__(v52, 17) ^ __ROR4__(v52, 19));
      v53 = v11 & v12;
      v54 = v47 + 2;
      v55 = v94
          + v102[v50]
          + SHA256Magic[v47]
          + (v53 ^ v48 & ~v11)
          + (__ROR4__(v11, 6) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 25));
      v56 = v55 + v10;
      LODWORD(v50) = v7 ^ v96;
      v57 = v7 & v96;
      v58 = __ROR4__(v7, 13) ^ __ROR4__(v7, 22);
      v59 = v7 & v96 ^ v9 & (v7 ^ v96);
      v60 = __ROR4__(v7, 2);
      v61 = ((_BYTE)v49 + 1) & 0xF;
      v95 = v55 + (v58 ^ v60) + v59;
      v62 = v102[((_BYTE)v49 - 2) & 0xF];
      v63 = v102[v51]
          + v102[((_BYTE)v49 - 7) & 0xF]
          + ((v62 >> 10) ^ __ROR4__(v62, 17) ^ __ROR4__(v62, 19))
          + (__ROR4__(v102[v61], 7) ^ __ROR4__(v102[v61], 18) ^ (v102[v61] >> 3));
      v102[v51] = v63;
      v64 = v49 + 2;
      v65 = v48
          + v63
          + SHA256Magic[v49]
          + (v56 & v11 ^ v98 & ~v56)
          + (__ROR4__(v56, 6) ^ __ROR4__(v56, 11) ^ __ROR4__(v56, 25));
      v66 = v65 + v9;
      v67 = v65 + (__ROR4__(v95, 13) ^ __ROR4__(v95, 22) ^ __ROR4__(v95, 2)) + (v57 ^ v95 & v50);
      v68 = v102[((_BYTE)v49 + 2) & 0xF];
      v69 = v102[v61]
          + v102[((_BYTE)v49 - 6) & 0xF]
          + ((v102[((_BYTE)v49 - 1) & 0xF] >> 10) ^ __ROR4__(v102[((_BYTE)v49 - 1) & 0xF], 17) ^ __ROR4__(
                                                                                                   v102[((_BYTE)v49 - 1) & 0xF],
                                                                                                   19))
          + (__ROR4__(v68, 7) ^ __ROR4__(v68, 18) ^ (v68 >> 3));
      v102[v61] = v69;
      v70 = v49 + 3;
      v71 = ((_BYTE)v49 + 2) & 0xF;
      v72 = v98
          + v69
          + SHA256Magic[v54]
          + (v66 & v56 ^ v11 & ~v66)
          + (__ROR4__(v66, 6) ^ __ROR4__(v66, 11) ^ __ROR4__(v66, 25));
      v97 = v72 + v96;
      LODWORD(v54) = v72 + (__ROR4__(v67, 2) ^ __ROR4__(v67, 13) ^ __ROR4__(v67, 22)) + (v99 & v67 ^ v95 & (v99 ^ v67));
      v102[v71] += v102[((_BYTE)v64 - 7) & 0xF]
                 + ((v102[((_BYTE)v64 + 1) & 0xF] >> 3) ^ __ROR4__(v102[((_BYTE)v64 + 1) & 0xF], 7) ^ __ROR4__(v102[((_BYTE)v64 + 1) & 0xF], 18))
                 + ((v102[((_BYTE)v64 - 2) & 0xF] >> 10) ^ __ROR4__(v102[((_BYTE)v64 - 2) & 0xF], 17) ^ __ROR4__(v102[((_BYTE)v64 - 2) & 0xF], 19));
      v73 = v11
          + v102[v71]
          + SHA256Magic[v64]
          + (v97 & v66 ^ v56 & ~v97)
          + (__ROR4__(v97, 6) ^ __ROR4__(v97, 11) ^ __ROR4__(v97, 25));
      v74 = v73 + v99;
      v75 = (unsigned int)(v64 + 2);
      v76 = v70 & 0xF;
      v77 = v73 + (__ROR4__(v54, 2) ^ __ROR4__(v54, 13) ^ __ROR4__(v54, 22)) + (v54 & v67 ^ v95 & (v54 ^ v67));
      v78 = v102[((_BYTE)v70 - 2) & 0xF];
      v79 = v102[v75 & 0xF];
      v102[v76] += v102[((_BYTE)v70 - 7) & 0xF]
                 + ((v79 >> 3) ^ __ROR4__(v79, 7) ^ __ROR4__(v79, 18))
                 + ((v78 >> 10) ^ __ROR4__(v78, 17) ^ __ROR4__(v78, 19));
      v80 = SHA256Magic[v70] + (v74 & v97 ^ v66 & ~v74) + (__ROR4__(v74, 6) ^ __ROR4__(v74, 11) ^ __ROR4__(v74, 25));
      v81 = (unsigned int)(v75 + 1);
      v82 = v56 + v102[v76] + v80;
      v94 = v82 + v95;
      v10 = v82 + (__ROR4__(v77, 2) ^ __ROR4__(v77, 13) ^ __ROR4__(v77, 22)) + (v77 & v54 ^ v67 & (v77 ^ v54));
      v83 = v75 & 0xF;
      v102[v83] += v102[((_BYTE)v75 - 7) & 0xF]
                 + ((v102[((_BYTE)v75 + 1) & 0xF] >> 3) ^ __ROR4__(v102[((_BYTE)v75 + 1) & 0xF], 7) ^ __ROR4__(v102[((_BYTE)v75 + 1) & 0xF], 18))
                 + ((v102[((_BYTE)v75 - 2) & 0xF] >> 10) ^ __ROR4__(v102[((_BYTE)v75 - 2) & 0xF], 17) ^ __ROR4__(v102[((_BYTE)v75 - 2) & 0xF], 19));
      v84 = v102[v83]
          + SHA256Magic[v75]
          + (v74 & v94 ^ v97 & ~v94)
          + (__ROR4__(v94, 6) ^ __ROR4__(v94, 11) ^ __ROR4__(v94, 25));
      v85 = (unsigned int)(v75 + 2);
      v86 = v66 + v84;
      v48 = v86 + v67;
      v87 = v81 & 0xF;
      v9 = v86 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v77 ^ v54 & (v10 ^ v77));
      v88 = v102[((_BYTE)v81 - 2) & 0xF];
      v89 = v102[v85 & 0xF];
      v102[v87] += v102[((_BYTE)v81 - 7) & 0xF]
                 + ((v89 >> 3) ^ __ROR4__(v89, 7) ^ __ROR4__(v89, 18))
                 + ((v88 >> 10) ^ __ROR4__(v88, 17) ^ __ROR4__(v88, 19));
      v90 = v97
          + v102[v87]
          + SHA256Magic[v81]
          + (v48 & v94 ^ v74 & ~v48)
          + (__ROR4__(v48, 6) ^ __ROR4__(v48, 11) ^ __ROR4__(v48, 25));
      v12 = v90 + v54;
      v98 = v12;
      v91 = v85 & 0xF;
      v100 = v85 + 1;
      v96 = v90 + (__ROR4__(v9, 2) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 22)) + (v9 & v10 ^ v77 & (v9 ^ v10));
      v102[v91] += v102[((_BYTE)v85 - 7) & 0xF]
                 + ((v102[v100 & 0xF] >> 3) ^ __ROR4__(v102[v100 & 0xF], 7) ^ __ROR4__(v102[v100 & 0xF], 18))
                 + ((v102[((_BYTE)v85 - 2) & 0xF] >> 10) ^ __ROR4__(v102[((_BYTE)v85 - 2) & 0xF], 17) ^ __ROR4__(v102[((_BYTE)v85 - 2) & 0xF], 19));
      v92 = SHA256Magic[v85] + (v12 & v48 ^ v94 & ~v12) + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
      v8 = v96;
      v93 = v74 + v102[v91] + v92;
      v11 = v93 + v77;
      result = v93 + (__ROR4__(v96, 2) ^ (unsigned int)(__ROR4__(v96, 13) ^ __ROR4__(v96, 22)));
      v47 = v100;
      v7 = result + (v96 & v9 ^ v10 & (v96 ^ v9));
      v99 = v7;
    }
    while ( v100 < 0x40 );
    v14 = v94;
    v13 = v48;
    v46 = a1;
  }
  *v46 += v7;
  v46[1] += v8;
  v46[2] += v9;
  v46[3] += v10;
  v46[4] += v11;
  v46[5] += v12;
  v46[6] += v13;
  v46[7] += v14;
  return result;
}
