/*
 * XREFs of bDeleteDCInternal @ 0x1C00518F0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C001783C (-vCleanupDCs@@YAXK@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C005188C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreDeleteDC @ 0x1C00518D0 (GreDeleteDC.c)
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C002DFD0 (bDeleteDCInternalEx.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1, int a2, int a3, int a4)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (a2 != 0 ? 0x400000 : 0) | (a3 != 0 ? 0x800000 : 0) | (a4 != 0 ? 0x1000000 : 0);
  return bDeleteDCInternalEx(a1, (unsigned int *)&v5);
}
