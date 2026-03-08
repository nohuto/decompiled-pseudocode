/*
 * XREFs of ESM_ResettingEndpoint @ 0x1C0051BA0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_ResetEndpoint @ 0x1C003BB98 (Endpoint_SM_ResetEndpoint.c)
 */

__int64 __fastcall ESM_ResettingEndpoint(__int64 a1)
{
  Endpoint_SM_ResetEndpoint(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
