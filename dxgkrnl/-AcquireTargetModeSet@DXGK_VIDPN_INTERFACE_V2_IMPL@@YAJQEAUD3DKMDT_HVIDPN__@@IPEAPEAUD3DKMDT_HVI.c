int __fastcall DXGK_VIDPN_INTERFACE_V2_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V2_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        enum _DXGK_VIDPN_INTERFACE_VERSION a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **v5; // [rsp+28h] [rbp-10h]

  return DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSetImpl(this, a2, 2u, a3, a4, v5);
}
