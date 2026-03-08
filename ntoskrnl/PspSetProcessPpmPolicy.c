/*
 * XREFs of PspSetProcessPpmPolicy @ 0x140778DB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetProcessPpmPolicy @ 0x1402EB020 (KeSetProcessPpmPolicy.c)
 */

__int64 __fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  return KeSetProcessPpmPolicy(a1, a2);
}
