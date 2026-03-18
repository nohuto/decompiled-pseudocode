/*
 * XREFs of ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18000982C
 * Callers:
 *     ?ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL@@@Z @ 0x180008E40 (-ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRO.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x180009044 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x18000976C (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x1800097E0 (-DirtyProjectedShadowCasters@CVisual@@QEAAXXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001E3F0 (-NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z @ 0x180219C00 (-ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWC.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180005C2C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::RequestRedraw(CProjectedShadowCaster *this)
{
  CProjectedShadowScene **v1; // rdi
  CProjectedShadowScene **i; // rbx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = (CProjectedShadowScene **)*((_QWORD *)this + 13);
    for ( i = (CProjectedShadowScene **)*((_QWORD *)this + 12); i != v1; ++i )
      CProjectedShadowScene::RequestRedrawAll(*i);
  }
}
