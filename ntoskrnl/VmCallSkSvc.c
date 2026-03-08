/*
 * XREFs of VmCallSkSvc @ 0x1405F64F0
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x14054A754 (VslSvcEnterIumSecureMode.c)
 */

__int64 __fastcall VmCallSkSvc(_OWORD *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
