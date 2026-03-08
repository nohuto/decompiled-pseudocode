/*
 * XREFs of ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x18012FCC0
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18012FA60 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x18000D178 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1800AB320 (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

char __fastcall CWindowNode::ProcessReadyFlipExSurfaces(CWindowNode *this)
{
  char v1; // si
  __int64 *v3; // rbp
  unsigned __int64 Count; // rdi
  unsigned __int64 *v5; // rax

  v1 = 0;
  if ( !*((_BYTE *)this + 894) )
  {
    *((_BYTE *)this + 894) = 1;
    v3 = (__int64 *)((char *)this + 784);
    Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 784));
    if ( Count )
    {
      while ( 1 )
      {
        v5 = CPtrArrayBase::operator[](v3, --Count);
        if ( CCompositionSurfaceBitmap::GetRenderingRealization((CCompositionSurfaceBitmap *)v5) )
          break;
        if ( !Count )
          goto LABEL_9;
      }
      if ( !*((_BYTE *)this + 896) || Count )
      {
        *((_BYTE *)this + 896) = 1;
        CWindowNode::DiscardOldestFlipExSurfaces(this, Count);
        CVisual::PropagateFlags((__int64)this, 4u);
        v1 = 1;
      }
    }
LABEL_9:
    *((_BYTE *)this + 894) = 0;
  }
  return v1;
}
