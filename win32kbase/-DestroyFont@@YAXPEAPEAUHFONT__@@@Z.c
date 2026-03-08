/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00B5B14
 * Callers:
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00B5BB0 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 */

void __fastcall DestroyFont(HFONT *a1, __int64 a2)
{
  struct HOBJ__ *v3; // rcx

  v3 = (struct HOBJ__ *)*a1;
  if ( v3 )
  {
    GreDeleteObject(v3, a2);
    *a1 = 0LL;
  }
}
