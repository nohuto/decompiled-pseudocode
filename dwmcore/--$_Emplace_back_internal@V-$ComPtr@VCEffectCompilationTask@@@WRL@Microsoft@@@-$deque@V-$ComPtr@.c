/*
 * XREFs of ??$_Emplace_back_internal@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1800E39F4
 * Callers:
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1800E31D4 (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1800E3AC0 (-_Growmap@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 */

__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Emplace_back_internal<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 *v9; // rcx

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 2) >> 1 )
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Growmap(a1);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) &= 2 * v5 - 1;
  v6 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v7 = (v6 >> 1) & (v5 - 1);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7);
  v9 = (__int64 *)(result + 8 * (v6 & 1));
  *v9 = 0LL;
  if ( v9 != a2 )
  {
    result = *a2;
    *v9 = *a2;
    *a2 = 0LL;
  }
  ++*(_QWORD *)(a1 + 32);
  return result;
}
