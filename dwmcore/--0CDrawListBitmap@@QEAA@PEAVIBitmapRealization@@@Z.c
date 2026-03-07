CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, struct IBitmapRealization *a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)this = 0LL;
  v3 = (_QWORD *)((char *)this + 8);
  *((_BYTE *)this + 16) = 0;
  *v3 = 0LL;
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(v3, a2);
  return this;
}
