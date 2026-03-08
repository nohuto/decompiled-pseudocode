/*
 * XREFs of ExpWnfDeleteNameInstanceCallback @ 0x140778FA4
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x14079450C (ExpWnfFreeScopeInstance.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExpWnfDeleteNameInstance @ 0x1407792F0 (ExpWnfDeleteNameInstance.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstanceCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a1 - 16;
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 - 16 + 8));
  return ExpWnfDeleteNameInstance(a2, v2, 0LL);
}
