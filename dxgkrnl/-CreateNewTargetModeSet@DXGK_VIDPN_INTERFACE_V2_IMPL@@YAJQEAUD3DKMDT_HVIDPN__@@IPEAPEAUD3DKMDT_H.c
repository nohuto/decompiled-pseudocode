__int64 __fastcall DXGK_VIDPN_INTERFACE_V2_IMPL::CreateNewTargetModeSet(
        DXGK_VIDPN_INTERFACE_V2_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        unsigned __int64 *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  return DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSetImpl(this, a2, 2LL, a3, a4);
}
