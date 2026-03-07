_OWORD *__fastcall std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a3 + 8);
  while ( 1 )
  {
    v8 = a2[1];
    if ( v8 == v4 )
      break;
    v9 = a2[1] & 1LL;
    v10 = a4[1];
    v11 = *(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((v8 >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL)));
    v12 = *(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((v10 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL)));
    v13 = *(_QWORD *)(v11 + 8 * v9);
    *(_QWORD *)(v11 + 8 * v9) = 0LL;
    wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::attach((__int64 *)(v12 + 8 * (v10 & 1)), v13);
    a4[1] = v10 + 1;
    a2[1] = v8 + 1;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
