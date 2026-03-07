__int64 __fastcall CHolographicExclusivePresentData::QueryInterface(
        CHolographicExclusivePresentData *this,
        struct _GUID *a2,
        void **a3)
{
  return CMILCOMBaseT<IUnknown>::InternalQueryInterface((__int64)this + 8, a2, a3);
}
