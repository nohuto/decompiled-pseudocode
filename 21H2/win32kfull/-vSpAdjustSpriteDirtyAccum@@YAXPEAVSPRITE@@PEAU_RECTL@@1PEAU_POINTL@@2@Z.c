/*
 * XREFs of ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x1C0282798
 * Callers:
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C027E358 (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 * Callees:
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0156F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

void __fastcall vSpAdjustSpriteDirtyAccum(
        REGION **a1,
        struct _RECTL *a2,
        struct _RECTL *a3,
        struct _POINTL *a4,
        struct _POINTL *a5)
{
  REGION *v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  struct _RECTL v10; // [rsp+30h] [rbp-20h] BYREF

  REGION::vDeleteREGION(a1[24]);
  a1[24] = 0LL;
  v10.left = -a4->x;
  v10.top = -a4->y;
  v10.right = a3->right;
  v10.bottom = a3->bottom;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
  if ( v8 )
  {
    ERECTL::bOffsetAdd((ERECTL *)&v10, a5, 0);
    RGNOBJ::vSet((RGNOBJ *)&v8, &v10);
    a1[24] = v8;
  }
  if ( v9 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
}
