/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_4dd7fdf0f202170b065b5df198adf56c___ @ 0x1800E3964
 * Callers:
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1800E31D4 (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_4dd7fdf0f202170b065b5df198adf56c___(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *v4; // rbx
  unsigned __int64 v5; // r10
  __int64 v6; // rsi
  __int64 **result; // rax

  v4 = *(__int64 **)a2;
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a2 )
    v6 = *v4;
  else
    v6 = 0LL;
  while ( v5 != *(_QWORD *)(a3 + 16)
       && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((*(_QWORD *)(v6 + 16) - 1LL) & (v5 >> 1))) + 8 * (v5 & 1)) != *a4 )
    ++v5;
  a1[1] = 0LL;
  result = a1;
  *(_QWORD *)(a2 + 16) = v5;
  *a1 = v4;
  a1[2] = (__int64 *)v5;
  return result;
}
