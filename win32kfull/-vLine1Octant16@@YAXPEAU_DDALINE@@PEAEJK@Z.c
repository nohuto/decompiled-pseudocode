/*
 * XREFs of ?vLine1Octant16@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02FE6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine1Octant16(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ebp
  int v6; // r14d
  int v7; // ebx
  unsigned __int8 *v8; // rdx
  int v9; // ecx
  __int64 v10; // rsi
  unsigned __int8 v11; // r8

  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v7 = 128 >> (*((_DWORD *)a1 + 1) & 7);
  v8 = &a2[(unsigned __int64)*((unsigned int *)a1 + 1) >> 3];
  v9 = *((_DWORD *)a1 + 3) - 1;
  v10 = a3;
  v11 = *v8;
  if ( a4 )
  {
    for ( *v8 = v7 | v11; v9; --v9 )
    {
      v8 += v10;
      v4 += v6;
      if ( v4 >= 0 )
      {
        v4 -= v5;
        LOBYTE(v7) = (unsigned __int8)v7 >> 1;
        if ( !(_BYTE)v7 )
        {
          LOBYTE(v7) = 0x80;
          ++v8;
        }
      }
      *v8 |= v7;
    }
  }
  else
  {
    for ( *v8 = v11 & ~(_BYTE)v7; v9; --v9 )
    {
      v8 += v10;
      v4 += v6;
      if ( v4 >= 0 )
      {
        v4 -= v5;
        LOBYTE(v7) = (unsigned __int8)v7 >> 1;
        if ( !(_BYTE)v7 )
        {
          LOBYTE(v7) = 0x80;
          ++v8;
        }
      }
      *v8 &= ~(_BYTE)v7;
    }
  }
}
