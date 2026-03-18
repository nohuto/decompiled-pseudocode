/*
 * XREFs of ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00A0474
 * Callers:
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 * Callees:
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00A03D8 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 */

void __fastcall DestroyAllDPIMETRICSFonts(HPALETTE *a1)
{
  DestroyFont(a1 + 4);
  DestroyFont(a1);
  DestroyFont(a1 + 6);
  DestroyFont(a1 + 7);
  DestroyFont(a1 + 8);
}
