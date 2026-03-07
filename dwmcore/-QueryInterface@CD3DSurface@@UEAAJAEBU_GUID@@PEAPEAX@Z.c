__int64 __fastcall CD3DSurface::QueryInterface(CD3DSurface *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IDDASwapChain>::InternalQueryInterface((_QWORD *)this - 29, a2, (__int64 *)a3);
}
