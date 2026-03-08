/*
 * XREFs of IommupHvUnblockDefaultDma @ 0x140522FDC
 * Callers:
 *     HalpIommuInitSystem @ 0x140A86E10 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnblockDefaultDma()
{
  return ((__int64 (*)(void))qword_140C62318)();
}
