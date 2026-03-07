void __fastcall VIDPN_MGR::QueryDxgMiniportVidPnTargetModeSetInterface(
        VIDPN_MGR *this,
        enum _DXGK_VIDPN_INTERFACE_VERSION a2,
        const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **a3)
{
  const struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v6; // rax

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( a2 == DXGK_VIDPN_INTERFACE_VERSION_V1 )
    v6 = (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE *)*((_QWORD *)this + 55);
  else
    v6 = (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE *)*((_QWORD *)this + 56);
  *a3 = v6;
}
