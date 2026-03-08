/*
 * XREFs of ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180270438
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180270988 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipula.c)
 * Callees:
 *     ?attach@?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCManipulation@@@Z @ 0x18020C61C (-attach@-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCManipulation@@@Z.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v8 = a3[1];
    if ( v4 == v8 )
      break;
    v9 = *a3;
    v10 = v8 - 1;
    v11 = v10 >> 1;
    v12 = a4[1] - 1LL;
    a3[1] = v10;
    v13 = v10 & 1;
    v14 = *(_QWORD *)(v9 + 16) - 1LL;
    a4[1] = v12;
    v15 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * (v11 & v14));
    v16 = *(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((v12 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL)));
    v17 = *(_QWORD *)(v15 + 8 * v13);
    *(_QWORD *)(v15 + 8 * v13) = 0LL;
    wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::attach((__int64 *)(v16 + 8 * (v12 & 1)), v17);
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
