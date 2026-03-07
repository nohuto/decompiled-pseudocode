bool __fastcall Isoch_EP_IsMappingStoppedOrPaused(__int64 a1)
{
  return (*(_DWORD *)(a1 + 108) & 0xFFFFFFFD) == 0;
}
