/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x14085CC30
 * Callers:
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x1407FC7F4 (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x14085CB10 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
