/*
 * XREFs of SymCryptMarvin32ExpandSeed @ 0x1403EC094
 * Callers:
 *     HvInitializeHashLibrary @ 0x1407A5780 (HvInitializeHashLibrary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32ExpandSeed(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 != 8 )
    return 209715361LL;
  *a1 = *a2;
  a1[1] = a2[1];
  return result;
}
