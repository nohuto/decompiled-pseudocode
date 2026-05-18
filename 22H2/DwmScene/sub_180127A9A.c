/*
 * XREFs of sub_180127A9A @ 0x180127A9A
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_101 @ 0x18001133C (j_unknown_libname_101.c)
 */

__int64 __fastcall sub_180127A9A(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return j_unknown_libname_101();
  }
  return result;
}
