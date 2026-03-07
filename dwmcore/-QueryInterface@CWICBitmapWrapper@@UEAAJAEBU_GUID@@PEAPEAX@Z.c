__int64 __fastcall CWICBitmapWrapper::QueryInterface(CWICBitmapWrapper *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapSource>::InternalQueryInterface((char *)this - 24, a2, a3);
}
