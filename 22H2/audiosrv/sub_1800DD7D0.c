/*
 * XREFs of sub_1800DD7D0 @ 0x1800DD7D0
 * Callers:
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 *     sub_1800DEF80 @ 0x1800DEF80 (sub_1800DEF80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DD7D0(int a1, int a2, int a3)
{
  __int64 result; // rax

  result = (unsigned int)(int)((double)(int)((double)a1 * 10000000.0 / (double)a2 + 0.5) * (double)a3 / 10000000.0 + 0.5);
  if ( a1 )
  {
    if ( !(_DWORD)result )
      return 1LL;
  }
  return result;
}
