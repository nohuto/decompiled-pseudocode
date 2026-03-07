void __fastcall CVisualTree::FinalRelease(CComposition **this)
{
  CComposition::RemoveVisualTree(this[2], (const struct CVisualTree *)this);
}
