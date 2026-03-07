void __fastcall vSolidFillRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v8; // r14
  unsigned __int8 *v9; // r9
  char v10; // bp
  int v11; // r12d
  int v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // r10
  __int64 v15; // r12
  int v16; // edx
  __int64 v17; // r15
  int v18; // ebx
  int v19; // r8d
  unsigned int v20; // ecx
  unsigned __int8 *v21; // r10
  unsigned __int64 v22; // r8
  int v23; // [rsp+30h] [rbp+10h]

  if ( a2 )
  {
    v8 = a2;
    v9 = &a4[a6 * a3];
    v10 = 5 - a7;
    while ( 1 )
    {
      v11 = *((_DWORD *)a1 + 1);
      v12 = v11 - *(_DWORD *)a1;
      v13 = (unsigned int)(*(int *)a1 >> v10);
      v14 = (*(_DWORD *)a1 << a7) & 0x1F;
      v15 = (unsigned int)(v11 >> v10);
      v16 = aulMsk[v14];
      v17 = ((unsigned __int8)(*(_DWORD *)a1 << a7) + (unsigned __int8)(v12 << a7)) & 0x1F;
      v23 = aulMsk[v17];
      v18 = ~v23;
      if ( (_DWORD)v13 == (_DWORD)v15 )
      {
        v16 &= v18;
        v19 = 1;
      }
      else
      {
        v19 = 0;
        if ( !(_DWORD)v14 )
          goto LABEL_8;
      }
      *(_DWORD *)&v9[4 * v13] = a5 & v16 | *(_DWORD *)&v9[4 * v13] & ~v16;
      if ( !v19 )
        break;
LABEL_17:
      v9 += a6;
      a1 = (struct _ROW *)((char *)a1 + 8);
      if ( !--v8 )
        return;
    }
    v13 = (unsigned int)(v13 + 1);
LABEL_8:
    v20 = 4 * (v15 - v13);
    if ( v20 )
    {
      v21 = &v9[4 * v13];
      v22 = (unsigned __int64)v20 >> 2;
      if ( v22 )
      {
        if ( ((unsigned __int8)v21 & 4) == 0 )
          goto LABEL_13;
        *(_DWORD *)v21 = a5;
        if ( --v22 )
        {
          v21 += 4;
LABEL_13:
          memset64(v21, a5 | ((unsigned __int64)a5 << 32), v22 >> 1);
          if ( (v22 & 1) != 0 )
            *(_DWORD *)&v21[4 * v22 - 4] = a5;
        }
      }
    }
    if ( (_DWORD)v17 )
      *(_DWORD *)&v9[4 * v15] = a5 & v18 | v23 & *(_DWORD *)&v9[4 * v15];
    goto LABEL_17;
  }
}
