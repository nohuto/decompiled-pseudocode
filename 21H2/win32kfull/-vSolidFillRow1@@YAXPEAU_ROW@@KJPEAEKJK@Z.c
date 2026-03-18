/*
 * XREFs of ?vSolidFillRow1@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x1C0140820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRow1(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  __int64 v7; // r10
  __int64 v9; // r12
  unsigned __int8 *v10; // r9
  char v11; // r15
  int v12; // ebp
  int v13; // r13d
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rbp
  __int64 v17; // r13
  int v18; // ebx
  int v19; // esi
  unsigned int v20; // ecx
  unsigned __int8 *v21; // r10
  unsigned __int64 v22; // r8
  int v23; // edx

  if ( a2 )
  {
    v7 = a6;
    v9 = a2;
    v10 = &a4[a6 * a3];
    v11 = 5 - a7;
    while ( 1 )
    {
      v12 = *((_DWORD *)a1 + 1);
      v13 = v12 - *(_DWORD *)a1;
      v14 = (unsigned int)(*(int *)a1 >> v11);
      v15 = (*(_DWORD *)a1 << a7) & 0x1F;
      v16 = (unsigned int)(v12 >> v11);
      v17 = ((unsigned __int8)(*(_DWORD *)a1 << a7) + (unsigned __int8)(v13 << a7)) & 0x1F;
      v18 = aulMsk[v17];
      v19 = ~v18;
      if ( (_DWORD)v14 == (_DWORD)v16 || (_DWORD)v15 )
      {
        v23 = aulMsk[v15] & v19;
        if ( (_DWORD)v14 != (_DWORD)v16 )
          v23 = aulMsk[v15];
        *(_DWORD *)&v10[4 * v14] = a5 & v23 | *(_DWORD *)&v10[4 * v14] & ~v23;
        if ( (_DWORD)v14 == (_DWORD)v16 )
          goto LABEL_15;
        v14 = (unsigned int)(v14 + 1);
      }
      v20 = 4 * (v16 - v14);
      if ( v20 )
        break;
LABEL_13:
      if ( (_DWORD)v17 )
        *(_DWORD *)&v10[4 * v16] = a5 & v19 | *(_DWORD *)&v10[4 * v16] & v18;
LABEL_15:
      a1 = (struct _ROW *)((char *)a1 + 8);
      v10 += v7;
      if ( !--v9 )
        return;
    }
    v21 = &v10[4 * v14];
    v22 = (unsigned __int64)v20 >> 2;
    if ( v22 )
    {
      if ( ((unsigned __int8)v21 & 4) == 0 )
        goto LABEL_10;
      *(_DWORD *)v21 = a5;
      if ( --v22 )
      {
        v21 += 4;
LABEL_10:
        memset64(v21, a5 | ((unsigned __int64)a5 << 32), v22 >> 1);
        if ( (v22 & 1) != 0 )
          *(_DWORD *)&v21[4 * v22 - 4] = a5;
      }
    }
    v7 = a6;
    goto LABEL_13;
  }
}
