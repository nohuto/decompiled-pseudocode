void __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct _DXGDMM_VIDPN_INTERFACE *a2)
{
  if ( !this )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)this = DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology;
  *((_QWORD *)this + 1) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet;
  *((_QWORD *)this + 2) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet;
  *((_QWORD *)this + 3) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet;
  *((_QWORD *)this + 4) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet;
  *((_QWORD *)this + 5) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet;
  *((_QWORD *)this + 6) = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet;
}
