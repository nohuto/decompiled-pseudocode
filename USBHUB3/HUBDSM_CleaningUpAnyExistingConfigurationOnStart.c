/*
 * XREFs of HUBDSM_CleaningUpAnyExistingConfigurationOnStart @ 0x1C001F2B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C00287B8 (HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration.c)
 */

__int64 __fastcall HUBDSM_CleaningUpAnyExistingConfigurationOnStart(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 48) )
  {
    HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(*(_QWORD *)(a1 + 960));
    *(_QWORD *)(v1 + 48) = 0LL;
  }
  return 4077LL;
}
