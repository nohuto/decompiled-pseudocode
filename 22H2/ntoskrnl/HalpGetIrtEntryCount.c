/*
 * XREFs of HalpGetIrtEntryCount @ 0x1404D14A8
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099B3C4 (HalpIommuInitializeAll.c)
 *     HsaInitializeInterruptRemapping @ 0x1409AA588 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetIrtEntryCount()
{
  return (unsigned int)HalpIrtTotalEntries;
}
