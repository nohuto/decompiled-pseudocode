/*
 * XREFs of HUBHSM_GettingHubPortStatus @ 0x1C0008890
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003880 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubPortStatus(__int64 a1)
{
  HUBHTX_GetHubStatusUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
