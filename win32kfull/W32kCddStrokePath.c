BOOL __fastcall W32kCddStrokePath(
        SURFOBJ *a1,
        PATHOBJ *a2,
        CLIPOBJ *a3,
        XFORMOBJ *a4,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix,
        __int64 a9)
{
  __int64 p_pvBits; // rbx
  BOOL result; // eax

  p_pvBits = (__int64)&a1[7].pvBits;
  if ( !a1 )
    p_pvBits = 632LL;
  *(_QWORD *)p_pvBits = a9;
  result = EngStrokePath(a1, a2, a3, a4, pbo, pptlBrushOrg, plineattrs, mix);
  *(_QWORD *)p_pvBits = 0LL;
  return result;
}
