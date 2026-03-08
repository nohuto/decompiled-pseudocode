/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x1800C2C40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?HasSpriteContent@CWindowNode@@AEBA_NXZ @ 0x1800C2C88 (-HasSpriteContent@CWindowNode@@AEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800C2CC0 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 */

bool __fastcall CWindowNode::HasSingleD2DBitmapOrPrimitiveGroupInternal(CWindowNode *this)
{
  __int64 v1; // r9
  __int64 Count; // rax
  CVisual *v3; // r9
  char v4; // r8

  CWindowNode::HasSpriteContent(this);
  Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v1 + 784));
  if ( v4 )
  {
    if ( !Count )
      return !CVisual::HasNonEmptyContent(v3);
    return 0;
  }
  else
  {
    if ( Count )
      return !CVisual::HasNonEmptyContent(v3);
    return CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(v3);
  }
}
