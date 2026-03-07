__int64 __fastcall CDDisplaySwapChain::Present(CDDisplaySwapChain *this, int a2, char a3)
{
  char v4; // di
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _QWORD, int, _QWORD, _DWORD, struct Windows::Devices::Display::Core::IDisplayScanout **); // rbp
  struct Windows::Devices::Display::Core::IDisplaySurface *DesktopPrimary; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v19[2]; // [rsp+50h] [rbp-18h] BYREF

  v19[0] = 0LL;
  v4 = (a3 & 2) != 0;
  v6 = CDDisplaySwapChain::PrePresent(this, v4);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x3A8u, 0LL);
  }
  else
  {
    v9 = *((_QWORD *)this + 40);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _QWORD, int, _QWORD, _DWORD, struct Windows::Devices::Display::Core::IDisplayScanout **))(*(_QWORD *)v9 + 48LL);
    DesktopPrimary = CDDisplaySwapChain::GetDesktopPrimary(this, v4);
    v12 = v10(v9, *((_QWORD *)this + 45), DesktopPrimary, 0LL, a2, 0LL, 0, v19);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3B4u, 0LL);
    }
    else
    {
      v14 = CDDisplaySwapChain::ExecutePresent(this, v19[0]);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3B6u, 0LL);
      }
      else
      {
        v16 = CDDisplaySwapChain::PostPresent(this, v4, v14 == 142213121);
        v8 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3B8u, 0LL);
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v19);
  return v8;
}
