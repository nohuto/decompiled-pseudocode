/*
 * XREFs of ??1?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAA@XZ @ 0x180207448
 * Callers:
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180207474 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x1800D9784 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<CMegaRect>::~deque<CMegaRect>(void **a1)
{
  void *v2; // rcx

  std::deque<CMegaRect>::_Tidy(a1);
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
