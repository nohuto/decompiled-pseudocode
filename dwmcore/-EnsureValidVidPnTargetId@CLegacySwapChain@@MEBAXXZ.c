void __fastcall CLegacySwapChain::EnsureValidVidPnTargetId(struct _LUID *this)
{
  CDisplayManager *v2; // rcx
  struct IDXGIOutputDWM *v3[2]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v4[12]; // [rsp+30h] [rbp-D8h] BYREF
  LONG v5; // [rsp+3Ch] [rbp-CCh]

  if ( this[15].HighPart == -1 )
  {
    v3[0] = 0LL;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)v3);
    if ( CDisplayManager::GetDXGIOutput(v2, this[11], this[14].LowPart, v3) >= 0
      && (*(int (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v3[0] + 32LL))(v3[0], v4) >= 0 )
    {
      this[15].HighPart = v5;
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v3);
  }
}
