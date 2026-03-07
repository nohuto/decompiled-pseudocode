__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        enum _DXGK_VIDPN_INTERFACE_VERSION a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **v5; // [rsp+28h] [rbp-10h]

  return DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSetImpl(this, a2, 1u, a3, a4, v5);
}
