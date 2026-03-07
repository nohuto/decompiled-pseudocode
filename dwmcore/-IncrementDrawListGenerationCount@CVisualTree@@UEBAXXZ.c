void __fastcall CVisualTree::IncrementDrawListGenerationCount(CVisualTree *this)
{
  ++*((_QWORD *)this + 588);
}
