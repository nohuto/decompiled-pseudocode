/*
 * XREFs of ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1800E7EF4
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180098440 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x18012DD14 (-ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z.c)
 * Callees:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180098E88 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z @ 0x1800E7F4C (-UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E7F90 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 */

void __fastcall CVisual::SetVisible(CVisual *this, char a2)
{
  char v3; // cl
  CVisual *v4; // rcx
  bool v5; // r8

  v3 = *((_BYTE *)this + 103);
  if ( a2 != (v3 & 1) )
  {
    *((_BYTE *)this + 103) = a2 | v3 & 0xFE;
    v4 = (CVisual *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      if ( a2 )
      {
        CVisual::DirtyForVisibleChild(v4, this);
        v5 = 1;
      }
      else
      {
        CVisual::DirtyForInvisibleChild((CComposition **)v4, this);
        v5 = 0;
      }
      CVisual::UpdateBackdropCounts(*((CVisual **)this + 11), this, v5);
    }
  }
}
