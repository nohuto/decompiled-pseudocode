__int64 __fastcall sub_1400815B4(__int64 a1, _BYTE *a2)
{
  char *v2; // r15
  __int64 v5; // rcx
  __int64 v6; // rax
  _WORD *v7; // rdi
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 Pool2; // rax
  __int64 v14; // r8
  void *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 i; // rcx
  __int16 v19; // dx
  __int64 v20; // rcx
  _WORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r12
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  void *v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  __int16 v34; // dx
  __int64 v35; // rcx
  _WORD *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r12
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r8
  void *v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rcx
  __int16 v49; // dx
  __int64 v50; // rcx
  _WORD *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // r12
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r8
  void *v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // rcx
  __int16 v64; // dx
  __int64 v65; // rcx
  _WORD *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r12
  unsigned __int64 v69; // r14
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r8
  void *v75; // rcx
  __int64 v76; // rax
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // rcx
  __int16 v79; // dx
  __int64 v80; // rcx
  _WORD *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r12
  unsigned __int64 v84; // r14
  unsigned __int64 v85; // rsi
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // r8
  void *v91; // rcx
  __int64 v92; // rax
  unsigned __int64 v93; // rsi
  unsigned __int64 v94; // rcx
  __int16 v95; // dx
  void *v96; // rcx
  PVOID v97; // rcx
  __int64 (__fastcall **v99)(PVOID); // [rsp+20h] [rbp-50h] BYREF
  __int16 v100; // [rsp+28h] [rbp-48h]
  PVOID P; // [rsp+30h] [rbp-40h]
  unsigned __int64 v102; // [rsp+38h] [rbp-38h]
  char *v103; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall **v104)(PVOID); // [rsp+48h] [rbp-28h] BYREF
  __int16 v105; // [rsp+50h] [rbp-20h]
  PVOID v106; // [rsp+58h] [rbp-18h]
  char *v107; // [rsp+60h] [rbp-10h]
  char *v108; // [rsp+68h] [rbp-8h]

  v2 = 0LL;
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_1400D41D0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (*a2 & 1) == 0 )
    goto LABEL_34;
  v99 = &off_1400D41D0;
  v100 = 0;
  P = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  sub_1400011A8(&v99, (__int64)L"IPv4, ", 6uLL);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
  {
    v7 = P;
    if ( !P )
      goto LABEL_34;
    v17 = v102;
    if ( v102 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      if ( !(unsigned int)sub_140001070((_QWORD *)a1, v17, 0LL) )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        if ( v17 )
        {
          for ( i = 0LL; i < v17; *(_QWORD *)(a1 + 24) = i )
          {
            v19 = v7[i];
            if ( !v19 )
              break;
            *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * i) = v19;
            i = *(_QWORD *)(a1 + 24) + 1LL;
          }
        }
        *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v17) = 0;
      }
    }
    goto LABEL_32;
  }
  if ( v102 )
  {
    v7 = P;
    if ( !P )
      goto LABEL_34;
    v8 = v6 + v102;
    v9 = 2 * (v6 + v102);
    if ( *(_QWORD *)(a1 + 32) > v6 + v102 )
    {
      sub_1400B6980(v5 + 2 * v6, P, 2 * v102);
LABEL_22:
      v16 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 24) = v8;
      *(_WORD *)(v16 + v9) = 0;
      goto LABEL_32;
    }
    _mm_lfence();
    v10 = *(_QWORD *)(a1 + 32);
    v11 = v10;
    if ( v10 <= v9 )
      v11 = v9;
    if ( v11 <= 0x40 )
    {
      v10 = 64LL;
    }
    else if ( v10 <= v9 )
    {
      v10 = v9;
    }
    v12 = 2 * v10;
    if ( !is_mul_ok(v10, 2uLL) )
      v12 = -1LL;
    Pool2 = ExAllocatePool2(64LL, v12, 1802728562LL);
    v2 = (char *)Pool2;
    if ( Pool2 )
    {
      v14 = *(_QWORD *)(a1 + 24);
      if ( v14 )
        sub_1400B6980(Pool2, *(_QWORD *)(a1 + 16), 2 * v14);
      v7 = P;
      sub_1400B6980(&v2[2 * *(_QWORD *)(a1 + 24)], P, 2 * v102);
      v15 = *(void **)(a1 + 16);
      if ( v15 )
        ExFreePool(v15);
      *(_QWORD *)(a1 + 16) = v2;
      v2 = 0LL;
      *(_QWORD *)(a1 + 32) = v10;
      goto LABEL_22;
    }
  }
  v7 = P;
LABEL_32:
  if ( v7 )
    ExFreePool(v7);
LABEL_34:
  if ( (*(_DWORD *)a2 & 2) == 0 )
    goto LABEL_67;
  v99 = &off_1400D41D0;
  v100 = (__int16)v2;
  P = v2;
  v102 = (unsigned __int64)v2;
  v103 = v2;
  sub_1400011A8(&v99, (__int64)L"IPv4Options, ", 0xDuLL);
  v20 = *(_QWORD *)(a1 + 16);
  if ( v20 )
  {
    if ( v102 )
    {
      v21 = P;
      if ( !P )
        goto LABEL_67;
      v22 = *(_QWORD *)(a1 + 24);
      v23 = v22 + v102;
      v24 = 2 * (v22 + v102);
      if ( *(_QWORD *)(a1 + 32) > v22 + v102 )
      {
        sub_1400B6980(v20 + 2 * v22, P, 2 * v102);
LABEL_55:
        v31 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v23;
        *(_WORD *)(v31 + v24) = (_WORD)v2;
        goto LABEL_65;
      }
      _mm_lfence();
      v25 = *(_QWORD *)(a1 + 32);
      v26 = v25;
      if ( v25 <= v24 )
        v26 = v24;
      if ( v26 <= 0x40 )
      {
        v25 = 64LL;
      }
      else if ( v25 <= v24 )
      {
        v25 = v24;
      }
      v27 = 2 * v25;
      if ( !is_mul_ok(v25, 2uLL) )
        v27 = -1LL;
      v28 = ExAllocatePool2(64LL, v27, 1802728562LL);
      v2 = (char *)v28;
      if ( v28 )
      {
        v29 = *(_QWORD *)(a1 + 24);
        if ( v29 )
          sub_1400B6980(v28, *(_QWORD *)(a1 + 16), 2 * v29);
        v21 = P;
        sub_1400B6980(&v2[2 * *(_QWORD *)(a1 + 24)], P, 2 * v102);
        v30 = *(void **)(a1 + 16);
        if ( v30 )
          ExFreePool(v30);
        *(_QWORD *)(a1 + 16) = v2;
        v2 = 0LL;
        *(_QWORD *)(a1 + 32) = v25;
        goto LABEL_55;
      }
    }
    v21 = P;
  }
  else
  {
    v21 = P;
    if ( !P )
      goto LABEL_67;
    v32 = v102;
    if ( v102 )
    {
      *(_QWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 24) = v2;
      *(_QWORD *)(a1 + 32) = v2;
      if ( !(unsigned int)sub_140001070((_QWORD *)a1, v32, 0LL) )
      {
        *(_QWORD *)(a1 + 24) = v2;
        if ( v32 )
        {
          v33 = (unsigned __int64)v2;
          do
          {
            v34 = v21[v33];
            if ( !v34 )
              break;
            *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v33) = v34;
            v33 = *(_QWORD *)(a1 + 24) + 1LL;
            *(_QWORD *)(a1 + 24) = v33;
          }
          while ( v33 < v32 );
        }
        *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v32) = (_WORD)v2;
      }
    }
  }
LABEL_65:
  if ( v21 )
    ExFreePool(v21);
LABEL_67:
  if ( (*(_DWORD *)a2 & 4) == 0 )
    goto LABEL_100;
  v100 = (__int16)v2;
  v99 = &off_1400D41D0;
  P = v2;
  v102 = (unsigned __int64)v2;
  v103 = v2;
  sub_1400011A8(&v99, (__int64)L"IPv6, ", 6uLL);
  v35 = *(_QWORD *)(a1 + 16);
  if ( v35 )
  {
    if ( v102 )
    {
      v36 = P;
      if ( !P )
        goto LABEL_100;
      v37 = *(_QWORD *)(a1 + 24);
      v38 = v37 + v102;
      v39 = 2 * (v37 + v102);
      if ( *(_QWORD *)(a1 + 32) > v37 + v102 )
      {
        sub_1400B6980(v35 + 2 * v37, P, 2 * v102);
LABEL_88:
        v46 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v38;
        *(_WORD *)(v46 + v39) = (_WORD)v2;
        goto LABEL_98;
      }
      _mm_lfence();
      v40 = *(_QWORD *)(a1 + 32);
      v41 = v40;
      if ( v40 <= v39 )
        v41 = v39;
      if ( v41 <= 0x40 )
      {
        v40 = 64LL;
      }
      else if ( v40 <= v39 )
      {
        v40 = v39;
      }
      v42 = 2 * v40;
      if ( !is_mul_ok(v40, 2uLL) )
        v42 = -1LL;
      v43 = ExAllocatePool2(64LL, v42, 1802728562LL);
      v2 = (char *)v43;
      if ( v43 )
      {
        v44 = *(_QWORD *)(a1 + 24);
        if ( v44 )
          sub_1400B6980(v43, *(_QWORD *)(a1 + 16), 2 * v44);
        v36 = P;
        sub_1400B6980(&v2[2 * *(_QWORD *)(a1 + 24)], P, 2 * v102);
        v45 = *(void **)(a1 + 16);
        if ( v45 )
          ExFreePool(v45);
        *(_QWORD *)(a1 + 16) = v2;
        v2 = 0LL;
        *(_QWORD *)(a1 + 32) = v40;
        goto LABEL_88;
      }
    }
    v36 = P;
  }
  else
  {
    v36 = P;
    if ( !P )
      goto LABEL_100;
    v47 = v102;
    if ( v102 )
    {
      *(_QWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 24) = v2;
      *(_QWORD *)(a1 + 32) = v2;
      if ( !(unsigned int)sub_140001070((_QWORD *)a1, v47, 0LL) )
      {
        *(_QWORD *)(a1 + 24) = v2;
        if ( v47 )
        {
          v48 = (unsigned __int64)v2;
          do
          {
            v49 = v36[v48];
            if ( !v49 )
              break;
            *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v48) = v49;
            v48 = *(_QWORD *)(a1 + 24) + 1LL;
            *(_QWORD *)(a1 + 24) = v48;
          }
          while ( v48 < v47 );
        }
        *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v47) = (_WORD)v2;
      }
    }
  }
LABEL_98:
  if ( v36 )
    ExFreePool(v36);
LABEL_100:
  if ( (*(_DWORD *)a2 & 8) == 0 )
    goto LABEL_133;
  v100 = (__int16)v2;
  v99 = &off_1400D41D0;
  P = v2;
  v102 = (unsigned __int64)v2;
  v103 = v2;
  sub_1400011A8(&v99, (__int64)L"IPv6Extensions, ", 0x10uLL);
  v50 = *(_QWORD *)(a1 + 16);
  if ( v50 )
  {
    if ( v102 )
    {
      v51 = P;
      if ( !P )
        goto LABEL_133;
      v52 = *(_QWORD *)(a1 + 24);
      v53 = v52 + v102;
      v54 = 2 * (v52 + v102);
      if ( *(_QWORD *)(a1 + 32) > v52 + v102 )
      {
        sub_1400B6980(v50 + 2 * v52, P, 2 * v102);
LABEL_121:
        v61 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v53;
        *(_WORD *)(v54 + v61) = (_WORD)v2;
        goto LABEL_131;
      }
      _mm_lfence();
      v55 = *(_QWORD *)(a1 + 32);
      v56 = v55;
      if ( v55 <= v54 )
        v56 = v54;
      if ( v56 <= 0x40 )
      {
        v55 = 64LL;
      }
      else if ( v55 <= v54 )
      {
        v55 = v54;
      }
      v57 = 2 * v55;
      if ( !is_mul_ok(v55, 2uLL) )
        v57 = -1LL;
      v58 = ExAllocatePool2(64LL, v57, 1802728562LL);
      v2 = (char *)v58;
      if ( v58 )
      {
        v59 = *(_QWORD *)(a1 + 24);
        if ( v59 )
          sub_1400B6980(v58, *(_QWORD *)(a1 + 16), 2 * v59);
        v51 = P;
        sub_1400B6980(&v2[2 * *(_QWORD *)(a1 + 24)], P, 2 * v102);
        v60 = *(void **)(a1 + 16);
        if ( v60 )
          ExFreePool(v60);
        *(_QWORD *)(a1 + 16) = v2;
        v2 = 0LL;
        *(_QWORD *)(a1 + 32) = v55;
        goto LABEL_121;
      }
    }
    v51 = P;
  }
  else
  {
    v51 = P;
    if ( !P )
      goto LABEL_133;
    v62 = v102;
    if ( v102 )
    {
      *(_QWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 24) = v2;
      *(_QWORD *)(a1 + 32) = v2;
      if ( !(unsigned int)sub_140001070((_QWORD *)a1, v62, 0LL) )
      {
        *(_QWORD *)(a1 + 24) = v2;
        if ( v62 )
        {
          v63 = (unsigned __int64)v2;
          do
          {
            v64 = v51[v63];
            if ( !v64 )
              break;
            *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v63) = v64;
            v63 = *(_QWORD *)(a1 + 24) + 1LL;
            *(_QWORD *)(a1 + 24) = v63;
          }
          while ( v63 < v62 );
        }
        *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v62) = (_WORD)v2;
      }
    }
  }
LABEL_131:
  if ( v51 )
    ExFreePool(v51);
LABEL_133:
  if ( (*(_DWORD *)a2 & 0x10) == 0 )
    goto LABEL_166;
  v100 = (__int16)v2;
  v99 = &off_1400D41D0;
  P = v2;
  v102 = (unsigned __int64)v2;
  v103 = v2;
  sub_1400011A8(&v99, (__int64)L"TCP, ", 5uLL);
  v65 = *(_QWORD *)(a1 + 16);
  if ( v65 )
  {
    if ( v102 )
    {
      v66 = P;
      if ( !P )
        goto LABEL_166;
      v67 = *(_QWORD *)(a1 + 24);
      v68 = v67 + v102;
      v69 = 2 * (v67 + v102);
      if ( *(_QWORD *)(a1 + 32) > v67 + v102 )
      {
        sub_1400B6980(v65 + 2 * v67, P, 2 * v102);
LABEL_154:
        v76 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v68;
        *(_WORD *)(v76 + v69) = (_WORD)v2;
        goto LABEL_164;
      }
      _mm_lfence();
      v70 = *(_QWORD *)(a1 + 32);
      v71 = v70;
      if ( v70 <= v69 )
        v71 = v69;
      if ( v71 <= 0x40 )
      {
        v70 = 64LL;
      }
      else if ( v70 <= v69 )
      {
        v70 = v69;
      }
      v72 = 2 * v70;
      if ( !is_mul_ok(v70, 2uLL) )
        v72 = -1LL;
      v73 = ExAllocatePool2(64LL, v72, 1802728562LL);
      v2 = (char *)v73;
      if ( v73 )
      {
        v74 = *(_QWORD *)(a1 + 24);
        if ( v74 )
          sub_1400B6980(v73, *(_QWORD *)(a1 + 16), 2 * v74);
        v66 = P;
        sub_1400B6980(&v2[2 * *(_QWORD *)(a1 + 24)], P, 2 * v102);
        v75 = *(void **)(a1 + 16);
        if ( v75 )
          ExFreePool(v75);
        *(_QWORD *)(a1 + 16) = v2;
        v2 = 0LL;
        *(_QWORD *)(a1 + 32) = v70;
        goto LABEL_154;
      }
    }
    v66 = P;
  }
  else
  {
    v66 = P;
    if ( !P )
      goto LABEL_166;
    v77 = v102;
    if ( v102 )
    {
      *(_QWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 24) = v2;
      *(_QWORD *)(a1 + 32) = v2;
      if ( !(unsigned int)sub_140001070((_QWORD *)a1, v77, 0LL) )
      {
        *(_QWORD *)(a1 + 24) = v2;
        if ( v77 )
        {
          v78 = (unsigned __int64)v2;
          do
          {
            v79 = v66[v78];
            if ( !v79 )
              break;
            *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v78) = v79;
            v78 = *(_QWORD *)(a1 + 24) + 1LL;
            *(_QWORD *)(a1 + 24) = v78;
          }
          while ( v78 < v77 );
        }
        *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v77) = (_WORD)v2;
      }
    }
  }
LABEL_164:
  if ( v66 )
    ExFreePool(v66);
LABEL_166:
  if ( (*(_DWORD *)a2 & 0x20) == 0 )
    goto LABEL_200;
  v100 = (__int16)v2;
  v99 = &off_1400D41D0;
  P = v2;
  v102 = (unsigned __int64)v2;
  v103 = v2;
  sub_1400011A8(&v99, (__int64)L"UDP, ", 5uLL);
  v80 = *(_QWORD *)(a1 + 16);
  if ( v80 )
  {
    if ( v102 )
    {
      v81 = P;
      if ( !P )
        goto LABEL_200;
      v82 = *(_QWORD *)(a1 + 24);
      v83 = v82 + v102;
      v84 = 2 * (v82 + v102);
      if ( *(_QWORD *)(a1 + 32) > v82 + v102 )
      {
        sub_1400B6980(v80 + 2 * v82, P, 2 * v102);
LABEL_187:
        v92 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v83;
        *(_WORD *)(v92 + v84) = (_WORD)v2;
        goto LABEL_198;
      }
      _mm_lfence();
      v85 = *(_QWORD *)(a1 + 32);
      v86 = v85;
      if ( v85 <= v84 )
        v86 = v84;
      if ( v86 <= 0x40 )
      {
        v85 = 64LL;
      }
      else if ( v85 <= v84 )
      {
        v85 = v84;
      }
      v87 = 2 * v85;
      if ( !is_mul_ok(v85, 2uLL) )
        v87 = -1LL;
      v88 = ExAllocatePool2(64LL, v87, 1802728562LL);
      v89 = v88;
      if ( v88 )
      {
        v90 = *(_QWORD *)(a1 + 24);
        if ( v90 )
          sub_1400B6980(v88, *(_QWORD *)(a1 + 16), 2 * v90);
        v81 = P;
        sub_1400B6980(v89 + 2LL * *(_QWORD *)(a1 + 24), P, 2 * v102);
        v91 = *(void **)(a1 + 16);
        if ( v91 )
          ExFreePool(v91);
        *(_QWORD *)(a1 + 16) = v89;
        v2 = 0LL;
        *(_QWORD *)(a1 + 32) = v85;
        goto LABEL_187;
      }
      v2 = 0LL;
    }
    v81 = P;
  }
  else
  {
    v81 = P;
    if ( !P )
      goto LABEL_200;
    v93 = v102;
    if ( v102 )
    {
      *(_QWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 24) = v2;
      *(_QWORD *)(a1 + 32) = v2;
      if ( !(unsigned int)sub_140001070((_QWORD *)a1, v93, 0LL) )
      {
        *(_QWORD *)(a1 + 24) = v2;
        if ( v93 )
        {
          v94 = (unsigned __int64)v2;
          do
          {
            v95 = v81[v94];
            if ( !v95 )
              break;
            *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v94) = v95;
            v94 = *(_QWORD *)(a1 + 24) + 1LL;
            *(_QWORD *)(a1 + 24) = v94;
          }
          while ( v94 < v93 );
        }
        *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v93) = (_WORD)v2;
      }
    }
  }
LABEL_198:
  if ( v81 )
    ExFreePool(v81);
LABEL_200:
  if ( *(char **)(a1 + 24) == v2 )
  {
    v105 = (__int16)v2;
    v104 = &off_1400D41D0;
    v106 = v2;
    v107 = v2;
    v108 = v2;
    sub_1400011A8(&v104, (__int64)L"None", 4uLL);
    if ( (__int64 (__fastcall ***)(PVOID))a1 == &v104 )
    {
      v97 = v106;
    }
    else
    {
      v96 = *(void **)(a1 + 16);
      if ( v96 )
        ExFreePool(v96);
      v97 = v2;
      *(_QWORD *)(a1 + 16) = v106;
      *(_QWORD *)(a1 + 24) = v107;
      *(_QWORD *)(a1 + 32) = v108;
    }
    if ( v97 )
      ExFreePool(v97);
  }
  return a1;
}
