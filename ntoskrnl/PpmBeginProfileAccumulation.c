/*
 * XREFs of PpmBeginProfileAccumulation @ 0x14079C7F8
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140B5CAC0 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 920) = a2;
}
