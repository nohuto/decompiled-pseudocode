/*
 * XREFs of IommupHvUnblockDefaultDma @ 0x14052550C
 * Callers:
 *     HalpIommuInitSystem @ 0x140A8A420 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnblockDefaultDma()
{
  return ((__int64 (*)(void))qword_140C62778)();
}
