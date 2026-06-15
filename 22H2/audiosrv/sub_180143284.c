/*
 * XREFs of sub_180143284 @ 0x180143284
 * Callers:
 *     sub_180142FCC @ 0x180142FCC (sub_180142FCC.c)
 * Callees:
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_1800E7048 @ 0x1800E7048 (sub_1800E7048.c)
 *     sub_18014350C @ 0x18014350C (sub_18014350C.c)
 *     sub_1801436B4 @ 0x1801436B4 (sub_1801436B4.c)
 */

__int64 __fastcall sub_180143284(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v7; // ecx
  int v8; // eax

  if ( a3 && a4 )
  {
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a4 + 4);
    v7 = sub_1801436B4(a1, a4);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 40);
      if ( (__int64 *)(a1 + 24) != a2 )
      {
        sub_1800E7048((__int64 *)(a1 + 24), *a2);
        *a2 = 0LL;
      }
      if ( *(_QWORD *)(a1 + 32) != a3 )
        sub_1800579A4((_QWORD *)(a1 + 32), a3);
      v8 = sub_18014350C(a1);
      v7 = 0;
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v7;
}
