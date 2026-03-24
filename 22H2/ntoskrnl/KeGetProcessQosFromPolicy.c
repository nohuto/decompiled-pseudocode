/*
 * XREFs of KeGetProcessQosFromPolicy @ 0x140514168
 * Callers:
 *     PspSetProcessPpmPolicy @ 0x140695650 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessQosFromPolicy(int a1)
{
  return KiProcessPolicyToQosMappingTable[a1];
}
