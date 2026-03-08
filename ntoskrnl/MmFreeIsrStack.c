/*
 * XREFs of MmFreeIsrStack @ 0x140A39B00
 * Callers:
 *     KiFreeProcessorStacks @ 0x14056994C (KiFreeProcessorStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     KasanMarkAddressValid @ 0x140562EA0 (KasanMarkAddressValid.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 */

unsigned __int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 *PteAddress; // rax

  v1 = a1 - 24576;
  KasanMarkAddressValid(a1 - 24576, 0x6000uLL);
  MmFreeIndependentPages(v1, 0x6000uLL);
  PteAddress = (__int64 *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_140C695C0, PteAddress, 1u);
}
