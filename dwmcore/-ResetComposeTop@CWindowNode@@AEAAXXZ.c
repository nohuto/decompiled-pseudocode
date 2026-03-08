/*
 * XREFs of ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x1800AC200
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800A9ED0 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ??1CComposeTop@@QEAA@XZ @ 0x18001FEC0 (--1CComposeTop@@QEAA@XZ.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x18003A490 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 */

void __fastcall CWindowNode::ResetComposeTop(CWindowNode *this)
{
  struct CDesktopTree *DesktopTree; // rax
  CComposeTop *v2; // rbx

  DesktopTree = CVisual::GetDesktopTree(this);
  if ( DesktopTree )
  {
    v2 = (CComposeTop *)*((_QWORD *)DesktopTree + 593);
    *((_QWORD *)DesktopTree + 593) = 0LL;
    if ( v2 )
    {
      CComposeTop::~CComposeTop(v2);
      operator delete(v2, 0xA8uLL);
    }
  }
}
