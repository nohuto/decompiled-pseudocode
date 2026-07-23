/*
 * XREFs of PpmBeginProfileAccumulation @ 0x140622BAC
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140A6C864 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 5512) = a2;
}
