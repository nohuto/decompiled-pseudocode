/*
 * XREFs of sub_180106DAC @ 0x180106DAC
 * Callers:
 *     sub_180106E0C @ 0x180106E0C (sub_180106E0C.c)
 * Callees:
 *     sub_180106850 @ 0x180106850 (sub_180106850.c)
 *     sub_1801069E4 @ 0x1801069E4 (sub_1801069E4.c)
 *     sub_18010AE5C @ 0x18010AE5C (sub_18010AE5C.c)
 *     sub_18010BA60 @ 0x18010BA60 (sub_18010BA60.c)
 */

__int64 __fastcall sub_180106DAC(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // rbx

  for ( result = sub_180106850(a1, a2); ; result = sub_1801069E4(a1, a2) )
  {
    v6 = result;
    if ( !result )
      break;
    if ( *(_DWORD *)(result + 76) )
    {
      v5 = sub_18010AE5C(result);
      sub_18010BA60(v6, v5, 0LL);
    }
  }
  return result;
}
