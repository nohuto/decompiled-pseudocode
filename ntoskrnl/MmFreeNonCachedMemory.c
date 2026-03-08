/*
 * XREFs of MmFreeNonCachedMemory @ 0x140A2AE10
 * Callers:
 *     DifMmFreeNonCachedMemoryWrapper @ 0x1405E4CC0 (DifMmFreeNonCachedMemoryWrapper.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MmFreePagesFromMdl @ 0x1402C0DB0 (MmFreePagesFromMdl.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x14032E7D8 (MiMakeDemandZeroPte.c)
 *     MiSetPfnOriginalPte @ 0x140409540 (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  __int64 *PteAddress; // rdi
  struct _MDL *v4; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v6; // r8
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)BaseAddress);
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
  v4 = *(struct _MDL **)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL
                       + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  MiSetPfnOriginalPte(v6, DemandZeroPte);
  MmFreePagesFromMdl(v4);
  ExFreePoolWithTag(v4, 0);
  MiReleasePtes((__int64)&qword_140C695C0, PteAddress, (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0));
}
