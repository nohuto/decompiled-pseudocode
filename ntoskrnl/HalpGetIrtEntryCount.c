/*
 * XREFs of HalpGetIrtEntryCount @ 0x1403031BC
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A8DA7C (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x140A96048 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
