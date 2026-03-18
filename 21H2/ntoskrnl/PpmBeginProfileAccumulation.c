/*
 * XREFs of PpmBeginProfileAccumulation @ 0x1406EBC90
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140B151EC (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8584) = a2;
}
