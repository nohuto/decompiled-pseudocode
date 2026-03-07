void __fastcall CDesktopTree::IncrementDrawListGenerationCount(CDesktopTree *this)
{
  *((_QWORD *)this + 588) = ++CDesktopTree::s_desktopDrawlistGenerationCount;
}
