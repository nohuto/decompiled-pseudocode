/*
 * XREFs of sub_1800D5670 @ 0x1800D5670
 * Callers:
 *     sub_180006CE0 @ 0x180006CE0 (sub_180006CE0.c)
 *     sub_180006FA0 @ 0x180006FA0 (sub_180006FA0.c)
 *     sub_180007854 @ 0x180007854 (sub_180007854.c)
 *     sub_180007930 @ 0x180007930 (sub_180007930.c)
 *     sub_180007C24 @ 0x180007C24 (sub_180007C24.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

void __noreturn sub_1800D5670()
{
  signed int LastError; // eax

  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  sub_1800B8610(LastError);
}
