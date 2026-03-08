/*
 * XREFs of ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z @ 0x1C024F720
 * Callers:
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C024FD48 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     ?DT_GetLongChar@@YAKPEBGHH@Z @ 0x1C024FAA8 (-DT_GetLongChar@@YAKPEBGHH@Z.c)
 */

__int64 __fastcall DT_AdjustBreakForSurrogatesAndVariationSelectors(
        const unsigned __int16 *a1,
        unsigned int a2,
        int a3)
{
  __int64 result; // rax
  unsigned int LongChar; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // r8d

  if ( !a2 )
    return 0LL;
  LongChar = DT_GetLongChar(a1, a2 - 1, a3);
  v8 = a2 + 1;
  v9 = LongChar;
  if ( LongChar < 0x10000 )
    v8 = a2;
  if ( LongChar < 0xFE00 || (result = v8, v9 > 0xFE0F) )
  {
    if ( v9 < 0xE0100 || (result = v8, v9 > 0xE01EF) )
    {
      result = v8;
      if ( (int)v8 < a3 )
      {
        v11 = DT_GetLongChar(a1, v8, a3);
        if ( v11 - 65024 <= 0xF )
          return v10 + 2 - (v11 < 0x10000);
        result = v10;
        if ( v11 >= 0xE0100 && v11 <= 0xE01EF )
          return v10 + 2 - (v11 < 0x10000);
      }
    }
  }
  return result;
}
