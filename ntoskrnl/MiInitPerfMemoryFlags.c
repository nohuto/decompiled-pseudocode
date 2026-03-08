/*
 * XREFs of MiInitPerfMemoryFlags @ 0x14063F1FC
 * Callers:
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x140A2C970 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
