/*
 * XREFs of ?InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C020790C
 * Callers:
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0207188 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGK_VIDPN_INTERFACE_V2_IMPL::InitializeInterface(
        DXGK_VIDPN_INTERFACE_V2_IMPL *this,
        struct _DXGK_VIDPN_INTERFACE *a2)
{
  if ( !this )
    WdLogSingleEntry0(1LL);
  *(_DWORD *)this = 2;
  *((_QWORD *)this + 1) = DXGK_VIDPN_INTERFACE_V1_IMPL::GetTopology;
  *((_QWORD *)this + 4) = DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewSourceModeSet;
  *((_QWORD *)this + 2) = DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet;
  *((_QWORD *)this + 3) = DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet;
  *((_QWORD *)this + 5) = DXGK_VIDPN_INTERFACE_V1_IMPL::AssignSourceModeSet;
  *((_QWORD *)this + 6) = DXGK_VIDPN_INTERFACE_V1_IMPL::AssignMultisamplingMethodSet;
  *((_QWORD *)this + 9) = DXGK_VIDPN_INTERFACE_V2_IMPL::CreateNewTargetModeSet;
  *((_QWORD *)this + 7) = DXGK_VIDPN_INTERFACE_V2_IMPL::AcquireTargetModeSet;
  *((_QWORD *)this + 8) = DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet;
  *((_QWORD *)this + 10) = DXGK_VIDPN_INTERFACE_V1_IMPL::AssignTargetModeSet;
}
