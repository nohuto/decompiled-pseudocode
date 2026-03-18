/*
 * XREFs of MiUnmapLargeDriver @ 0x140A49F88
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14020B2DC (MiGetPdeAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiFreeContiguousPages @ 0x1403C337C (MiFreeContiguousPages.c)
 *     MiUnmapLargePages @ 0x1403D62BC (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 */

__int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_140C65944 + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFFLL, v6);
}
