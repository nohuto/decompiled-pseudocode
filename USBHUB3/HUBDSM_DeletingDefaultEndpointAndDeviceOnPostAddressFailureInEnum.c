/*
 * XREFs of HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum @ 0x1C001F620
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteDeviceFromUCX @ 0x1C00286EC (HUBUCX_DeleteDeviceFromUCX.c)
 *     HUBUCX_DeleteDefaultEndpointFromUCX @ 0x1C0028870 (HUBUCX_DeleteDefaultEndpointFromUCX.c)
 */

__int64 __fastcall HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_DeleteDefaultEndpointFromUCX(v1);
  HUBUCX_DeleteDeviceFromUCX(v1);
  return 4077LL;
}
