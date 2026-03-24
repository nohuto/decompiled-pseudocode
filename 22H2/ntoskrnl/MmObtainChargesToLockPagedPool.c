/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x14079BB20
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061C968 (MiCreatePagingFileMap.c)
 *     PopPreallocateHibernateMemory @ 0x14079B89C (PopPreallocateHibernateMemory.c)
 *     HalpMcExportAndChargeNeededData @ 0x14079BA98 (HalpMcExportAndChargeNeededData.c)
 * Callees:
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned int)MiChargeResident(
                         &MiSystemPartition,
                         ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12,
                         1024LL,
                         a4) != 0;
}
