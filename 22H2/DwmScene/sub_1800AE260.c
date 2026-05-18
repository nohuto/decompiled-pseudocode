/*
 * XREFs of sub_1800AE260 @ 0x1800AE260
 * Callers:
 *     sub_1800A6138 @ 0x1800A6138 (sub_1800A6138.c)
 *     sub_1800A6DE4 @ 0x1800A6DE4 (sub_1800A6DE4.c)
 *     sub_1800CC2A8 @ 0x1800CC2A8 (sub_1800CC2A8.c)
 *     sub_1800CCDA4 @ 0x1800CCDA4 (sub_1800CCDA4.c)
 *     sub_1800D1F0C @ 0x1800D1F0C (sub_1800D1F0C.c)
 *     sub_1800D3488 @ 0x1800D3488 (sub_1800D3488.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800AE260(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  _QWORD *result; // rax

  v2 = 48 * a2;
  if ( a2 > 0x555555555555555LL )
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
