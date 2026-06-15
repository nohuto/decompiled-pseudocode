/*
 * XREFs of sub_1800D5648 @ 0x1800D5648
 * Callers:
 *     sub_1800045C4 @ 0x1800045C4 (sub_1800045C4.c)
 *     sub_180006A60 @ 0x180006A60 (sub_180006A60.c)
 *     sub_180006CE0 @ 0x180006CE0 (sub_180006CE0.c)
 *     sub_180006FA0 @ 0x180006FA0 (sub_180006FA0.c)
 *     sub_1800077A8 @ 0x1800077A8 (sub_1800077A8.c)
 *     sub_180007854 @ 0x180007854 (sub_180007854.c)
 *     sub_180007930 @ 0x180007930 (sub_180007930.c)
 *     sub_180007AC0 @ 0x180007AC0 (sub_180007AC0.c)
 *     sub_180007C24 @ 0x180007C24 (sub_180007C24.c)
 *     sub_1800D4D18 @ 0x1800D4D18 (sub_1800D4D18.c)
 *     sub_1800D5D94 @ 0x1800D5D94 (sub_1800D5D94.c)
 * Callees:
 *     <none>
 */

signed int sub_1800D5648()
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
