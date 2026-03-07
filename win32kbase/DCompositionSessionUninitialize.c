void __fastcall DCompositionSessionUninitialize(__int64 a1, unsigned int a2)
{
  MaterialProperty *v2; // rax
  unsigned int v3; // edx

  if ( Table )
  {
    while ( 1 )
    {
      v2 = (MaterialProperty *)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::RemoveAnyObject();
      if ( !v2 )
        break;
      MaterialProperty::`scalar deleting destructor'(v2, v3);
    }
    a2 = (unsigned int)Table;
    if ( Table )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Table);
    Table = 0LL;
  }
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    a2 = (unsigned int)Resource;
    if ( Resource )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Resource);
    Resource = 0LL;
  }
  if ( DirectComposition::CConnection::s_pSessionConnection )
    DirectComposition::CConnection::`scalar deleting destructor'(
      DirectComposition::CConnection::s_pSessionConnection,
      a2);
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    ExDeleteResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        gpLeakTrackingAllocator,
        DirectComposition::CConnection::s_pSessionConnectionLock);
    DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  }
  if ( DirectComposition::CSynchronizationManager::s_pSyncTable )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      DirectComposition::CSynchronizationManager::s_pSyncTable);
  if ( DirectComposition::CSynchronizationManager::s_pSyncTableLock )
  {
    ExDeleteResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    if ( DirectComposition::CSynchronizationManager::s_pSyncTableLock )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        gpLeakTrackingAllocator,
        DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  }
}
