/*
 * XREFs of ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C008A0F0
 * Callers:
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028B85C (GrePlgBlt.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 */

__int64 __fastcall BLTRECORD::Src(struct _POINTL *this, LONG a2, LONG a3, int a4, int a5)
{
  this[22].y = a3;
  this[23].y = a5 + a3;
  this[22].x = a2;
  this[23].x = a2 + a4;
  return EXFORMOBJ::bXform((EXFORMOBJ *)&this[2], this + 22, 2LL);
}
