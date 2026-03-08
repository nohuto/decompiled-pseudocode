/*
 * XREFs of ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18001AA18
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001A780 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 *     ?_Tidy@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801B926C (-_Tidy@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back(__int64 a1)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx

  v2 = (*(_DWORD *)(a1 + 24) - 1 + *(_DWORD *)(a1 + 32)) & 1;
  result = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(result
                 + 8
                 * (((unsigned __int64)(*(_QWORD *)(a1 + 24) - 1LL + *(_QWORD *)(a1 + 32)) >> 1) & (*(_QWORD *)(a1 + 16)
                                                                                                  - 1LL)));
  v5 = *(_QWORD *)(v4 + 8 * v2);
  if ( v5 )
  {
    *(_QWORD *)(v4 + 8 * v2) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
    *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
