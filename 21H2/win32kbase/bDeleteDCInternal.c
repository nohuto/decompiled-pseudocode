/*
 * XREFs of bDeleteDCInternal @ 0x1C0007A80
 * Callers:
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0007A18 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreDeleteDC @ 0x1C0007A60 (GreDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C000AAF0 (-vCleanupDCs@@YAXK@Z.c)
 *     hdcOpenDCW @ 0x1C0021590 (hdcOpenDCW.c)
 *     NtGdiDeleteObjectApp @ 0x1C0032310 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C003B2C0 (bDeleteDCInternalEx.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1)
{
  return bDeleteDCInternalEx(a1);
}
