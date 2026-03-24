/*
 * XREFs of MiInitPerfMemoryFlags @ 0x140544998
 * Callers:
 *     MiMapUserLargePages @ 0x14055E670 (MiMapUserLargePages.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x1408C78A0 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
