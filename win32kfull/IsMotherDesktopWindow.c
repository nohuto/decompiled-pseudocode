/*
 * XREFs of IsMotherDesktopWindow @ 0x1C007E8EC
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01BD8AC (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMotherDesktopWindow(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 == gTermIO[1] || a1 == qword_1C03617B8 )
    return 1;
  return v1;
}
