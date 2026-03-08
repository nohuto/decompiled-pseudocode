/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000C328
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C000B8D0 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000C000 (NtBindCompositionSurface.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079CE0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C007A170 (NtNotifyPresentToCompositionSurface.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C007AC70 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C007AD80 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C007AF20 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C007B090 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C007B370 (NtSetCompositionSurfaceStatistics.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C00877EC (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionSurfaceObject::LockForWrite(
        CompositionSurfaceObject *this,
        struct CCompositionSurface **a2)
{
  NTSTATUS v4; // r8d

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(this, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 48, 0LL);
    v4 = 0;
    *((_QWORD *)this + 7) = KeGetCurrentThread();
    *a2 = (CompositionSurfaceObject *)((char *)this + 40);
  }
  return (unsigned int)v4;
}
