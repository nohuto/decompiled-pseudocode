/*
 * XREFs of FONTOBJ_cGetAllGlyphHandles @ 0x1C0291110
 * Callers:
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02B2D50 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z @ 0x1C02C7774 (-chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetAllGlyphHandles(FONTOBJ *pfo, HGLYPH *phg)
{
  unsigned int AllHandles; // eax
  ULONG v3; // ebx
  FONTOBJ *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = pfo;
  AllHandles = RFONTOBJ::chglyGetAllHandles((RFONTOBJ *)&v5, phg);
  v5 = 0LL;
  v3 = AllHandles;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v3;
}
