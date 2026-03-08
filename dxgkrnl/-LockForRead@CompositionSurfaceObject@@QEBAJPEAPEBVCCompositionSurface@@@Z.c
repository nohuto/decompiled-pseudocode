/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D6B0
 * Callers:
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1C000CE00 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C000D130 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000D300 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceFrameRate @ 0x1C002A7A0 (NtQueryCompositionSurfaceFrameRate.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C007A5A0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C007A7A0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C007AB20 (NtQueryCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C008771C (-Initialize@CContentResource@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionSurfaceObject::LockForRead(
        CompositionSurfaceObject *this,
        const struct CCompositionSurface **a2)
{
  NTSTATUS v4; // r8d

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
    v4 = 0;
    *a2 = (CompositionSurfaceObject *)((char *)this + 40);
  }
  return (unsigned int)v4;
}
