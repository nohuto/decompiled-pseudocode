__int64 __fastcall CMILCOMBaseT<IDeviceResource>::QueryInterface(__int64 a1)
{
  return CMILCOMBaseT<IDDASwapChain>::QueryInterface(a1 - *(int *)(a1 - 4) - 72);
}
