/*
 * XREFs of ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1800AB260
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800A9ED0 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800AB238 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x1800ABDE0 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

void __fastcall CWindowNode::DiscardOldestGdiSpriteBitmaps(CWindowNode *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  CPtrArrayBase *i; // rsi
  struct CResource *v6; // rax

  v2 = 0LL;
  for ( i = (CWindowNode *)((char *)this + 776); v2 < a2; ++v2 )
  {
    v6 = (struct CResource *)CPtrArrayBase::operator[](i, v2);
    CResource::UnRegisterNotifierInternal(this, v6);
  }
  CPtrArrayBase::RemoveAt(i, 0LL, a2);
}
