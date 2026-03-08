/*
 * XREFs of HUBDSM_DeletingUCXDeviceOnOperationFailureFor30OnHubSuspend @ 0x1C0020BC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteDeviceFromUCX @ 0x1C00286EC (HUBUCX_DeleteDeviceFromUCX.c)
 */

__int64 __fastcall HUBDSM_DeletingUCXDeviceOnOperationFailureFor30OnHubSuspend(__int64 a1)
{
  HUBUCX_DeleteDeviceFromUCX(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
