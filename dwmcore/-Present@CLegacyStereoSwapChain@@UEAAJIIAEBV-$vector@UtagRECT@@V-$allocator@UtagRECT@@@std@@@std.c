__int64 __fastcall CLegacyStereoSwapChain::Present(CD3DDevice **this, __int64 a2, char a3, __int64 a4, unsigned int a5)
{
  char v7; // bl
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi

  if ( (a3 & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    (*((void (__fastcall **)(CD3DDevice **))*this + 3))(this);
    v7 = 0;
  }
  v8 = CD3DDevice::Present(this[10], this[28]);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x88u, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v9, (__int64)&EVTDESC_ETWGUID_PRESENT, a5, 0, a3);
    CLegacySwapChain::PostPresent((CLegacySwapChain *)this, v7, v10 == 142213121);
  }
  return v10;
}
