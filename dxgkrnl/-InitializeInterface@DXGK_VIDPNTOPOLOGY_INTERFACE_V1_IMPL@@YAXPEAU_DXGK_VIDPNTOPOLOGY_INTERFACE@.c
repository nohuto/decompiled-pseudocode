/*
 * XREFs of ?InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0207A44
 * Callers:
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0207188 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct _DXGK_VIDPNTOPOLOGY_INTERFACE *a2)
{
  if ( !this )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)this = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPaths;
  *((_QWORD *)this + 1) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource;
  *((_QWORD *)this + 2) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource;
  *((_QWORD *)this + 3) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathSourceFromTarget;
  *((_QWORD *)this + 4) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo;
  *((_QWORD *)this + 5) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo;
  *((_QWORD *)this + 6) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo;
  *((_QWORD *)this + 7) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo;
  *((_QWORD *)this + 8) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo;
  *((_QWORD *)this + 9) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::CreateNewPathInfo;
  *((_QWORD *)this + 10) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath;
  *((_QWORD *)this + 11) = DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemovePath;
}
