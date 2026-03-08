/*
 * XREFs of ?MakeITableMono@@YAHPEAE@Z @ 0x1C02A5F48
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C02A5D44 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MakeITableMono(bool *a1)
{
  unsigned __int8 i; // dl
  unsigned __int8 j; // r8
  unsigned __int8 k; // r9
  bool v5; // al

  for ( i = 0; i < 0x20u; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      for ( k = 0; k < 0x20u; ++k )
      {
        v5 = (j >> 1) + ((i + (unsigned int)k) >> 2) > 0xF;
        *a1++ = v5;
      }
    }
  }
  return 1LL;
}
