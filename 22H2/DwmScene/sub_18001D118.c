/*
 * XREFs of sub_18001D118 @ 0x18001D118
 * Callers:
 *     sub_180017F6C @ 0x180017F6C (sub_180017F6C.c)
 *     sub_180084B50 @ 0x180084B50 (sub_180084B50.c)
 *     sub_1800898F8 @ 0x1800898F8 (sub_1800898F8.c)
 *     sub_180089BBC @ 0x180089BBC (sub_180089BBC.c)
 *     sub_1800D0B5C @ 0x1800D0B5C (sub_1800D0B5C.c)
 *     sub_1800D4C8C @ 0x1800D4C8C (sub_1800D4C8C.c)
 *     sub_1800E7E48 @ 0x1800E7E48 (sub_1800E7E48.c)
 *     sub_1800EB8A4 @ 0x1800EB8A4 (sub_1800EB8A4.c)
 *     sub_1800F0830 @ 0x1800F0830 (sub_1800F0830.c)
 *     sub_1800F56BC @ 0x1800F56BC (sub_1800F56BC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18001D118(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v2 = -1LL;
  if ( v2 < 0x1000 )
  {
    result = 0LL;
    if ( v2 )
      return operator new(v2);
  }
  else
  {
    v3 = v2 + 39;
    if ( v2 + 39 < v2 )
      v3 = -1LL;
    v4 = operator new(v3);
    v6 = v4;
    if ( !v4 )
    {
      o__invalid_parameter_noinfo_noreturn(0LL, v5);
      __debugbreak();
    }
    result = (_QWORD *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(result - 1) = v6;
  }
  return result;
}
