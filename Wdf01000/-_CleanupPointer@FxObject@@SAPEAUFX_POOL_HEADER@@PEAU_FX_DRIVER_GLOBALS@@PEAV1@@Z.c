/*
 * XREFs of ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000DB4A
 * Callers:
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C00049A0 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C000E210 (-Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?Reclaim@FxNPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C00415F0 (-Reclaim@FxNPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C0041C00 (-Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 * Callees:
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003A954 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

_SINGLE_LIST_ENTRY *__fastcall FxObject::_CleanupPointer(_FX_DRIVER_GLOBALS *FxDriverGlobals, FxObject *Object)
{
  FxObject *v2; // rbx

  v2 = (FxObject *)((char *)Object - 48);
  if ( SLOBYTE(Object->m_ObjectFlags) >= 0 )
    v2 = Object;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v2[-1].m_DisposeSingleEntry.Next);
  return &v2[-1].m_DisposeSingleEntry;
}
