__int64 __fastcall COverlaySwapChainBase::PresentDFlip(
        unsigned int *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        DXGI_COLOR_SPACE_TYPE a6,
        int a7,
        __int64 a8,
        _DWORD *a9,
        _DWORD *a10)
{
  char v12; // si
  char v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  int v22; // eax
  __int64 v23; // rcx

  v12 = 0;
  v13 = 0;
  v14 = ConvertSDRBoostToSDRWhiteLevel(*((float *)a1 + 26), a6);
  v15 = v14;
  if ( a1[52] == 2 || v14 )
    v12 = 1;
  if ( COverlaySwapChainBase::DirectFlipRectRequiresPanelFitter((__int64)a1, a9)
    || COverlaySwapChainBase::DirectFlipRectRequiresPanelFitter((__int64)a1, a10) )
  {
    v13 = 1;
  }
  LOBYTE(v17) = v13;
  LOBYTE(v16) = v12;
  v18 = (*(__int64 (__fastcall **)(unsigned int *, __int64, __int64, _QWORD, int, int, int, __int64, DXGI_COLOR_SPACE_TYPE, int, __int64, _DWORD *, _DWORD *))(*(_QWORD *)a1 + 248LL))(
          a1,
          v16,
          v17,
          v15,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10);
  v21 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x62u, 0LL);
  }
  else
  {
    LOBYTE(v20) = v18 == 142213121;
    v22 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, __int64))(*(_QWORD *)a1 + 232LL))(a1, 0LL, v20);
    v21 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x64u, 0LL);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      McTemplateU0x_EventWriteTransfer(v23, (__int64)&EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT, a1[24]);
    }
  }
  return v21;
}
