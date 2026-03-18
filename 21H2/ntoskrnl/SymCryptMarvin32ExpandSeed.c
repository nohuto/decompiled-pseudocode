/*
 * XREFs of SymCryptMarvin32ExpandSeed @ 0x1403FB0C4
 * Callers:
 *     HvInitializeHashLibrary @ 0x140864754 (HvInitializeHashLibrary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32ExpandSeed(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 != 8 )
    return 209715713LL;
  *a1 = *a2;
  a1[1] = a2[1];
  return result;
}
