/*
 * XREFs of bDeleteDCInternal @ 0x1C0008F00
 * Callers:
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0008E98 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreDeleteDC @ 0x1C0008EE0 (GreDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C000BF70 (-vCleanupDCs@@YAXK@Z.c)
 *     hdcOpenDCW @ 0x1C0022A00 (hdcOpenDCW.c)
 *     NtGdiDeleteObjectApp @ 0x1C0033780 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C003C730 (bDeleteDCInternalEx.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1)
{
  return bDeleteDCInternalEx(a1);
}
