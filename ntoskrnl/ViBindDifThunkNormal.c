/*
 * XREFs of ViBindDifThunkNormal @ 0x140AC78D8
 * Callers:
 *     VfBindDifDDIWrappers @ 0x140AC7220 (VfBindDifDDIWrappers.c)
 * Callees:
 *     <none>
 */

char __fastcall ViBindDifThunkNormal(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rax
  char result; // al

  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 52) == a3 )
    {
      v5 = *(_QWORD **)(a1 + 40);
      if ( v5 )
        break;
    }
    a1 += 56LL;
    if ( !*(_QWORD *)a1 )
      return 0;
  }
  *v5 = a4;
  result = 1;
  *(_DWORD *)(a1 + 32) |= 1u;
  *(_DWORD *)(a5 + 12) |= *(_DWORD *)(a1 + 32);
  return result;
}
