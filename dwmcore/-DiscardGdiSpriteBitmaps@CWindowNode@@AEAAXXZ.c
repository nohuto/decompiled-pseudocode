/*
 * XREFs of ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800AB238
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800A9ED0 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800AAF34 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

void __fastcall CWindowNode::DiscardGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned __int64 Count; // rax
  CWindowNode *v2; // r8

  Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 776));
  CWindowNode::DiscardOldestGdiSpriteBitmaps(v2, Count);
}
