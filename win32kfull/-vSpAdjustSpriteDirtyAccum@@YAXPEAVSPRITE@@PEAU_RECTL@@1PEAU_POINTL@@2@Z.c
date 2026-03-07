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
