/*
 * XREFs of PpmUpdateProcessorPolicyCallback @ 0x1403A5030
 * Callers:
 *     <none>
 * Callees:
 *     PpmUpdateTargetProcessorPolicy @ 0x1403A505C (PpmUpdateTargetProcessorPolicy.c)
 */

__int64 __fastcall PpmUpdateProcessorPolicyCallback(__int64 a1, __int64 a2, __int64 a3)
{
  PpmUpdateTargetProcessorPolicy(*(_QWORD *)(a1 + 33128), *(_QWORD *)(a1 + 33136), a2, a3);
  return 0LL;
}
