__int64 __fastcall CMILCOMBaseT<IDDASwapChain>::AddRef(__int64 a1)
{
  return CMILCOMBaseT<IDeviceResource>::AddRef(a1 - *(int *)(a1 - 4) - 128);
}
