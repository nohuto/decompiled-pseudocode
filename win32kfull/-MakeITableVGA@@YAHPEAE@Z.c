/*
 * XREFs of ?MakeITableVGA@@YAHPEAE@Z @ 0x1C02A5F9C
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C02A5D44 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     ?MapVGA@@YAEEEE@Z @ 0x1C02A600C (-MapVGA@@YAEEEE@Z.c)
 */

__int64 __fastcall MakeITableVGA(unsigned __int8 *a1)
{
  unsigned __int8 i; // di
  unsigned __int8 j; // bl
  unsigned __int8 k; // si

  for ( i = 0; i < 0x20u; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      for ( k = 0; k < 0x20u; ++k )
        *a1++ = MapVGA(i, j, k);
    }
  }
  return 1LL;
}
