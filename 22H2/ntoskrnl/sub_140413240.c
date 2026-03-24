/*
 * XREFs of sub_140413240 @ 0x140413240
 * Callers:
 *     sub_140413200 @ 0x140413200 (sub_140413200.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140413240(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140413200(v2);
  return result;
}
