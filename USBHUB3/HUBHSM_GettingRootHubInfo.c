/*
 * XREFs of HUBHSM_GettingRootHubInfo @ 0x1C0009CB0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0027964 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetControllerInfo @ 0x1C0028954 (HUBUCX_GetControllerInfo.c)
 */

__int64 __fastcall HUBHSM_GettingRootHubInfo(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_GetControllerInfo(v1);
  HUBUCX_GetRootHubInfoUsingUCXIoctl(v1);
  return 1000LL;
}
