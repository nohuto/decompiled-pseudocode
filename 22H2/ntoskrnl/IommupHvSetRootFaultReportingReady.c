/*
 * XREFs of IommupHvSetRootFaultReportingReady @ 0x1403EFC48
 * Callers:
 *     HalpIommuInitSystem @ 0x14099EB40 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 IommupHvSetRootFaultReportingReady()
{
  return ((__int64 (*)(void))qword_140C4A3D0)();
}
