/*
 * XREFs of sub_140413E00 @ 0x140413E00
 * Callers:
 *     sub_140413DC0 @ 0x140413DC0 (sub_140413DC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140413E00(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140413DC0(v2);
  return result;
}
