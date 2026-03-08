/*
 * XREFs of MiIsPageInHugePfn @ 0x14029C30C
 * Callers:
 *     MiIsPageInIoHugeRangeTransition @ 0x14029BA30 (MiIsPageInIoHugeRangeTransition.c)
 *     MiIoSpaceGetBounds @ 0x14029C250 (MiIoSpaceGetBounds.c)
 *     MmGetCacheAttributeEx @ 0x14061C860 (MmGetCacheAttributeEx.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061DAC4 (MiGetPageInHugePageBadStatus.c)
 *     MiMarkHugePfnBad @ 0x14061F1D0 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x14061F9B8 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x1406288F4 (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x140628ED0 (MiUpdateBadPfnIdentity.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteStaleCacheMaps @ 0x14062B5C0 (MiDeleteStaleCacheMaps.c)
 *     MiValidateAndLockAweMapCountPage @ 0x140649BE0 (MiValidateAndLockAweMapCountPage.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( qword_140C67A68 )
    return _bittest64((const signed __int64 *)qword_140C67A68, (a1 >> 18) & 0x3FFFFF) != 0;
  return result;
}
