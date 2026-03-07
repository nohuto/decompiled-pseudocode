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
