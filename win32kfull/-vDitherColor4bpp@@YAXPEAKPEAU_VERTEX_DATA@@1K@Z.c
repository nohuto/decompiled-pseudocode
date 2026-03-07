void __fastcall vDitherColor4bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v6; // r10
  struct _VERTEX_DATA *v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  struct _VERTEX_DATA *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int *v14; // rcx
  unsigned int v15; // edx
  char v16; // r8
  unsigned int i; // edx
  __int64 v18; // rax
  unsigned int *v19; // rbx
  __int64 v20; // r9
  char *v21; // r10
  unsigned int v22; // r8d
  int v23; // edx
  unsigned int *v24; // rcx
  __int64 v25; // rax
  char v26; // r9
  unsigned int v27; // r8d
  unsigned int *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // r8d
  int v34; // r9d
  int v35; // r10d
  int v36; // ebx
  int v37; // edi
  int v38; // ecx
  int v39; // [rsp+0h] [rbp-50h]
  int v40; // [rsp+4h] [rbp-4Ch]
  int v41; // [rsp+8h] [rbp-48h]
  int v42; // [rsp+Ch] [rbp-44h]
  int v43; // [rsp+10h] [rbp-40h]
  int v44; // [rsp+14h] [rbp-3Ch]
  int v45; // [rsp+18h] [rbp-38h]
  int v46; // [rsp+1Ch] [rbp-34h]
  int v47; // [rsp+20h] [rbp-30h]
  int v48; // [rsp+24h] [rbp-2Ch]
  int v49; // [rsp+28h] [rbp-28h]
  int v50; // [rsp+2Ch] [rbp-24h]
  int v51; // [rsp+30h] [rbp-20h]
  int v52; // [rsp+34h] [rbp-1Ch]
  int v53; // [rsp+38h] [rbp-18h]
  int v54; // [rsp+3Ch] [rbp-14h]

  v6 = a2;
  if ( a4 > 2 )
  {
    v8 = (struct _VERTEX_DATA *)((char *)a2 + 16);
    if ( a4 == 3 )
    {
      v9 = *((_DWORD *)a2 + 2);
      v10 = v9;
      if ( v9 < *(_DWORD *)v8 )
        v10 = *(_DWORD *)v8;
      v8 = (struct _VERTEX_DATA *)((char *)a2 + (v9 < *(_DWORD *)v8 ? 16LL : 8LL));
    }
    else
    {
      v10 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 < *((_DWORD *)a2 + 6) )
      {
        v8 = (struct _VERTEX_DATA *)((char *)a2 + 24);
        v10 = *((_DWORD *)a2 + 6);
      }
    }
    v11 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    v12 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 <= v10 )
    {
      v11 = v8;
      v12 = v10;
    }
    if ( *(_DWORD *)v6 > v12 )
      v11 = v6;
    v13 = *((unsigned int *)v11 + 1);
    *((_DWORD *)v11 + 1) = 255;
    v39 = dword_1C032A1C0[v13];
    v40 = v39;
    v41 = v39;
    v42 = v39;
    v43 = v39;
    v44 = v39;
    v45 = v39;
    v46 = v39;
    v47 = v39;
    v48 = v39;
    v49 = v39;
    v50 = v39;
    v51 = v39;
    v52 = v39;
    v53 = v39;
    v54 = v39;
    v14 = (unsigned int *)&unk_1C0329EF0;
    while ( *((_DWORD *)v6 + 1) == 255 )
    {
      v14 += *(unsigned int *)v6;
LABEL_23:
      v6 = (struct _VERTEX_DATA *)((char *)v6 + 8);
      if ( v6 >= a3 )
        goto LABEL_38;
    }
    v15 = *(_DWORD *)v6;
    v16 = *((_BYTE *)v6 + 4);
    if ( (*(_DWORD *)v6 & 3) != 1 )
    {
      if ( (*(_DWORD *)v6 & 3) != 2 )
      {
        if ( (*(_DWORD *)v6 & 3) != 3 )
          goto LABEL_21;
        *((_BYTE *)&v39 + v14[2]) = v16;
      }
      *((_BYTE *)&v39 + v14[1]) = v16;
    }
    *((_BYTE *)&v39 + *v14) = v16;
    v14 += v15 & 3;
LABEL_21:
    for ( i = v15 >> 2; i; --i )
    {
      *((_BYTE *)&v39 + *v14) = v16;
      *((_BYTE *)&v39 + v14[1]) = v16;
      *((_BYTE *)&v39 + v14[2]) = v16;
      v18 = v14[3];
      v14 += 4;
      *((_BYTE *)&v39 + v18) = v16;
    }
    goto LABEL_23;
  }
  v19 = (unsigned int *)((char *)a2 + 4);
  if ( a4 != 2 )
  {
    v38 = dword_1C032A1C0[*v19];
    v30 = v38 | (16 * v38);
    v31 = v30;
    v32 = v30;
    v33 = v30;
    v34 = v30;
    v35 = v30;
    v36 = v30;
    v37 = v30;
    goto LABEL_40;
  }
  v20 = *(unsigned int *)a2;
  v21 = (char *)a2 + 12;
  v22 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)v20 < v22 )
  {
    v25 = *(unsigned int *)v21;
    v22 = *(_DWORD *)a2;
    v21 = (char *)a2 + 4;
    v23 = dword_1C032A1C0[v25];
    v24 = (unsigned int *)&unk_1C0329EF0;
  }
  else
  {
    v23 = dword_1C032A1C0[*v19];
    v24 = (unsigned int *)((char *)&unk_1C0329EF0 + 4 * v20);
  }
  v26 = *v21;
  v39 = v23;
  v40 = v23;
  v41 = v23;
  v42 = v23;
  v43 = v23;
  v44 = v23;
  v45 = v23;
  v46 = v23;
  v47 = v23;
  v48 = v23;
  v49 = v23;
  v50 = v23;
  v51 = v23;
  v52 = v23;
  v53 = v23;
  v54 = v23;
  switch ( v22 & 3 )
  {
    case 1u:
      goto LABEL_34;
    case 2u:
LABEL_33:
      *((_BYTE *)&v39 + v24[1]) = v26;
LABEL_34:
      *((_BYTE *)&v39 + *v24) = v26;
      v24 += v22 & 3;
      break;
    case 3u:
      *((_BYTE *)&v39 + v24[2]) = v26;
      goto LABEL_33;
  }
  v27 = v22 >> 2;
  if ( v27 )
  {
    v28 = v24 + 2;
    do
    {
      *((_BYTE *)&v39 + *(v28 - 2)) = v26;
      *((_BYTE *)&v39 + *(v28 - 1)) = v26;
      v29 = *v28;
      v28 += 4;
      *((_BYTE *)&v39 + v29) = v26;
      *((_BYTE *)&v39 + *(v28 - 3)) = v26;
      --v27;
    }
    while ( v27 );
  }
LABEL_38:
  v30 = v54 | (16 * v53);
  v31 = v52 | (16 * v51);
  v32 = v50 | (16 * v49);
  v33 = v48 | (16 * v47);
  v34 = v46 | (16 * v45);
  v35 = v44 | (16 * v43);
  v36 = v42 | (16 * v41);
  v37 = v40 | (16 * v39);
LABEL_40:
  *a1 = v37;
  a1[1] = v36;
  a1[2] = v35;
  a1[3] = v34;
  a1[4] = v33;
  a1[5] = v32;
  a1[6] = v31;
  a1[7] = v30;
}
