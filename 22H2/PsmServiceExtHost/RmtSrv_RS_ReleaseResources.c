/*
 * XREFs of RmtSrv_RS_ReleaseResources @ 0x180063C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_ReleaseResources(__int64 a1, struct _RM_SERVICE_GLOBALS *a2, unsigned int a3)
{
  return RmSrvResourceSetReleaseResources(*((struct _RM_SERVICE_GLOBALS **)g_pProxy + 2), a2, a3);
}
