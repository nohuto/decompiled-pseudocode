/*
 * XREFs of ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18002AA68
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180029BEC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180021D88 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 */

void __fastcall CTopLevelWindow::SetShadowOpacity(CTopLevelWindow *this, float a2)
{
  CAtlasedImage *v3; // rcx
  CAtlasedImage *v4; // rcx
  CAtlasedImage *v5; // rcx
  CAtlasedImage *v6; // rcx

  v3 = (CAtlasedImage *)*((_QWORD *)this + 56);
  if ( v3 )
    CAtlasedImage::SetOpacity(v3, a2);
  v4 = (CAtlasedImage *)*((_QWORD *)this + 57);
  if ( v4 )
    CAtlasedImage::SetOpacity(v4, a2);
  v5 = (CAtlasedImage *)*((_QWORD *)this + 58);
  if ( v5 )
    CAtlasedImage::SetOpacity(v5, a2);
  v6 = (CAtlasedImage *)*((_QWORD *)this + 59);
  if ( v6 )
    CAtlasedImage::SetOpacity(v6, a2);
}
