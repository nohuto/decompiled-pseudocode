/*
 * XREFs of ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x1C0282B88
 * Callers:
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C027C79C (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

void __fastcall vSpAdjustSpriteDirtyAccum(
        REGION **a1,
        struct _RECTL *a2,
        struct _RECTL *a3,
        struct _POINTL *a4,
        struct _POINTL *a5)
{
  REGION *v8; // [rsp+20h] [rbp-38h] BYREF
  struct _RECTL v9; // [rsp+28h] [rbp-30h] BYREF

  Gre::Base::Globals((Gre::Base *)a1);
  REGION::vDeleteREGION(a1[24]);
  a1[24] = 0LL;
  v9.left = -a4->x;
  v9.top = -a4->y;
  v9.right = a3->right;
  v9.bottom = a3->bottom;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
  if ( v8 )
  {
    ERECTL::bOffsetAdd((ERECTL *)&v9, a5, 0);
    RGNOBJ::vSet((RGNOBJ *)&v8, &v9);
    a1[24] = v8;
  }
}
