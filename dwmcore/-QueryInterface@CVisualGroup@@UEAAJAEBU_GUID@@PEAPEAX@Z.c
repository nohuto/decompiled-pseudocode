// attributes: thunk
__int64 __fastcall CVisualGroup::QueryInterface(CVisualGroup *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IUnknown>::InternalQueryInterface(this, a2, a3);
}
