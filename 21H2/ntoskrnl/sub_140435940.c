/*
 * XREFs of sub_140435940 @ 0x140435940
 * Callers:
 *     sub_140435900 @ 0x140435900 (sub_140435900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140435940(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140435900(v2);
  return result;
}
