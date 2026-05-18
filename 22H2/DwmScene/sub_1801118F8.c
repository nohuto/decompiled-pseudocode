/*
 * XREFs of sub_1801118F8 @ 0x1801118F8
 * Callers:
 *     sub_18010FFA0 @ 0x18010FFA0 (sub_18010FFA0.c)
 *     sub_1801104AC @ 0x1801104AC (sub_1801104AC.c)
 *     sub_180110BC8 @ 0x180110BC8 (sub_180110BC8.c)
 * Callees:
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 */

char __fastcall sub_1801118F8(unsigned int a1, const char *a2)
{
  if ( a1 > 0x4000000 )
  {
    sub_1801163DC(&unk_18020DAB0, 3LL, "%s cannot process more than %u vertices (requested: %u)", a2, 0x4000000, a1);
    return 0;
  }
  if ( !a1 )
  {
    sub_1801163DC(&unk_18020DAB0, 3LL, "%s cannot process zero vertices", a2);
    return 0;
  }
  return 1;
}
