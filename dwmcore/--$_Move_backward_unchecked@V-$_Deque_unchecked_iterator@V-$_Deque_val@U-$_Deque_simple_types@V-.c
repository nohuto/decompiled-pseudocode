/*
 * XREFs of ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x18001A6D0
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x18001A620 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompi.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18001AA90 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _OWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v4; // rbp
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  __int64 v13; // rdx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v8 = a3[1];
    if ( v4 == v8 )
      break;
    v9 = *a3;
    v10 = v8 - 1;
    v11 = *a4;
    v12 = a4[1] - 1;
    v13 = *(_QWORD *)(*a3 + 16LL) - 1LL;
    a3[1] = v10;
    a4[1] = v12;
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
      *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * ((v12 >> 1) & (*(_QWORD *)(v11 + 16) - 1LL))) + 8 * (v12 & 1),
      *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((v10 >> 1) & v13)) + 8 * (v10 & 1));
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
