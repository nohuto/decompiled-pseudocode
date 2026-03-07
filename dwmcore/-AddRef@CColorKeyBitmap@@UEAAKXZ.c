__int64 __fastcall CColorKeyBitmap::AddRef(CColorKeyBitmap *this)
{
  return CMILRefCountImpl::AddReference((CColorKeyBitmap *)((char *)this - 8));
}
