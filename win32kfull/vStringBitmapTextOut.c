/*
 * XREFs of vStringBitmapTextOut @ 0x1C02A2F94
 * Callers:
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02A153C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     vDrawGlyph @ 0x1C02A2B58 (vDrawGlyph.c)
 *     STROBJ_bEnum @ 0x1C02DD9A0 (STROBJ_bEnum.c)
 */

char __fastcall vStringBitmapTextOut(STROBJ *a1, unsigned int *a2, unsigned int a3)
{
  LONG left; // ebx
  PGLYPHPOS pgp; // r8
  LONG top; // ebp
  char result; // al
  GLYPHBITS *pgb; // rcx
  ULONG v10; // [rsp+40h] [rbp+8h] BYREF
  PGLYPHPOS v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  left = 0;
  pgp = a1->pgp;
  top = a1->rclBkGround.top;
  if ( a1->rclBkGround.left <= 0 )
    left = a1->rclBkGround.left;
  a1[1].cGlyphs = 0;
  a1[1].flAccel = 0;
  if ( pgp || (result = STROBJ_bEnum(a1, &v10, &v11), (pgp = v11) != 0LL) )
  {
    pgb = pgp->pgdf->pgb;
    pgp->ptl.x += pgb->ptlOrigin.x - left;
    pgp->ptl.y += pgb->ptlOrigin.y - top;
    return vDrawGlyph(a2, a3, (__int64)pgp);
  }
  return result;
}
