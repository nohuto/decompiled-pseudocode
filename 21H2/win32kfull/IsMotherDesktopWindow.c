/*
 * XREFs of IsMotherDesktopWindow @ 0x1C0062F70
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01E1F08 (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMotherDesktopWindow(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 == gTermIO[1] || a1 == qword_1C0336E48 )
    return 1;
  return v1;
}
