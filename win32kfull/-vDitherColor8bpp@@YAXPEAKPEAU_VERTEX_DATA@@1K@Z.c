/*
 * XREFs of ?vDitherColor8bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C028B668
 * Callers:
 *     EngDitherColor @ 0x1C028B920 (EngDitherColor.c)
 * Callees:
 *     <none>
 */

void __fastcall vDitherColor8bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v5; // r11
  struct _VERTEX_DATA *v7; // rcx
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  unsigned int v10; // edx
  struct _VERTEX_DATA *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // r8
  unsigned int i; // edx
  __int64 v20; // rax
  unsigned int *v21; // rbx
  unsigned int v22; // ecx
  char *v23; // r11
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int *v26; // rcx
  __int64 v27; // rax
  char v28; // r9
  unsigned int v29; // r8d
  unsigned int *v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // ecx

  v5 = a2;
  if ( a4 > 2 )
  {
    v7 = (struct _VERTEX_DATA *)((char *)a2 + 16);
    if ( a4 == 3 )
    {
      v8 = *((_DWORD *)a2 + 2);
      v9 = v8;
      if ( v8 < *(_DWORD *)v7 )
        v9 = *(_DWORD *)v7;
      v7 = (struct _VERTEX_DATA *)((char *)a2 + (v8 < *(_DWORD *)v7 ? 16LL : 8LL));
    }
    else
    {
      v9 = *(_DWORD *)v7;
      v10 = *((_DWORD *)a2 + 6);
      if ( *(_DWORD *)v7 < v10 )
      {
        v7 = (struct _VERTEX_DATA *)((char *)v5 + 24);
        v9 = v10;
      }
    }
    v11 = (struct _VERTEX_DATA *)((char *)v5 + 8);
    v12 = *((_DWORD *)v5 + 2);
    if ( v12 <= v9 )
    {
      v11 = v7;
      v12 = v9;
    }
    if ( *(_DWORD *)v5 > v12 )
      v11 = v5;
    v13 = *((unsigned int *)v11 + 1);
    *((_DWORD *)v11 + 1) = 255;
    v14 = dword_1C032A200[v13];
    *a1 = v14;
    a1[1] = v14;
    a1[2] = v14;
    a1[3] = v14;
    a1[4] = v14;
    a1[5] = v14;
    a1[6] = v14;
    a1[7] = v14;
    a1[8] = v14;
    a1[9] = v14;
    a1[10] = v14;
    a1[11] = v14;
    a1[12] = v14;
    a1[13] = v14;
    a1[14] = v14;
    a1[15] = v14;
    v15 = (unsigned int *)&unk_1C0329FF0;
    while ( 1 )
    {
      v16 = *((unsigned int *)v5 + 1);
      v17 = *(unsigned int *)v5;
      if ( (_DWORD)v16 != 255 )
        break;
      v15 += v17;
LABEL_23:
      v5 = (struct _VERTEX_DATA *)((char *)v5 + 8);
      if ( v5 >= a3 )
        return;
    }
    v18 = byte_1C032A0F0[v16];
    if ( (*(_DWORD *)v5 & 3) != 1 )
    {
      if ( (*(_DWORD *)v5 & 3) != 2 )
      {
        if ( (*(_DWORD *)v5 & 3) != 3 )
          goto LABEL_21;
        *((_BYTE *)a1 + v15[2]) = v18;
      }
      *((_BYTE *)a1 + v15[1]) = v18;
    }
    *((_BYTE *)a1 + *v15) = v18;
    v15 += v17 & 3;
LABEL_21:
    for ( i = (unsigned int)v17 >> 2; i; --i )
    {
      *((_BYTE *)a1 + *v15) = v18;
      *((_BYTE *)a1 + v15[1]) = v18;
      *((_BYTE *)a1 + v15[2]) = v18;
      v20 = v15[3];
      v15 += 4;
      *((_BYTE *)a1 + v20) = v18;
    }
    goto LABEL_23;
  }
  v21 = (unsigned int *)((char *)a2 + 4);
  if ( a4 != 2 )
  {
    v32 = dword_1C032A200[*v21];
    *a1 = v32;
    a1[1] = v32;
    a1[2] = v32;
    a1[3] = v32;
    a1[4] = v32;
    a1[5] = v32;
    a1[6] = v32;
    a1[7] = v32;
    a1[8] = v32;
    a1[9] = v32;
    a1[10] = v32;
    a1[11] = v32;
    a1[12] = v32;
    a1[13] = v32;
    a1[14] = v32;
    a1[15] = v32;
    return;
  }
  v22 = *(_DWORD *)a2;
  v23 = (char *)a2 + 12;
  v24 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 < v24 )
  {
    v27 = *(unsigned int *)v23;
    v24 = *(_DWORD *)a2;
    v26 = (unsigned int *)&unk_1C0329FF0;
    v23 = (char *)a2 + 4;
    v25 = dword_1C032A200[v27];
  }
  else
  {
    v25 = dword_1C032A200[*v21];
    v26 = (unsigned int *)((char *)&unk_1C0329FF0 + 4 * v22);
  }
  v28 = byte_1C032A0F0[*(unsigned int *)v23];
  *a1 = v25;
  a1[1] = v25;
  a1[2] = v25;
  a1[3] = v25;
  a1[4] = v25;
  a1[5] = v25;
  a1[6] = v25;
  a1[7] = v25;
  a1[8] = v25;
  a1[9] = v25;
  a1[10] = v25;
  a1[11] = v25;
  a1[12] = v25;
  a1[13] = v25;
  a1[14] = v25;
  a1[15] = v25;
  if ( (v24 & 3) != 1 )
  {
    if ( (v24 & 3) != 2 )
    {
      if ( (v24 & 3) != 3 )
        goto LABEL_35;
      *((_BYTE *)a1 + v26[2]) = v28;
    }
    *((_BYTE *)a1 + v26[1]) = v28;
  }
  *((_BYTE *)a1 + *v26) = v28;
  v26 += v24 & 3;
LABEL_35:
  v29 = v24 >> 2;
  if ( v29 )
  {
    v30 = v26 + 2;
    do
    {
      *((_BYTE *)a1 + *(v30 - 2)) = v28;
      *((_BYTE *)a1 + *(v30 - 1)) = v28;
      v31 = *v30;
      v30 += 4;
      *((_BYTE *)a1 + v31) = v28;
      *((_BYTE *)a1 + *(v30 - 3)) = v28;
      --v29;
    }
    while ( v29 );
  }
}
