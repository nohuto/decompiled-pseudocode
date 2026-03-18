/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x18000976C
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180008F4C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001E3F0 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18004A5D0 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A7CC (--1CVisual@@MEAA@XZ.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x18009BBF8 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800E4F28 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x180219AFC (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z @ 0x180219CCC (-ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCA.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18000982C (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001ECC8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCVisualTree@@.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800FF334 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowCaster::InvalidateMaskContent(CProjectedShadowCaster *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = **((_QWORD **)this + 10);
  v3 = v2;
  while ( v2 != *((_QWORD *)this + 10) )
  {
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v2 + 80);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>,std::_Iterator_base0>::operator++(&v3);
    v2 = v3;
  }
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, CProjectedShadowCaster *))(*(_QWORD *)this + 72LL))(
      this,
      0LL,
      this);
    CProjectedShadowCaster::RequestRedraw(this);
  }
}
