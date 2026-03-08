/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140A2DDF8
 * Callers:
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14094B3F0 (IopLiveDumpFreeMappingResources.c)
 *     PopFreeHiberContext @ 0x1409855F0 (PopFreeHiberContext.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  __int64 *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (__int64 *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C695C0, PteAddress, v2);
}
