__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL::AddMode(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        enum _DXGK_VIDPN_INTERFACE_VERSION a4)
{
  return DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddModeImpl(
           this,
           a2,
           (struct _D3DKMDT_VIDPN_TARGET_MODE *const)2,
           a4);
}
