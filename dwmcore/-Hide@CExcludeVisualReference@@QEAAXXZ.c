/*
 * XREFs of ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x18012A46C
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18001D410 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x18012DF18 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CExcludeVisualReference::Hide(CExcludeVisualReference *this)
{
  struct CVisual *Visual; // rax
  __int64 v2; // rcx
  char v3; // dl

  Visual = CExcludeVisualReference::GetVisual(this);
  if ( Visual )
  {
    v3 = *((_BYTE *)Visual + 102);
    *((_BYTE *)Visual + 102) = v3 | 2;
    *(_BYTE *)(v2 + 20) = (v3 & 2) != 0;
    *(_DWORD *)(v2 + 16) = 2;
  }
}
