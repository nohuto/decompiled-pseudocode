/*
 * XREFs of ?vLine4Octant34@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02FEE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine4Octant34(struct _DDALINE *a1, unsigned __int8 *a2, int a3, char a4)
{
  unsigned int v4; // ebx
  int v5; // r11d
  int v6; // r15d
  unsigned __int8 *v7; // rdi
  int v8; // ebp
  int v9; // esi
  __int64 v10; // r14
  char v11; // r8

  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 6);
  v6 = *((_DWORD *)a1 + 4);
  v7 = a2;
  v8 = *((_DWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 3);
  v10 = a3;
  v11 = a4 & 0xF | (16 * (a4 & 0xF));
  a2[(unsigned __int64)v4 >> 1] = byte_1C032B800[v4 & 1] & a2[(unsigned __int64)v4 >> 1] | v11 & ~byte_1C032B800[v4 & 1];
  while ( --v9 )
  {
    --v4;
    v5 += v8;
    if ( v5 >= 0 )
    {
      v5 -= v6;
      v7 += v10;
    }
    v7[(unsigned __int64)v4 >> 1] = v7[(unsigned __int64)v4 >> 1] & byte_1C032B800[v4 & 1] | v11 & ~byte_1C032B800[v4 & 1];
  }
}
