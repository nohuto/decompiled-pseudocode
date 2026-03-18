/*
 * XREFs of HalpGetIrtEntryCount @ 0x14036EB6C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A90F0C (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x140A99188 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
