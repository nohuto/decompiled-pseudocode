__int64 __fastcall MiImageCfgRvaIteratorNext(_DWORD *a1, unsigned int **a2, int *a3)
{
  int v3; // r9d
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int *v8; // r8
  __int64 v9; // rbp
  int v10; // esi
  char v11; // r11
  unsigned int v12; // edi
  unsigned int v13; // r10d
  char v14; // di
  bool v15; // zf
  int v16; // ecx
  int v17; // edi
  bool v18; // si

  v3 = *((_DWORD *)a2 + 2);
  result = 0LL;
  v7 = 0;
  if ( v3 )
  {
    v8 = *a2;
    v9 = (unsigned int)a1[21];
    while ( 1 )
    {
      v10 = a1[9];
      v11 = 0;
      v12 = a1[8];
      *a3 = 0;
      v13 = *v8;
      if ( *v8 <= v7 || v13 >= v12 )
      {
        dword_140C654C0 = 14;
        return result;
      }
      v14 = 1;
      if ( v10 )
      {
        v14 = (v10 & 1) == 0;
        if ( (v10 & 2) != 0 )
          v14 |= 2u;
      }
      if ( (unsigned int)v9 <= 4 )
      {
        v18 = 0;
      }
      else
      {
        v11 = *((_BYTE *)v8 + 4);
        v15 = (unsigned __int8)(v14 & v11) == 0;
        v16 = (unsigned __int8)(v14 & v11);
        v17 = 0;
        v18 = !v15;
        if ( v16 )
          goto LABEL_9;
      }
      *a3 = 1;
      v17 = 1;
LABEL_9:
      if ( (v11 & 2) != 0 )
      {
        v17 |= 4u;
        *a3 = v17;
      }
      if ( (v11 & 8) != 0 )
        *a3 = v17 | 8;
      v8 = (unsigned int *)((char *)v8 + v9);
      --v3;
      if ( !v18 )
      {
        result = v13;
LABEL_15:
        *((_DWORD *)a2 + 2) = v3;
        *a2 = v8;
        return result;
      }
      v7 = v13;
      if ( !v3 )
        goto LABEL_15;
    }
  }
  return result;
}
