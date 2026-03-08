/*
 * XREFs of HsaDeleteDevice @ 0x14052D190
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvFreeMemory @ 0x14051D13C (ExtEnvFreeMemory.c)
 */

__int64 __fastcall HsaDeleteDevice(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx

  ExtEnvFreeMemory(a1, *(_QWORD *)(a2 + 40));
  return ExtEnvFreeMemory(v3, a2);
}
