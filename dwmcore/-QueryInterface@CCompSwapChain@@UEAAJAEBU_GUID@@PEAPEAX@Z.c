__int64 __fastcall CCompSwapChain::QueryInterface(CCompSwapChain *this, struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<ICompositionSwapChain>::InternalQueryInterface((_QWORD *)this - 49, a2, (__int64 *)a3);
}
