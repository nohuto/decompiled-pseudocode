/*
 * XREFs of BiTranslateBootOrder @ 0x14082D114
 * Callers:
 *     BiBindEfiBootManager @ 0x14082C288 (BiBindEfiBootManager.c)
 * Callees:
 *     BiTranslateBootEntryId @ 0x14082F2D4 (BiTranslateBootEntryId.c)
 */

__int64 __fastcall BiTranslateBootOrder(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // edi
  __int64 v10; // rsi
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  if ( *a4 )
  {
    v10 = *a4;
    do
    {
      if ( (int)BiTranslateBootEntryId(a1, *a2, a3 + 16LL * v4) < 0 )
        v5 = -2147483635;
      else
        ++v4;
      ++a2;
      --v10;
    }
    while ( v10 );
  }
  result = v5;
  *a4 = v4;
  return result;
}
