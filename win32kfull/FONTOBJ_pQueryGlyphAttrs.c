/*
 * XREFs of FONTOBJ_pQueryGlyphAttrs @ 0x1C029B010
 * Callers:
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02CEA40 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02E3190 (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 */

PFD_GLYPHATTR __stdcall FONTOBJ_pQueryGlyphAttrs(FONTOBJ *pfo, ULONG iMode)
{
  SIZE sizLogResPpi; // rax
  struct _FD_GLYPHATTR *GlyphAttrs; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( pfo && (sizLogResPpi = pfo[1].sizLogResPpi) != 0LL && *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3352LL) )
  {
    v5[0] = *(_QWORD *)&pfo[2].iUniq;
    GlyphAttrs = PFFOBJ::QueryGlyphAttrs((PFFOBJ *)v5, pfo, iMode);
  }
  else
  {
    GlyphAttrs = 0LL;
  }
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  return GlyphAttrs;
}
