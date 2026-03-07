__int64 __fastcall CLegacyStereoSwapChain::PresentDFlip(CD3DDevice **this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CD3DDevice::Present(this[10], this[28]);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xB1u, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0x_EventWriteTransfer(
        v3,
        (__int64)&EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT,
        *((unsigned int *)this + 24));
    CLegacySwapChain::PostPresent((CLegacySwapChain *)this, 0, v4 == 142213121);
  }
  return v4;
}
