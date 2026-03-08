/*
 * XREFs of ?InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0207AE8
 * Callers:
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0207318 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a2)
{
  if ( !this )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)this = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource;
  *((_QWORD *)this + 1) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource;
  *((_QWORD *)this + 2) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathSourceFromTarget;
  *((_QWORD *)this + 3) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo;
  *((_QWORD *)this + 4) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo;
  *((_QWORD *)this + 5) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath;
  *((_QWORD *)this + 6) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemovePath;
  *((_QWORD *)this + 7) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource;
  *((_QWORD *)this + 8) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentScaling;
  *((_QWORD *)this + 9) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentScaling;
  *((_QWORD *)this + 10) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation;
  *((_QWORD *)this + 11) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentRotation;
  *((_QWORD *)this + 12) = &DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::FindFirstAvailableTarget;
  *((_QWORD *)this + 13) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveCopyProtection;
  *((_QWORD *)this + 14) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathImportance;
  *((_QWORD *)this + 15) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPaths;
  *((_QWORD *)this + 16) = DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths;
}
