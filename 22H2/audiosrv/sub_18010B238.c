/*
 * XREFs of sub_18010B238 @ 0x18010B238
 * Callers:
 *     sub_180106534 @ 0x180106534 (sub_180106534.c)
 *     sub_180106EC4 @ 0x180106EC4 (sub_180106EC4.c)
 * Callees:
 *     sub_18010AE5C @ 0x18010AE5C (sub_18010AE5C.c)
 *     sub_18010BA60 @ 0x18010BA60 (sub_18010BA60.c)
 */

__int64 __fastcall sub_18010B238(__int64 a1)
{
  __int64 result; // rax

  result = sub_18010AE5C(a1, *(_DWORD *)(a1 + 72));
  if ( *(_DWORD *)(a1 + 80) < (unsigned int)result )
    return sub_18010BA60(a1, (unsigned int)result, 0LL);
  return result;
}
