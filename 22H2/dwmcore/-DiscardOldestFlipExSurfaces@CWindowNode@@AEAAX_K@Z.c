/*
 * XREFs of ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1800ABA40
 * Callers:
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x1800AB9F0 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180133E70 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180256B80 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DBDDC (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

void __fastcall CWindowNode::DiscardOldestFlipExSurfaces(CWindowNode *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  CPtrArrayBase *i; // rsi
  struct CResource *v6; // rax

  v2 = 0LL;
  for ( i = (CWindowNode *)((char *)this + 784); v2 < a2; ++v2 )
  {
    v6 = (struct CResource *)CPtrArrayBase::operator[](i, v2);
    CResource::UnRegisterNotifierInternal(this, v6);
  }
  CPtrArrayBase::RemoveAt(i, 0LL, a2);
}
