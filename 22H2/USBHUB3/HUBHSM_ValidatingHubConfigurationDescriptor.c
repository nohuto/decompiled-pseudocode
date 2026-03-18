/*
 * XREFs of HUBHSM_ValidatingHubConfigurationDescriptor @ 0x1C0009BF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0003694 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 */

__int64 __fastcall HUBHSM_ValidatingHubConfigurationDescriptor(__int64 a1)
{
  return HUBHTX_ValidateAndCacheHubConfigDescriptor(*(_QWORD *)(a1 + 960));
}
