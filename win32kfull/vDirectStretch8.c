char __fastcall vDirectStretch8(__int64 a1)
{
  int v2; // r13d
  int *v3; // r11
  int v4; // edx
  unsigned __int8 *v5; // r14
  int v6; // r10d
  int v7; // ecx
  __int64 v8; // r9
  int v9; // r8d
  int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // r8
  unsigned int v17; // edi
  unsigned int v18; // edx
  unsigned __int8 *v19; // rbx
  bool v20; // cf
  int *v21; // r13
  int v22; // r10d
  unsigned int v23; // eax
  unsigned int v24; // edx
  unsigned __int8 *v25; // rbx
  int v26; // r9d
  unsigned __int8 *v27; // rbx
  int v28; // r8d
  unsigned __int8 *v29; // rbx
  int v30; // ecx
  bool v31; // zf
  int v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  __int64 v35; // [rsp+10h] [rbp-58h]
  __int64 v36; // [rsp+18h] [rbp-50h]
  int v37; // [rsp+70h] [rbp+8h]
  int v38; // [rsp+78h] [rbp+10h]
  int v39; // [rsp+80h] [rbp+18h]

  v2 = *(_DWORD *)(a1 + 36);
  v3 = (int *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 28));
  v4 = 0;
  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(int *)(a1 + 12));
  v6 = (*(_BYTE *)(a1 + 16) + (unsigned __int8)*(_DWORD *)(a1 + 28)) & 3;
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28);
  LODWORD(v8) = *(_DWORD *)(a1 + 24) - v7;
  v9 = *(_DWORD *)(a1 + 48);
  v10 = *(_DWORD *)(a1 + 44);
  v11 = *(_DWORD *)(a1 + 60);
  v38 = *(_DWORD *)(a1 + 52);
  v37 = v2;
  LODWORD(v12) = -v6 & 3;
  v39 = v6;
  v33 = ((_BYTE)v3 + (_BYTE)v7) & 3;
  v13 = v7 - v12 - v33;
  if ( v2 > 0 )
  {
    if ( v9 )
      v4 = *(_DWORD *)(a1 + 8) * v9;
    v14 = v13;
    v15 = *(unsigned int *)(a1 + 40);
    v16 = v4;
    v8 = (int)v8;
    v36 = v13;
    v34 = v4;
    v35 = (int)v8;
    while ( 1 )
    {
      v17 = *(_DWORD *)(a1 + 56);
      v18 = v11 + v38;
      v19 = v5;
      if ( v6 == 1 )
        break;
      if ( v6 == 2 )
        goto LABEL_10;
      if ( v6 == 3 )
        goto LABEL_11;
LABEL_12:
      v21 = (int *)((char *)v3 + v14);
      if ( v3 != v21 )
      {
        do
        {
          v22 = *v19;
          v23 = v10 + v17;
          v24 = v10 + v10 + v17 + v10;
          v25 = &v19[(v10 + v17 < v17) + v15];
          v17 = v24 + v10;
          v26 = *v25;
          v27 = &v25[(v23 + v10 < v23) + v15];
          v28 = *v27;
          v29 = &v27[(v24 < v23 + v10) + v15];
          v30 = *v29;
          v19 = &v29[(v24 + v10 < v24) + v15];
          *v3++ = v22 | ((v26 | ((v28 | (v30 << 8)) << 8)) << 8);
        }
        while ( v3 != v21 );
        v6 = v39;
        v18 = v11 + v38;
        v16 = v34;
        v8 = v35;
      }
      if ( v33 == 1 )
        goto LABEL_20;
      LOBYTE(v12) = v33 - 2;
      if ( v33 == 2 )
        goto LABEL_19;
      if ( v33 == 3 )
      {
        v20 = v10 + v17 < v17;
        *(_BYTE *)v3 = *v19;
        v17 += v10;
        v19 += v15 + v20;
        v3 = (int *)((char *)v3 + 1);
LABEL_19:
        *(_BYTE *)v3 = *v19;
        v19 += v15 + (v10 + v17 < v17);
        v3 = (int *)((char *)v3 + 1);
LABEL_20:
        LOBYTE(v12) = *v19;
        *(_BYTE *)v3 = *v19;
        v3 = (int *)((char *)v3 + 1);
      }
      v5 += v16;
      if ( v18 < v11 )
      {
        v12 = *(int *)(a1 + 8);
        v5 += v12;
      }
      v14 = v36;
      v3 = (int *)((char *)v3 + v8);
      v31 = v37-- == 1;
      v11 = v18;
      if ( v31 )
        return v12;
    }
    v20 = v10 + v17 < v17;
    *(_BYTE *)v3 = *v5;
    v17 += v10;
    v19 = &v5[v20 + v15];
    v3 = (int *)((char *)v3 + 1);
LABEL_10:
    v20 = v10 + v17 < v17;
    *(_BYTE *)v3 = *v19;
    v17 += v10;
    v19 += v15 + v20;
    v3 = (int *)((char *)v3 + 1);
LABEL_11:
    v20 = v10 + v17 < v17;
    *(_BYTE *)v3 = *v19;
    v17 += v10;
    v19 += v15 + v20;
    v3 = (int *)((char *)v3 + 1);
    goto LABEL_12;
  }
  return v12;
}
