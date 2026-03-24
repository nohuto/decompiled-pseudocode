/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0017954
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0017990 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngGetDC @ 0x1C02772D0 (DxgkEngGetDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0277550 (DxgkEngLockVisRgn.c)
 *     GreSetPaletteEntries @ 0x1C02B7500 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B7AC0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx(v3, a2, 0LL);
  return this;
}
