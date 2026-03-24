/*
 * XREFs of MiUnmapLargeDriver @ 0x1408DA794
 * Callers:
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeContiguousPages @ 0x1402E91B8 (MiFreeContiguousPages.c)
 *     MiGetPdeAddress @ 0x140336F4C (MiGetPdeAddress.c)
 *     MiUnmapLargePages @ 0x140394BE4 (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x1407738F8 (MiReleasePrivilegedPtes.c)
 */

__int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  _DWORD *v8; // r9

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_140C4CC4C + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFLL, v6, v7, v8);
}
