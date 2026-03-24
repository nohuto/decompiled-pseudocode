/*
 * XREFs of MmFreeNonCachedMemory @ 0x1408C6930
 * Callers:
 *     <none>
 * Callees:
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiReadPteShadow @ 0x1402860B0 (MiReadPteShadow.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiMakeDemandZeroPte @ 0x1402AA600 (MiMakeDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MmFreePagesFromMdl @ 0x1403294B0 (MmFreePagesFromMdl.c)
 *     MiSetPfnOriginalPte @ 0x14054F35C (MiSetPfnOriginalPte.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // rdi
  _QWORD *PteAddress; // rsi
  unsigned __int64 PteShadow; // rbx
  struct _MDL *v5; // rbx
  __int64 DemandZeroPte; // rax
  __int64 v7; // r9
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  PteAddress = (_QWORD *)MiGetPteAddress((unsigned __int64)BaseAddress);
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
  PteShadow = v8;
  if ( MiPteInShadowRange((unsigned __int64)&v8) )
    PteShadow = MiReadPteShadow((unsigned __int64)&v8, PteShadow);
  v5 = *(struct _MDL **)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  MiSetPfnOriginalPte(v7, DemandZeroPte);
  MmFreePagesFromMdl(v5);
  ExFreePoolWithTag(v5, 0);
  MiReleasePtes((__int64)&qword_140C4EF40, PteAddress, v2);
}
