void __fastcall vSolidXorRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v8; // rsi
  unsigned __int8 *v9; // r9
  char v10; // di
  int v11; // r14d
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // r14
  int v16; // ecx
  __int64 v17; // rbp
  int v18; // r10d
  int v19; // edx
  int v20; // ecx
  unsigned __int8 *v21; // rdx

  if ( a2 )
  {
    v8 = a2;
    v9 = &a4[a6 * a3];
    v10 = 5 - a7;
    do
    {
      v11 = *((_DWORD *)a1 + 1);
      v12 = v11 - *(_DWORD *)a1;
      v13 = (unsigned int)(*(int *)a1 >> v10);
      v14 = (*(_DWORD *)a1 << a7) & 0x1F;
      v15 = (unsigned int)(v11 >> v10);
      v16 = aulMsk[v14];
      v17 = ((unsigned __int8)(*(_DWORD *)a1 << a7) + (unsigned __int8)(v12 << a7)) & 0x1F;
      v18 = ~aulMsk[v17];
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
      *(_DWORD *)&v9[4 * v13] ^= a5 & v16;
      if ( !v19 )
      {
        v13 = (unsigned int)(v13 + 1);
LABEL_8:
        v20 = v15 - v13;
        if ( (_DWORD)v15 != (_DWORD)v13 )
        {
          v21 = &v9[4 * v13];
          do
          {
            *(_DWORD *)v21 ^= a5;
            v21 += 4;
            --v20;
          }
          while ( v20 );
        }
        if ( (_DWORD)v17 )
          *(_DWORD *)&v9[4 * v15] ^= a5 & v18;
      }
      a1 = (struct _ROW *)((char *)a1 + 8);
      v9 += a6;
      --v8;
    }
    while ( v8 );
  }
}
