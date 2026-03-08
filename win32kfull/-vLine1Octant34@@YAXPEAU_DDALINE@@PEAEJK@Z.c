/*
 * XREFs of ?vLine1Octant34@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02FE860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine1Octant34(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ebp
  int v6; // r14d
  __int64 v7; // rsi
  unsigned __int8 *v8; // rdx
  int v9; // ebx
  int v10; // r8d
  unsigned __int8 v11; // cl
  bool v12; // zf
  unsigned __int8 *v13; // rax
  char v14; // cl
  bool v15; // sf
  unsigned __int8 *v16; // rax
  char v17; // cl

  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v7 = a3;
  v8 = &a2[(unsigned __int64)*((unsigned int *)a1 + 1) >> 3];
  v9 = 128 >> (*((_BYTE *)a1 + 4) & 7);
  v10 = *((_DWORD *)a1 + 3) - 1;
  v11 = *v8;
  if ( a4 )
  {
    for ( *v8 = v9 | v11; v10; --v10 )
    {
      v12 = 2 * (_BYTE)v9 == 0;
      v13 = v8 - 1;
      v14 = 2 * v9;
      LOBYTE(v9) = 2 * v9;
      if ( v12 )
        LOBYTE(v9) = 1;
      if ( v14 )
        v13 = v8;
      v15 = v6 + v4 < 0;
      v4 += v6;
      v8 = v13;
      if ( !v15 )
      {
        v4 -= v5;
        v8 = &v13[v7];
      }
      *v8 |= v9;
    }
  }
  else
  {
    for ( *v8 = v11 & ~(_BYTE)v9; v10; --v10 )
    {
      v12 = 2 * (_BYTE)v9 == 0;
      v16 = v8 - 1;
      v17 = 2 * v9;
      LOBYTE(v9) = 2 * v9;
      if ( v12 )
        LOBYTE(v9) = 1;
      if ( v17 )
        v16 = v8;
      v15 = v6 + v4 < 0;
      v4 += v6;
      v8 = v16;
      if ( !v15 )
      {
        v4 -= v5;
        v8 = &v16[v7];
      }
      *v8 &= ~(_BYTE)v9;
    }
  }
}
