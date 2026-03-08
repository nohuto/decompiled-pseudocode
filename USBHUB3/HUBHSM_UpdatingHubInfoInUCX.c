/*
 * XREFs of HUBHSM_UpdatingHubInfoInUCX @ 0x1C00099F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C00289B0 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 */

__int64 __fastcall HUBHSM_UpdatingHubInfoInUCX(__int64 a1)
{
  HUBUCX_UpdateHubInformationUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
