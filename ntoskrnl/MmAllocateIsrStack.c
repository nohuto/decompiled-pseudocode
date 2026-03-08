/*
 * XREFs of MmAllocateIsrStack @ 0x14080AFF0
 * Callers:
 *     KiCompleteBootProcessorContextInitialization @ 0x14037226C (KiCompleteBootProcessorContextInitialization.c)
 *     KiAllocateProcessorStacks @ 0x1403723C0 (KiAllocateProcessorStacks.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     KasanTrackAddress @ 0x1402EA400 (KasanTrackAddress.c)
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 *     MiMarkBootGuardPage @ 0x14080B0BC (MiMarkBootGuardPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 */

char __fastcall MmAllocateIsrStack(_QWORD *a1, __int64 a2)
{
  int v2; // edi
  int v3; // ebp
  __int64 IndependentPages; // rax
  unsigned __int64 v6; // rbx
  __int64 PteAddress; // rax
  unsigned __int64 v9; // rbx

  v2 = 0;
  v3 = a2;
  if ( *a1 )
  {
    v9 = *a1 - 24576LL;
    if ( !MmSetPageProtection(v9, 0x6000uLL, 4u) )
      return 0;
    v6 = v9 - 4096;
  }
  else
  {
    IndependentPages = MmAllocateIndependentPagesEx(28672LL, a2, 0LL, 0LL);
    v6 = IndependentPages;
    if ( !IndependentPages )
      return 0;
    v2 = 1;
    *a1 = IndependentPages + 28672;
  }
  if ( (int)KasanTrackAddress(v6 + 4096, 24576LL, v3 + 1) >= 0 )
  {
    PteAddress = MiGetPteAddress(v6);
    MiMarkBootGuardPage(PteAddress);
    return 1;
  }
  if ( v2 )
    MmFreeIndependentPages(v6, 28672LL);
  return 0;
}
