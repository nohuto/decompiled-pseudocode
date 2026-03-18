/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140A30B28
 * Callers:
 *     PopEnableHiberFile @ 0x140803C60 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14094E410 (IopLiveDumpFreeMappingResources.c)
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  __int64 *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (__int64 *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C69A40, PteAddress, v2);
}
