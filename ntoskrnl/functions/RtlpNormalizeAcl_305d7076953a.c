char __fastcall RtlpNormalizeAcl(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r10d
  char v6; // r8
  char *v7; // r11
  int v8; // r9d
  __int64 v9; // rdx
  unsigned int v10; // r15d
  char *v11; // r13
  char *v12; // r14
  __int64 v13; // r8
  int v14; // ecx
  unsigned int v15; // r12d
  __int64 v16; // rbp
  unsigned int v17; // ecx
  unsigned int v18; // esi
  unsigned __int16 *v19; // rbx
  __int64 v20; // rdi
  char *v21; // rbx
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  char v24; // di
  unsigned __int64 v26; // r8
  int v27; // r8d
  int v28; // r8d
  int v29; // [rsp+20h] [rbp-88h]
  int v30; // [rsp+24h] [rbp-84h]
  unsigned __int64 v31; // [rsp+28h] [rbp-80h]
  unsigned int v33; // [rsp+38h] [rbp-70h]
  unsigned int v34; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int16 *v35; // [rsp+40h] [rbp-68h]
  _DWORD *v36; // [rsp+48h] [rbp-60h]
  __int64 v38; // [rsp+58h] [rbp-50h]

  v3 = a2;
  v4 = 0;
  v30 = 0;
  v6 = 0;
  v36 = a3;
  v7 = (char *)(a2 + 8);
  v34 = *(unsigned __int16 *)(a2 + 4);
  v8 = 8;
  v29 = 8;
  v9 = a1;
  v35 = (unsigned __int16 *)v7;
  v10 = 0;
  v11 = (char *)(a1 + 8);
  v12 = v7;
  if ( !v34 )
    goto LABEL_22;
  while ( 2 )
  {
    v13 = 0LL;
    v14 = 1651;
    v31 = 0LL;
    v15 = 0;
    if ( a3 )
    {
      v15 = 8;
      if ( *((_WORD *)v12 + 1) < 8u || (unsigned __int8)*v12 >= 0xBu && (unsigned __int8)(*v12 - 13) > 1u )
        goto LABEL_35;
      v31 = *(_QWORD *)v12;
      v13 = *(_QWORD *)v12;
      v38 = *(_QWORD *)v12;
      if ( (*(_QWORD *)v12 & 0x800LL) == 0 )
      {
        v26 = HIDWORD(v31);
        if ( (v31 & 0x8000000000000000uLL) != 0LL )
          LODWORD(v26) = *a3 | HIDWORD(v31);
        if ( (v26 & 0x40000000) != 0 )
          LODWORD(v26) = a3[1] | v26;
        if ( (v26 & 0x20000000) != 0 )
          LODWORD(v26) = a3[2] | v26;
        if ( (v26 & 0x10000000) != 0 )
          LODWORD(v26) = a3[3] | v26;
        v27 = v26 & 0xFFFFFFF;
        if ( (unsigned __int8)v38 <= 0xAu && _bittest(&v14, (unsigned __int8)v38) )
          v28 = a3[3] & v27;
        else
          v28 = (a3[3] | 0x1000000) & v27;
        HIDWORD(v38) = v28;
        v13 = v38;
        v31 = v38;
      }
      if ( v13 == *(_QWORD *)v12 )
LABEL_35:
        v15 = 0;
    }
    v16 = *((unsigned __int16 *)v12 + 1);
    v17 = *((unsigned __int16 *)v12 + 1) - v15;
    v33 = v17;
    if ( *v12 || (v18 = 0, v19 = (unsigned __int16 *)v7, !v10) )
    {
LABEL_9:
      v21 = &v12[v16];
      v29 = v16 + v8;
      if ( v9 )
      {
        if ( v15 )
          *(_QWORD *)v11 = v31;
        if ( v11 != v12 )
        {
          memmove(&v11[v15], &v12[v15], v17);
          v9 = a1;
        }
        v11 += *((unsigned __int16 *)v11 + 1);
      }
      ++v10;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v20 = v19[1];
      if ( (_WORD)v20 == (_WORD)v16 && (!v15 || *(_QWORD *)v19 == v13) )
        break;
LABEL_6:
      ++v18;
      v19 = (unsigned __int16 *)((char *)v19 + v20);
      if ( v18 >= v10 )
      {
        v9 = a1;
        v8 = v29;
        goto LABEL_9;
      }
      v13 = v31;
    }
    if ( memcmp(&v19[v15 / 2], &v12[v15], v17) )
    {
      v17 = v33;
      goto LABEL_6;
    }
    v9 = a1;
    v21 = &v12[v16];
    if ( !a1 )
      return 1;
LABEL_16:
    v4 = 0;
    v8 = v29;
    v12 = v21;
    if ( ++v30 < v34 )
    {
      v7 = (char *)v35;
      a3 = v36;
      continue;
    }
    break;
  }
  v3 = a2;
  v6 = 0;
LABEL_22:
  v22 = (v8 + 3) & 0xFFFFFFFC;
  v23 = v22 - v8;
  if ( v22 != v8 )
  {
    while ( !*v12 )
    {
      ++v4;
      ++v12;
      if ( v4 >= v23 )
        goto LABEL_23;
    }
    v6 = 1;
  }
LABEL_23:
  v24 = v6;
  if ( v22 != *(unsigned __int16 *)(v3 + 2) )
    v24 = 1;
  if ( v9 )
  {
    if ( v23 )
    {
      memset(v11, 0, v23);
      v9 = a1;
    }
    *(_QWORD *)v9 = *(_QWORD *)v3;
    *(_WORD *)(v9 + 2) = v22;
    *(_WORD *)(v9 + 4) = v10;
  }
  return v24;
}
