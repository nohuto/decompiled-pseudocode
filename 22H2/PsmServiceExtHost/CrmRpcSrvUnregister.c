/*
 * XREFs of CrmRpcSrvUnregister @ 0x180036150
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvUnregister @ 0x180036174 (CrmSrvUnregister.c)
 */

__int64 __fastcall CrmRpcSrvUnregister(PVOID *a1)
{
  CrmSrvUnregister(*a1);
  *a1 = 0LL;
  return 0LL;
}
