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
