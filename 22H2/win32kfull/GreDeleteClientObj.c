/*
 * XREFs of GreDeleteClientObj @ 0x1C02A7CE0
 * Callers:
 *     NtGdiDeleteClientObj @ 0x1C015ADC0 (NtGdiDeleteClientObj.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeleteClientObj(__int64 a1)
{
  __int64 result; // rax
  char v2; // [rsp+20h] [rbp-18h]

  v2 = 6;
  result = HmgRemoveObject(a1, 0LL, 0LL, 1LL, v2, 0LL);
  if ( result )
  {
    FreeObject(result, 6LL);
    return 1LL;
  }
  return result;
}
