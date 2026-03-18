/*
 * XREFs of ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C011D77C
 * Callers:
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00F74F0 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     UmfdSessionUninitialize @ 0x1C011D640 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C011D7C0 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void UmfdAllocation::Uninitialize(void)
{
  if ( UmfdAllocation::s_allocationLookup )
  {
    NSInstrumentation::CPointerHashTable::Destroy(UmfdAllocation::s_allocationLookup);
    UmfdAllocation::s_allocationLookup = 0LL;
  }
  if ( UmfdAllocation::s_allocationLookupLock )
    EngFreeMem(UmfdAllocation::s_allocationLookupLock);
}
