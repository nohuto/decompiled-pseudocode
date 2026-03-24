/*
 * XREFs of ?vSolidXorRow1@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x1C02DBBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v8; // rbp
  unsigned __int8 *v9; // r9
  char v10; // si
  int v11; // r11d
  int v12; // r14d
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // r11
  __int64 v16; // r14
  int v17; // r10d
  int v18; // eax
  int v19; // ecx
  unsigned __int8 *v20; // rdx

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
      v16 = ((unsigned __int8)(*(_DWORD *)a1 << a7) + (unsigned __int8)(v12 << a7)) & 0x1F;
      v17 = ~aulMsk[v16];
      if ( (_DWORD)v13 == (_DWORD)v15 || (_DWORD)v14 )
      {
        v18 = v17 & aulMsk[v14];
        if ( (_DWORD)v13 != (_DWORD)v15 )
          v18 = aulMsk[v14];
        *(_DWORD *)&v9[4 * v13] ^= a5 & v18;
        if ( (_DWORD)v13 == (_DWORD)v15 )
          goto LABEL_14;
        v13 = (unsigned int)(v13 + 1);
      }
      v19 = v15 - v13;
      if ( (_DWORD)v15 != (_DWORD)v13 )
      {
        v20 = &v9[4 * v13];
        do
        {
          *(_DWORD *)v20 ^= a5;
          v20 += 4;
          --v19;
        }
        while ( v19 );
      }
      if ( (_DWORD)v16 )
        *(_DWORD *)&v9[4 * v15] ^= a5 & v17;
LABEL_14:
      a1 = (struct _ROW *)((char *)a1 + 8);
      v9 += a6;
      --v8;
    }
    while ( v8 );
  }
}
