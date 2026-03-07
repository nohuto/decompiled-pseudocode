__int64 __fastcall CLegacySwapChain::Present(
        CD3DDevice **this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  const struct tagRECT *v9; // rcx
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi

  if ( (a3 & 2) != 0 )
  {
    v9 = 0LL;
    v11 = 1;
    LODWORD(v12) = 0;
  }
  else
  {
    (*((void (__fastcall **)(CD3DDevice **))*this + 3))(this);
    v9 = *(const struct tagRECT **)a4;
    v10 = *(_QWORD *)(a4 + 8);
    v11 = 0;
    v12 = (v10 - (__int64)v9) >> 4;
    if ( !(_DWORD)v12 )
    {
      LODWORD(v12) = 1;
      v9 = (const struct tagRECT *)&TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
    }
  }
  v13 = CD3DDevice::Present(this[10], this[28], a2, a3, a5, 0LL, v9, v12);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x3DAu, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v14, (unsigned int)&EVTDESC_ETWGUID_PRESENT, a5, 0, a3);
    CLegacySwapChain::PostPresent((CLegacySwapChain *)this, v11, v15 == 142213121);
  }
  return v15;
}
