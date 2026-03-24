/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x180214C90
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x1800F64E0 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x1800F64F0 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CDrawListEntry::Release((CMesh2DEffect *)((char *)this + 16));
}
