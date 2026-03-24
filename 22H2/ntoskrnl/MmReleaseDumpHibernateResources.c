/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140774230
 * Callers:
 *     PopFreeHiberContext @ 0x14077404C (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x14079B350 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14089814C (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C4EF40, PteAddress, v2);
}
