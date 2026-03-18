/*
 * XREFs of ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00103F0
 * Callers:
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C0001658 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     NtUnBindCompositionSurface @ 0x1C000E650 (NtUnBindCompositionSurface.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0010080 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C0010328 (-GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C00103A0 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C0077D68 (-IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C0077FA0 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0078C50 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C0078CE8 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0079974 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x1C00799FC (-GetIndependentFlipState@CompositionSurfaceObject@@QEBA-AW4IndependentFlipState@@_K@Z.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C007B3D0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C007B9B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C007BB50 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C007C530 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C007C5C0 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C007C638 (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z @ 0x1C007C6E0 (-GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z.c)
 *     ?InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@@@Z @ 0x1C007C934 (-InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N2@Z @ 0x1C007C9D0 (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C007CA58 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C007CC68 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C007CCF8 (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z @ 0x1C007D114 (-SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C007D188 (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?UpdateStats@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C007D260 (-UpdateStats@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?UpdateStatsForIndependentFlip@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C007D2B8 (-UpdateStatsForIndependentFlip@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurface::FindBuffer(
        CCompositionSurface *this,
        __int64 a2,
        struct CCompositionBuffer **a3)
{
  unsigned int v3; // r9d
  _QWORD **v4; // rcx
  _QWORD *i; // rax

  *a3 = 0LL;
  v3 = -1073741275;
  if ( *((_DWORD *)this + 22) )
  {
    v4 = (_QWORD **)((char *)this + 72);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      if ( *(i - 1) == a2 )
      {
        *a3 = (struct CCompositionBuffer *)(i - 3);
        return 0;
      }
    }
  }
  return v3;
}
