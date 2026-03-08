/*
 * XREFs of ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000D954
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C000B8D0 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000C000 (NtBindCompositionSurface.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1C000CE00 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C000D130 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000D300 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceFrameRate @ 0x1C002A7A0 (NtQueryCompositionSurfaceFrameRate.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079CE0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C007A170 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C007A5A0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C007A7A0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C007AB20 (NtQueryCompositionSurfaceStatistics.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C007AC70 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C007AD80 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C007AF20 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C007B090 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C007B370 (NtSetCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C008771C (-Initialize@CContentResource@@IEAAJXZ.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C00877EC (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurface::UnlockAndRelease(CCompositionSurface *this)
{
  char *v2; // rcx

  v2 = (char *)this + 8;
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)v2 + 1) )
  {
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v2, 0LL);
  }
  KeLeaveCriticalRegion();
  return ObfDereferenceObject((char *)this - 40) == 0;
}
