/*
 * XREFs of HUBHSM_GettingHubDescriptor @ 0x1C0009820
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C00035F0 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  HUBHTX_GetHubDescriptorUsingControlTransfer(*(_QWORD *)(a1 + 960), a2, a3, a4);
  return 1000LL;
}
