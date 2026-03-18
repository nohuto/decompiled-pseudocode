/*
 * XREFs of ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C0051938
 * Callers:
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 * Callees:
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0051830 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 */

void __fastcall DestroyAllDPIMETRICSFonts(HRGN *a1)
{
  DestroyFont(a1 + 4);
  DestroyFont(a1);
  DestroyFont(a1 + 6);
  DestroyFont(a1 + 7);
  DestroyFont(a1 + 8);
}
