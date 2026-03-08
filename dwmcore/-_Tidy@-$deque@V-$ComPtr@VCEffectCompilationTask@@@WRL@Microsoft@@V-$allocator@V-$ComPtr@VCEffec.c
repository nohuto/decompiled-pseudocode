/*
 * XREFs of ?_Tidy@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801B926C
 * Callers:
 *     ??1?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801B9098 (--1-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffectCom.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x1801B90C4 (--1CEffectCompilationService@@UEAA@XZ.c)
 * Callees:
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18001AA18 (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx

  while ( a1[4] )
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back((__int64)a1);
  v2 = a1[2];
  while ( v2 )
  {
    --v2;
    v3 = *(void **)(a1[1] + 8 * v2);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x10uLL);
  }
  v4 = (void *)a1[1];
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
