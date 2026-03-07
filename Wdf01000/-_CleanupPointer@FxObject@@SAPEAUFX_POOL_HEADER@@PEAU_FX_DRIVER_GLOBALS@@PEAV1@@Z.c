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
