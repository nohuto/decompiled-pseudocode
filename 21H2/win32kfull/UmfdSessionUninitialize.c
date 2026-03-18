/*
 * XREFs of UmfdSessionUninitialize @ 0x1C011D640
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C011AC34 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?SessionUninitialize@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C011D6EC (-SessionUninitialize@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C011D77C (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 */

void UmfdSessionUninitialize()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  void **v2; // rcx
  PVOID v3; // rbx

  v0 = 0LL;
  v1 = 4LL;
  do
  {
    if ( g_pUmfdClientPort[v0] )
      g_pUmfdClientPort[v0] = 0LL;
    v2 = (void **)g_pUmfdServerPort[v0];
    if ( v2 )
    {
      CMultipleConsumerWorkQueue::Destroy(v2);
      g_pUmfdServerPort[v0] = 0LL;
    }
    ++v0;
    --v1;
  }
  while ( v1 );
  UmfdAllocation::Uninitialize();
  UmfdHostLifeTimeManager::SessionUninitialize();
  v3 = UmfdFontFileLookup;
  if ( UmfdFontFileLookup )
  {
    ExFreePoolWithTag(*((PVOID *)UmfdFontFileLookup + 6), 0);
    ExFreePoolWithTag(v3, 0);
    UmfdFontFileLookup = 0LL;
  }
}
