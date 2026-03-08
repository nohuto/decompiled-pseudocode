/*
 * XREFs of ?bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z @ 0x1C02E0018
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C02E00E4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268FB8 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

bool __fastcall bClipSrcDstRects(
        struct _RECTL *const a1,
        struct _RECTL *const a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  LONG top; // r10d
  LONG v6; // eax
  LONG v9; // eax
  struct _POINTL v11; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v12; // [rsp+28h] [rbp-18h] BYREF

  top = a3->top;
  v6 = a4->left - a3->left;
  v12.left = a3->left;
  v11.x = v6;
  v9 = a4->top - top;
  v12.top = top;
  v11.y = v9;
  v12.right = a3->right;
  v12.bottom = a3->bottom;
  ERECTL::operator*=(&v12.left, &a1->left);
  ERECTL::bOffsetAdd((ERECTL *)&v12, &v11, 0);
  ERECTL::operator*=(&v12.left, &a2->left);
  *a4 = v12;
  ERECTL::bOffsetSubtract((ERECTL *)&v12, &v11, 0);
  *a3 = v12;
  return !IsRectEmptyInl(&v12);
}
