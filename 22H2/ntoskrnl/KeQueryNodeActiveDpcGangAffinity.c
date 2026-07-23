/*
 * XREFs of KeQueryNodeActiveDpcGangAffinity @ 0x14036B49C
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140727470 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1403544E0 (KeQueryNodeActiveAffinity.c)
 */

void __fastcall KeQueryNodeActiveDpcGangAffinity(USHORT a1, _GROUP_AFFINITY *a2, USHORT *a3)
{
  KeQueryNodeActiveAffinity(a1, a2, a3);
}
