bool __fastcall CDrawListBitmap::IsValid(CDrawListBitmap *this)
{
  return *((_QWORD *)this + 1) != 0LL;
}
