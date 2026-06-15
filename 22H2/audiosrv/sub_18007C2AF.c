/*
 * XREFs of sub_18007C2AF @ 0x18007C2AF
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_207 @ 0x18006FC2C (j_unknown_libname_207.c)
 */

__int64 __fastcall sub_18007C2AF(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return j_unknown_libname_207(a2 + 96, a2);
  }
  return result;
}
