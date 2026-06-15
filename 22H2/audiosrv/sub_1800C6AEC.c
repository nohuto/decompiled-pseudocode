/*
 * XREFs of sub_1800C6AEC @ 0x1800C6AEC
 * Callers:
 *     sub_1800C8E8C @ 0x1800C8E8C (sub_1800C8E8C.c)
 * Callees:
 *     _o_wmemcpy_s @ 0x18006AB74 (_o_wmemcpy_s.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800C6AEC(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = -1LL;
  if ( a4 == -1 )
  {
    do
      ++v4;
    while ( *(_WORD *)(a3 + 2 * v4) );
  }
  result = o_wmemcpy_s();
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 12 )
      sub_1800B8610(-2147024882);
    if ( (_DWORD)result == 22 || (_DWORD)result == 34 )
      sub_1800B8610(-2147024809);
    if ( (_DWORD)result != 80 )
      sub_1800B8610(-2147467259);
  }
  return result;
}
