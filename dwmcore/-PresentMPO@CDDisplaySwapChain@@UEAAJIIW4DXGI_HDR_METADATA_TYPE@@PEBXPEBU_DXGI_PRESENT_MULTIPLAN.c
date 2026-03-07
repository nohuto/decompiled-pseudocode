__int64 __fastcall CDDisplaySwapChain::PresentMPO(
        CDDisplaySwapChain *this,
        __int64 a2,
        char a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        _OWORD *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  bool v7; // r14
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  int CachedDesktopScanout; // eax
  __int64 v14; // rcx
  int CachedGeneralScanout; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  void *v29; // [rsp+28h] [rbp-28h]
  struct Windows::Devices::Display::Core::IDisplayScanout *v30; // [rsp+40h] [rbp-10h] BYREF
  __int64 v31; // [rsp+48h] [rbp-8h] BYREF

  v7 = (a3 & 2) != 0;
  v30 = 0LL;
  v31 = 0LL;
  v10 = CDDisplaySwapChain::PrePresent(this, v7);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x3D2u, 0LL);
    goto LABEL_24;
  }
  if ( CCommonRegistryData::EnableDDisplayScanoutCaching )
  {
    if ( a7 != 1 || *(_DWORD *)a6 || !*((_DWORD *)a6 + 1) || *((_QWORD *)a6 + 1) )
    {
      LODWORD(v29) = 1;
      CachedGeneralScanout = CDDisplaySwapChain::FindCachedGeneralScanout(this, v7, a7, a6, 1u, v29, &v30);
      v12 = CachedGeneralScanout;
      if ( CachedGeneralScanout < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, CachedGeneralScanout, 0x3EBu, 0LL);
        goto LABEL_24;
      }
    }
    else
    {
      CachedDesktopScanout = CDDisplaySwapChain::FindCachedDesktopScanout(this, v7, a6, &v30);
      v12 = CachedDesktopScanout;
      if ( CachedDesktopScanout < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CachedDesktopScanout, 0x3E0u, 0LL);
        goto LABEL_24;
      }
    }
  }
  else
  {
    v17 = CDDisplaySwapChain::CreateScanout(this, v7, a7, a6, 1u, 1, &v30);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x3F7u, 0LL);
      goto LABEL_24;
    }
  }
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  v19 = v30;
  (**(void (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *))v30)(
    v30,
    &GUID_56b76193_af04_5806_83a8_56be01847aad,
    &v31);
  v20 = CDDisplaySwapChain::ComputeCachedHdrMetadata(this, a4, a5);
  v12 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x3FCu, 0LL);
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 112LL))(v31, *((_QWORD *)this + 66));
    v12 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x3FDu, 0LL);
    }
    else
    {
      v24 = CDDisplaySwapChain::ExecutePresent(this, v19);
      v12 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x400u, 0LL);
      }
      else
      {
        v26 = CDDisplaySwapChain::PostPresent(this, v7, v24 == 142213121);
        v12 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x401u, 0LL);
      }
    }
  }
LABEL_24:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
  return v12;
}
