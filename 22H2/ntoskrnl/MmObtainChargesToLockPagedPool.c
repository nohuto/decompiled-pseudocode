/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x140860B30
 * Callers:
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x1408014A4 (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x140860A10 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)MiChargeResident(MiSystemPartition, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
