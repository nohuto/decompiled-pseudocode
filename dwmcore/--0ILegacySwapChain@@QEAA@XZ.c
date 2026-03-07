ILegacySwapChain *__fastcall ILegacySwapChain::ILegacySwapChain(ILegacySwapChain *this)
{
  ILegacySwapChain *v1; // r9
  __int64 v2; // rax

  IOverlaySwapChain::IOverlaySwapChain(this);
  v2 = *((_QWORD *)v1 + 1);
  *(_QWORD *)v1 = &ILegacySwapChain::`vftable';
  *(_QWORD *)((char *)v1 + *(int *)(v2 + 4) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 1) + 8LL) + 8) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)v1 + *(int *)(*((_QWORD *)v1 + 1) + 12LL) + 8) = &IOverlaySwapChain::`vftable'{for `IDeviceResource'};
  return v1;
}
