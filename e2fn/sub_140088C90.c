__int64 __fastcall sub_140088C90(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r12
  _BYTE *v5; // r14
  _WORD *v6; // r15
  unsigned __int64 v7; // rdi
  _WORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 Pool2; // rax
  __int64 v16; // r15
  __int64 v17; // r8
  void *v18; // rcx
  unsigned __int64 i; // rcx
  __int16 v20; // dx
  PVOID v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r8
  void *v32; // rcx
  __int64 v33; // rax
  unsigned __int64 j; // rcx
  __int16 v35; // dx
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r12
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // r8
  void *v47; // rcx
  __int64 v48; // rax
  unsigned __int64 k; // rcx
  __int16 v50; // dx
  PVOID v51; // rdi
  __int16 v53; // [rsp+20h] [rbp-89h] BYREF
  char v54; // [rsp+22h] [rbp-87h]
  __int64 (__fastcall **v55)(PVOID); // [rsp+30h] [rbp-79h] BYREF
  __int16 v56; // [rsp+38h] [rbp-71h]
  PVOID v57; // [rsp+40h] [rbp-69h]
  unsigned __int64 v58; // [rsp+48h] [rbp-61h]
  __int64 v59; // [rsp+50h] [rbp-59h]
  __int64 (__fastcall **v60)(PVOID); // [rsp+58h] [rbp-51h] BYREF
  __int16 v61; // [rsp+60h] [rbp-49h]
  PVOID v62; // [rsp+68h] [rbp-41h]
  unsigned __int64 v63; // [rsp+70h] [rbp-39h]
  __int64 v64; // [rsp+78h] [rbp-31h]
  __int64 v65; // [rsp+80h] [rbp-29h]
  __int64 v66; // [rsp+88h] [rbp-21h]
  _BYTE v67[16]; // [rsp+90h] [rbp-19h] BYREF
  PVOID P; // [rsp+A0h] [rbp-9h]
  unsigned __int64 v69; // [rsp+A8h] [rbp-1h]
  __int16 v71; // [rsp+110h] [rbp+67h]
  __int16 v72; // [rsp+118h] [rbp+6Fh]
  __int16 v73; // [rsp+120h] [rbp+77h] BYREF
  char v74; // [rsp+122h] [rbp+79h]
  _BYTE *v75; // [rsp+128h] [rbp+7Fh]

  v60 = &off_1400D41D0;
  v61 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  sub_1400011A8(&v60, (__int64)qword_1400B7580, 1uLL);
  v55 = &off_1400D41D0;
  v56 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  sub_1400011A8(&v55, (__int64)qword_1400BC2A0, 1uLL);
  v4 = v63;
  v5 = (_BYTE *)(a1 + 8);
  v6 = v62;
  v7 = v58;
  *(_QWORD *)a2 = &off_1400D41D0;
  v8 = v57;
  v75 = v5;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  HIBYTE(v72) = 16;
  v65 = 5LL;
  do
  {
    if ( *v5 >= 0x10u )
      goto LABEL_34;
    v9 = *(_QWORD *)(a2 + 16);
    if ( v9 )
    {
      if ( !v7 || !v8 )
        goto LABEL_34;
      v10 = *(_QWORD *)(a2 + 24);
      v11 = 2 * (v10 + v7);
      v66 = v10 + v7;
      if ( *(_QWORD *)(a2 + 32) <= v10 + v7 )
      {
        _mm_lfence();
        v12 = *(_QWORD *)(a2 + 32);
        v13 = v12;
        if ( v12 <= v11 )
          v13 = v11;
        if ( v13 <= 0x40 )
        {
          v12 = 64LL;
        }
        else if ( v12 <= v11 )
        {
          v12 = v11;
        }
        v14 = 2 * v12;
        if ( !is_mul_ok(v12, 2uLL) )
          v14 = -1LL;
        Pool2 = ExAllocatePool2(64LL, v14, 1802728562LL);
        v16 = Pool2;
        if ( !Pool2 )
        {
          v4 = v63;
          v6 = v62;
          v7 = v58;
          v8 = v57;
          goto LABEL_34;
        }
        v17 = *(_QWORD *)(a2 + 24);
        if ( v17 )
          sub_1400B6980(Pool2, *(_QWORD *)(a2 + 16), 2 * v17);
        v7 = v58;
        v8 = v57;
        sub_1400B6980(v16 + 2LL * *(_QWORD *)(a2 + 24), v57, 2 * v58);
        v18 = *(void **)(a2 + 16);
        if ( v18 )
          ExFreePool(v18);
        v4 = v63;
        *(_QWORD *)(a2 + 16) = v16;
        v6 = v62;
        *(_QWORD *)(a2 + 32) = v12;
      }
      else
      {
        sub_1400B6980(v9 + 2 * v10, v8, 2 * v7);
      }
      *(_QWORD *)(a2 + 24) = v66;
      *(_WORD *)(*(_QWORD *)(a2 + 16) + v11) = 0;
    }
    else if ( v8 )
    {
      if ( v7 )
      {
        *(_QWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        if ( !(unsigned int)sub_140001070((_QWORD *)a2, v7, 0LL) )
        {
          *(_QWORD *)(a2 + 24) = 0LL;
          for ( i = 0LL; i < v7; *(_QWORD *)(a2 + 24) = i )
          {
            v20 = v8[i];
            if ( !v20 )
              break;
            *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * i) = v20;
            i = *(_QWORD *)(a2 + 24) + 1LL;
          }
          *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * v7) = 0;
        }
      }
    }
LABEL_34:
    v74 = 10;
    LOBYTE(v72) = *v75;
    v73 = v72;
    sub_140022394((__int64)v67, (unsigned __int8 *)&v73);
    v21 = P;
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, (__int64)P, v69);
    else
      sub_1400011A8((_QWORD *)a2, (__int64)P, v69);
    if ( v21 )
      ExFreePool(v21);
    v22 = *(_QWORD *)(a2 + 16);
    if ( v22 )
    {
      if ( v4 && v6 )
      {
        v23 = *(_QWORD *)(a2 + 24);
        v24 = v23 + v4;
        v25 = 2 * (v23 + v4);
        if ( *(_QWORD *)(a2 + 32) > v23 + v4 )
        {
          sub_1400B6980(v22 + 2 * v23, v6, 2 * v4);
LABEL_59:
          v33 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a2 + 24) = v24;
          *(_WORD *)(v33 + v25) = 0;
          goto LABEL_69;
        }
        _mm_lfence();
        v26 = *(_QWORD *)(a2 + 32);
        v27 = v26;
        if ( v26 <= v25 )
          v27 = v25;
        if ( v27 <= 0x40 )
        {
          v26 = 64LL;
        }
        else if ( v26 <= v25 )
        {
          v26 = v25;
        }
        v28 = 2 * v26;
        if ( !is_mul_ok(v26, 2uLL) )
          v28 = -1LL;
        v29 = ExAllocatePool2(64LL, v28, 1802728562LL);
        v30 = v29;
        if ( v29 )
        {
          v31 = *(_QWORD *)(a2 + 24);
          if ( v31 )
            sub_1400B6980(v29, *(_QWORD *)(a2 + 16), 2 * v31);
          v4 = v63;
          v6 = v62;
          sub_1400B6980(v30 + 2LL * *(_QWORD *)(a2 + 24), v62, 2 * v63);
          v32 = *(void **)(a2 + 16);
          if ( v32 )
            ExFreePool(v32);
          *(_QWORD *)(a2 + 16) = v30;
          v8 = v57;
          *(_QWORD *)(a2 + 32) = v26;
          v7 = v58;
          goto LABEL_59;
        }
        v4 = v63;
        v6 = v62;
        v7 = v58;
        v8 = v57;
      }
    }
    else if ( v6 )
    {
      if ( v4 )
      {
        *(_QWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        if ( !(unsigned int)sub_140001070((_QWORD *)a2, v4, 0LL) )
        {
          *(_QWORD *)(a2 + 24) = 0LL;
          for ( j = 0LL; j < v4; *(_QWORD *)(a2 + 24) = j )
          {
            v35 = v6[j];
            if ( !v35 )
              break;
            *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * j) = v35;
            j = *(_QWORD *)(a2 + 24) + 1LL;
          }
          *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * v4) = 0;
        }
      }
    }
LABEL_69:
    v5 = v75 + 1;
    v36 = v65-- == 1;
    ++v75;
  }
  while ( !v36 );
  if ( *(_BYTE *)(a1 + 13) < 0x10u )
  {
    v37 = *(_QWORD *)(a2 + 16);
    if ( v37 )
    {
      if ( v7 && v8 )
      {
        v38 = *(_QWORD *)(a2 + 24);
        v39 = v38 + v7;
        v40 = 2 * (v38 + v7);
        if ( *(_QWORD *)(a2 + 32) > v38 + v7 )
        {
          sub_1400B6980(v37 + 2 * v38, v8, 2 * v7);
          goto LABEL_91;
        }
        _mm_lfence();
        v41 = *(_QWORD *)(a2 + 32);
        v42 = v41;
        if ( v41 <= v40 )
          v42 = v40;
        if ( v42 <= 0x40 )
        {
          v41 = 64LL;
        }
        else if ( v41 <= v40 )
        {
          v41 = v40;
        }
        v43 = 2 * v41;
        if ( !is_mul_ok(v41, 2uLL) )
          v43 = -1LL;
        v44 = ExAllocatePool2(64LL, v43, 1802728562LL);
        v45 = v44;
        if ( v44 )
        {
          v46 = *(_QWORD *)(a2 + 24);
          if ( v46 )
            sub_1400B6980(v44, *(_QWORD *)(a2 + 16), 2 * v46);
          v8 = v57;
          sub_1400B6980(v45 + 2LL * *(_QWORD *)(a2 + 24), v57, 2 * v58);
          v47 = *(void **)(a2 + 16);
          if ( v47 )
            ExFreePool(v47);
          *(_QWORD *)(a2 + 16) = v45;
          v6 = v62;
          *(_QWORD *)(a2 + 32) = v41;
LABEL_91:
          v48 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a2 + 24) = v39;
          *(_WORD *)(v48 + v40) = 0;
        }
        else
        {
          v6 = v62;
          v8 = v57;
        }
      }
    }
    else if ( v8 )
    {
      if ( v7 )
      {
        *(_QWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        if ( !(unsigned int)sub_140001070((_QWORD *)a2, v7, 0LL) )
        {
          *(_QWORD *)(a2 + 24) = 0LL;
          for ( k = 0LL; k < v7; *(_QWORD *)(a2 + 24) = k )
          {
            v50 = v8[k];
            if ( !v50 )
              break;
            *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * k) = v50;
            k = *(_QWORD *)(a2 + 24) + 1LL;
          }
          *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * v7) = 0;
        }
      }
    }
  }
  LOBYTE(v71) = *(_BYTE *)(a1 + 13);
  HIBYTE(v71) = 16;
  v53 = v71;
  v54 = 10;
  sub_140022394((__int64)v67, (unsigned __int8 *)&v53);
  v51 = P;
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, (__int64)P, v69);
  else
    sub_1400011A8((_QWORD *)a2, (__int64)P, v69);
  if ( v51 )
    ExFreePool(v51);
  if ( v8 )
    ExFreePool(v8);
  if ( v6 )
    ExFreePool(v6);
  return a2;
}
