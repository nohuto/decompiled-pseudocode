/*
 * XREFs of ?vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C0288288
 * Callers:
 *     EngDitherColor @ 0x1C0288840 (EngDitherColor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

void __fastcall vDitherColor4bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v6; // r10
  bool v8; // zf
  struct _VERTEX_DATA *v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // r11d
  struct _VERTEX_DATA *v12; // r8
  bool v13; // cc
  unsigned int v14; // edx
  struct _VERTEX_DATA *v15; // rcx
  __int64 v16; // rax
  unsigned int *v17; // rcx
  unsigned int v18; // edx
  char v19; // r8
  unsigned int i; // edx
  __int64 v21; // rax
  unsigned int *v22; // r9
  unsigned int v23; // ecx
  char *v24; // r10
  unsigned int v25; // r8d
  int v26; // edx
  unsigned int *v27; // rcx
  __int64 v28; // rax
  char v29; // r9
  unsigned int v30; // r8d
  unsigned int *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // r8d
  int v37; // r9d
  int v38; // r10d
  int v39; // r11d
  int v40; // edi
  int v41; // [rsp+0h] [rbp-50h]
  int v42; // [rsp+4h] [rbp-4Ch]
  int v43; // [rsp+8h] [rbp-48h]
  int v44; // [rsp+Ch] [rbp-44h]
  int v45; // [rsp+10h] [rbp-40h]
  int v46; // [rsp+14h] [rbp-3Ch]
  int v47; // [rsp+18h] [rbp-38h]
  int v48; // [rsp+1Ch] [rbp-34h]
  int v49; // [rsp+20h] [rbp-30h]
  int v50; // [rsp+24h] [rbp-2Ch]
  int v51; // [rsp+28h] [rbp-28h]
  int v52; // [rsp+2Ch] [rbp-24h]
  int v53; // [rsp+30h] [rbp-20h]
  int v54; // [rsp+34h] [rbp-1Ch]
  int v55; // [rsp+38h] [rbp-18h]
  int v56; // [rsp+3Ch] [rbp-14h]

  v6 = a2;
  v8 = a4 == 2;
  if ( a4 > 2 )
  {
    v9 = (struct _VERTEX_DATA *)((char *)a2 + 16);
    if ( a4 == 3 )
    {
      v10 = *((_DWORD *)a2 + 2);
      v11 = v10;
      if ( v10 < *(_DWORD *)v9 )
        v11 = *(_DWORD *)v9;
      v9 = (struct _VERTEX_DATA *)((char *)a2 + (v10 < *(_DWORD *)v9 ? 16LL : 8LL));
    }
    else
    {
      v11 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 < *((_DWORD *)a2 + 6) )
      {
        v9 = (struct _VERTEX_DATA *)((char *)a2 + 24);
        v11 = *((_DWORD *)a2 + 6);
      }
    }
    v12 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    v13 = *((_DWORD *)a2 + 2) <= v11;
    v14 = *((_DWORD *)a2 + 2);
    v15 = v6;
    if ( v13 )
    {
      v14 = v11;
      v12 = v9;
    }
    if ( *(_DWORD *)v6 <= v14 )
      v15 = v12;
    v16 = *((unsigned int *)v15 + 1);
    *((_DWORD *)v15 + 1) = 255;
    v17 = (unsigned int *)&aulDither4bppOrder;
    v41 = ulNibbleTo4bppDword[v16];
    v42 = v41;
    v43 = v41;
    v44 = v41;
    v45 = v41;
    v46 = v41;
    v47 = v41;
    v48 = v41;
    v49 = v41;
    v50 = v41;
    v51 = v41;
    v52 = v41;
    v53 = v41;
    v54 = v41;
    v55 = v41;
    v56 = v41;
    while ( *((_DWORD *)v6 + 1) == 255 )
    {
      v17 += *(unsigned int *)v6;
LABEL_23:
      v6 = (struct _VERTEX_DATA *)((char *)v6 + 8);
      if ( v6 >= a3 )
        goto LABEL_38;
    }
    v18 = *(_DWORD *)v6;
    v19 = *((_BYTE *)v6 + 4);
    if ( (*(_DWORD *)v6 & 3) != 1 )
    {
      if ( (*(_DWORD *)v6 & 3) != 2 )
      {
        if ( (*(_DWORD *)v6 & 3) != 3 )
          goto LABEL_21;
        *((_BYTE *)&v41 + v17[2]) = v19;
      }
      *((_BYTE *)&v41 + v17[1]) = v19;
    }
    *((_BYTE *)&v41 + *v17) = v19;
    v17 += v18 & 3;
LABEL_21:
    for ( i = v18 >> 2; i; --i )
    {
      *((_BYTE *)&v41 + *v17) = v19;
      *((_BYTE *)&v41 + v17[1]) = v19;
      *((_BYTE *)&v41 + v17[2]) = v19;
      v21 = v17[3];
      v17 += 4;
      *((_BYTE *)&v41 + v21) = v19;
    }
    goto LABEL_23;
  }
  v22 = (unsigned int *)((char *)a2 + 4);
  if ( !v8 )
  {
    v33 = ulNibbleTo4bppDword[*v22] | (16 * ulNibbleTo4bppDword[*v22]);
    v34 = v33;
    v35 = v33;
    v36 = v33;
    v37 = v33;
    v38 = v33;
    v39 = v33;
    v40 = v33;
    goto LABEL_40;
  }
  v23 = *(_DWORD *)a2;
  v24 = (char *)a2 + 12;
  v25 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 < v25 )
  {
    v28 = *(unsigned int *)v24;
    v25 = *(_DWORD *)a2;
    v27 = (unsigned int *)&aulDither4bppOrder;
    v24 = (char *)a2 + 4;
    v26 = ulNibbleTo4bppDword[v28];
  }
  else
  {
    v26 = ulNibbleTo4bppDword[*v22];
    v27 = (unsigned int *)((char *)&aulDither4bppOrder + 4 * v23);
  }
  v29 = *v24;
  v41 = v26;
  v42 = v26;
  v43 = v26;
  v44 = v26;
  v45 = v26;
  v46 = v26;
  v47 = v26;
  v48 = v26;
  v49 = v26;
  v50 = v26;
  v51 = v26;
  v52 = v26;
  v53 = v26;
  v54 = v26;
  v55 = v26;
  v56 = v26;
  switch ( v25 & 3 )
  {
    case 1u:
      goto LABEL_34;
    case 2u:
LABEL_33:
      *((_BYTE *)&v41 + v27[1]) = v29;
LABEL_34:
      *((_BYTE *)&v41 + *v27) = v29;
      v27 += v25 & 3;
      break;
    case 3u:
      *((_BYTE *)&v41 + v27[2]) = v29;
      goto LABEL_33;
  }
  v30 = v25 >> 2;
  if ( v30 )
  {
    v31 = v27 + 2;
    do
    {
      *((_BYTE *)&v41 + *(v31 - 2)) = v29;
      *((_BYTE *)&v41 + *(v31 - 1)) = v29;
      v32 = *v31;
      v31 += 4;
      *((_BYTE *)&v41 + v32) = v29;
      *((_BYTE *)&v41 + *(v31 - 3)) = v29;
      --v30;
    }
    while ( v30 );
  }
LABEL_38:
  v33 = v56 | (16 * v55);
  v34 = v54 | (16 * v53);
  v35 = v52 | (16 * v51);
  v36 = v50 | (16 * v49);
  v37 = v48 | (16 * v47);
  v38 = v46 | (16 * v45);
  v39 = v44 | (16 * v43);
  v40 = v42 | (16 * v41);
LABEL_40:
  *a1 = v40;
  a1[1] = v39;
  a1[2] = v38;
  a1[3] = v37;
  a1[4] = v36;
  a1[5] = v35;
  a1[6] = v34;
  a1[7] = v33;
}
