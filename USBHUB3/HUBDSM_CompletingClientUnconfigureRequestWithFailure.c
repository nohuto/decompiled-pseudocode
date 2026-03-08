/*
 * XREFs of HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x1C001F420
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C0015A80 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C00287B8 (HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration.c)
 */

__int64 __fastcall HUBDSM_CompletingClientUnconfigureRequestWithFailure(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 48) )
  {
    HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(*(_QWORD *)(a1 + 960));
    *(_QWORD *)(v1 + 48) = 0LL;
  }
  HUBPDO_CompleteClientSerialRequestWithLastStatus(v1);
  return 4077LL;
}
