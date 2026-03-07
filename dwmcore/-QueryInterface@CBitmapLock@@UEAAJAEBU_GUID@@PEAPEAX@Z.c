__int64 __fastcall CBitmapLock::QueryInterface(CBitmapLock *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapLock>::InternalQueryInterface((_QWORD *)this - 3, a2, (__int64 *)a3);
}
