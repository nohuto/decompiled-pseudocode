bool __fastcall CVisual::HasContent(CVisual *this)
{
  return *((_QWORD *)this + 32) != 0LL;
}
