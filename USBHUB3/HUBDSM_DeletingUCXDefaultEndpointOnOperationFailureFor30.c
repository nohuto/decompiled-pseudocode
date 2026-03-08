/*
 * XREFs of HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30 @ 0x1C0020B90
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteDefaultEndpointFromUCX @ 0x1C0028870 (HUBUCX_DeleteDefaultEndpointFromUCX.c)
 */

__int64 __fastcall HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30(__int64 a1)
{
  HUBUCX_DeleteDefaultEndpointFromUCX(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
