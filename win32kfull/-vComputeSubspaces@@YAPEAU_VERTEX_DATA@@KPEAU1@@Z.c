struct _VERTEX_DATA *__fastcall vComputeSubspaces(unsigned int a1, struct _VERTEX_DATA *a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  int v6; // eax
  unsigned int v7; // r8d
  int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // r11d
  __int64 v12; // r11
  unsigned int v13; // r9d
  unsigned int v14; // edi
  unsigned int v15; // esi
  int v16; // ebx
  unsigned int v17; // edi
  unsigned int v18; // r9d
  int v19; // edx
  __int64 v20; // rax
  int v21; // esi
  unsigned int v22; // ebx
  unsigned int v23; // r9d
  int v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // r9d
  int v28; // edx
  int v29; // ebx
  int v30; // r9d
  int v31; // esi
  int v32; // edx

  v2 = (unsigned __int8)a1;
  v4 = BYTE1(a1);
  v5 = BYTE2(a1);
  a1 = (unsigned __int8)a1;
  v6 = (unsigned __int8)a1 < v5 ? 4 : 0;
  if ( v5 <= (unsigned __int8)a1 )
  {
    a1 = v5;
    v5 = v2;
  }
  v7 = v4;
  if ( a1 > v4 )
    v7 = a1;
  v8 = v6 | 2;
  if ( a1 <= v4 )
  {
    v8 = v6;
    v4 = a1;
  }
  v9 = v7;
  v10 = v7;
  if ( v7 <= v5 )
    v10 = v5;
  else
    v9 = v5;
  v11 = v8 | 1;
  if ( v7 <= v5 )
    v11 = v8;
  v12 = (unsigned int)(16 * v11);
  v13 = (v10 + 1) >> 2;
  v14 = (v9 + 1) >> 2;
  v15 = (v4 + 1) >> 2;
  if ( v10 + v9 <= 0x100 )
  {
    if ( v10 <= 0x80 )
    {
      v29 = 2 * (32 - v13);
      if ( v29 )
      {
        *((_DWORD *)a2 + 1) = byte_1C032A100[v12];
        *(_DWORD *)a2 = v29;
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      v30 = 2 * (v13 - v14);
      if ( v30 )
      {
        *(_DWORD *)a2 = v30;
        *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 1)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      v31 = 2 * v15;
      v32 = 64 - v31 - v30 - v29;
      if ( v32 )
      {
        *(_DWORD *)a2 = v32;
        *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 3)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      if ( v31 )
      {
        *(_DWORD *)a2 = v31;
        v20 = (unsigned int)(v12 + 7);
        goto LABEL_47;
      }
    }
    else
    {
      v25 = 2 * (64 - v14 - v13);
      if ( v25 )
      {
        *(_DWORD *)a2 = v25;
        *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 1)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      v26 = 2 * v15;
      v27 = 2 * v13 - 64;
      v28 = 64 - v27 - v26 - v25;
      if ( v28 )
      {
        *(_DWORD *)a2 = v28;
        *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 3)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      if ( v26 )
      {
        *(_DWORD *)a2 = v26;
        *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 7)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      if ( v27 )
      {
        *(_DWORD *)a2 = v27;
        v20 = (unsigned int)(v12 + 9);
        goto LABEL_47;
      }
    }
  }
  else if ( v10 + v4 <= 0x100 )
  {
    v21 = 2 * v15;
    v22 = v13 - v14;
    v23 = v14 + v13 - 64;
    v24 = 64 - v23 - v22 - v21;
    if ( v24 )
    {
      *(_DWORD *)a2 = v24;
      *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 3)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v21 )
    {
      *(_DWORD *)a2 = v21;
      *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 7)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v22 )
    {
      *(_DWORD *)a2 = v22;
      *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 9)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v23 )
    {
      *(_DWORD *)a2 = v23;
      v20 = (unsigned int)(v12 + 11);
      goto LABEL_47;
    }
  }
  else
  {
    v16 = 2 * (64 - v13);
    if ( v16 )
    {
      *(_DWORD *)a2 = v16;
      *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 7)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    v17 = v14 - v15;
    v18 = v15 + v13 - 64;
    v19 = 64 - v18 - v17 - v16;
    if ( v19 )
    {
      *(_DWORD *)a2 = v19;
      *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 9)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v17 )
    {
      *(_DWORD *)a2 = v17;
      *((_DWORD *)a2 + 1) = byte_1C032A100[(unsigned int)(v12 + 11)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v18 )
    {
      *(_DWORD *)a2 = v18;
      v20 = (unsigned int)(v12 + 15);
LABEL_47:
      *((_DWORD *)a2 + 1) = byte_1C032A100[v20];
      return (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
  }
  return a2;
}
