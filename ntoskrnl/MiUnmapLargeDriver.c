/*
 * XREFs of MiUnmapLargeDriver @ 0x140A472B8
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPdeAddress @ 0x14036C27C (MiGetPdeAddress.c)
 *     MiFreeContiguousPages @ 0x1403BDABC (MiFreeContiguousPages.c)
 *     MiUnmapLargePages @ 0x1403D0D9C (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x1407F7400 (MiReleasePrivilegedPtes.c)
 */

__int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_140C654C4 + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFFLL, v6);
}
