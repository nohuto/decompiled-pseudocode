/*
 * XREFs of ??1?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801B9098
 * Callers:
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x1801B90C4 (--1CEffectCompilationService@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801B926C (-_Tidy@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::~deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
        void **a1)
{
  void *v2; // rcx

  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
