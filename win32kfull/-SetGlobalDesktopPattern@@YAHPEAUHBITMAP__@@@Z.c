/*
 * XREFs of ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1C0203BC8
 * Callers:
 *     SetDesktopPattern @ 0x1C010AAFC (SetDesktopPattern.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetGlobalDesktopPattern(HBITMAP a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 != (HBITMAP)g_hbmDesktopPattern )
  {
    if ( g_hbmDesktopPattern )
      GreDeleteObject(g_hbmDesktopPattern);
    if ( a1 )
      GreSetBitmapOwner(a1, 0LL);
    v2 = 1;
    g_hbmDesktopPattern = a1;
  }
  return v2;
}
