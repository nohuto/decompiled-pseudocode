__int64 __fastcall CColorKeyBitmap::QueryInterface(CColorKeyBitmap *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<ID2DBitmapCacheSource>::InternalQueryInterface((_QWORD *)this - 3, a2, (__int64 *)a3);
}
