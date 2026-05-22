/*
 * XREFs of ?ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x18016E808
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180169F80 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?OnBeforeClearDynamicNodeInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@EEAAXXZ @ 0x18016D460 (-OnBeforeClearDynamicNodeInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18016E86C (-ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractio.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v3; // rdx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 696);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 696));
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandlerUnderLock(
    this,
    v3);
  if ( v2 )
    LeaveCriticalSection(v2);
}
