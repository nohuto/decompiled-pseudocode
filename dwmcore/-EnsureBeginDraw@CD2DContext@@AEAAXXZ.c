void __fastcall CD2DContext::EnsureBeginDraw(CD2DContext *this)
{
  CD2DTarget *v2; // rsi
  __int64 i; // rdi
  CD2DTarget *v4; // rbp

  if ( !*((_BYTE *)this + 437) )
  {
    v2 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        16LL,
        0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 384LL))(*((_QWORD *)this + 25));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        16LL,
        0LL);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 88); v2 = v4 )
    {
      v4 = *(CD2DTarget **)(*((_QWORD *)this + 41) + 8 * i);
      if ( v2 )
        *((_BYTE *)v2 + 73) = 0;
      CD2DTarget::ApplyState(v4, this);
      i = (unsigned int)(i + 1);
    }
    *((_BYTE *)this + 437) = 1;
  }
  *((_BYTE *)this + 438) = 1;
}
