/*
 * XREFs of sub_14042C9C0 @ 0x14042C9C0
 * Callers:
 *     sub_14042C980 @ 0x14042C980 (sub_14042C980.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14042C9C0(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_14042C980(v2);
  return result;
}
