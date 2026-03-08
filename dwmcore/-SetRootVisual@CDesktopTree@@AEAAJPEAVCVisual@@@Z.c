/*
 * XREFs of ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x180103434
 * Callers:
 *     ?ProcessSetRoot@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_SETROOT@@@Z @ 0x1801033E0 (-ProcessSetRoot@CDesktopTree@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPTREE_SETROOT@@@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18020C844 (--1CDesktopTree@@UEAA@XZ.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x18020C988 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180099E24 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x18009BAB8 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopTree::SetRootVisual(CComposition ***this, struct CVisual *a2)
{
  unsigned int v4; // ebx
  int inserted; // eax
  __int64 v6; // rcx

  v4 = 0;
  CVisual::RemoveAllChildren(this[590]);
  if ( a2 )
  {
    inserted = CVisual::InsertChild((CVisual *)this[590], a2, 0LL, 1);
    v4 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, inserted, 0x1A5u, 0LL);
  }
  return v4;
}
