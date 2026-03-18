/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00A03D8
 * Callers:
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00A0474 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 * Callees:
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 */

void __fastcall DestroyFont(HPALETTE *a1)
{
  HPALETTE v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreDeleteObject(v2);
    *a1 = 0LL;
  }
}
