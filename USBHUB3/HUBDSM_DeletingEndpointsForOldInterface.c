/*
 * XREFs of HUBDSM_DeletingEndpointsForOldInterface @ 0x1C0024450
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForInterface @ 0x1C0028718 (HUBUCX_DeleteEndpointsAndFreeResourcesForInterface.c)
 */

__int64 __fastcall HUBDSM_DeletingEndpointsForOldInterface(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 72) )
  {
    HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(*(_QWORD *)(a1 + 960));
    *(_QWORD *)(v1 + 72) = 0LL;
  }
  return 4077LL;
}
