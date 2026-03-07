_OWORD *__fastcall std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r15
  __int64 v8; // rbp
  _OWORD *result; // rax
  unsigned __int64 v10; // rbx

  v4 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v8 = a2[1];
    if ( v8 == v4 )
      break;
    v10 = a4[1];
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
      *(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((v10 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL))) + 8 * (v10 & 1),
      *(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((a2[1] >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL))) + 8 * (a2[1] & 1LL));
    a4[1] = v10 + 1;
    a2[1] = v8 + 1;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
