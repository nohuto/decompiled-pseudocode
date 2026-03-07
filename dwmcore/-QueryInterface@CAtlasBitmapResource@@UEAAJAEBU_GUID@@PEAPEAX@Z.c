__int64 __fastcall CAtlasBitmapResource::QueryInterface(CAtlasBitmapResource *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapResource>::InternalQueryInterface((_QWORD *)this - 10, a2, (__int64 *)a3);
}
