/*
 * XREFs of ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C007F69C
 * Callers:
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00881C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 */

__int64 __fastcall BLTRECORD::Src(struct _POINTL *this, LONG a2, LONG a3, int a4, int a5)
{
  this[21].y = a3;
  this[22].y = a5 + a3;
  this[21].x = a2;
  this[22].x = a2 + a4;
  return EXFORMOBJ::bXform((EXFORMOBJ *)&this[2], this + 21, 2uLL);
}
