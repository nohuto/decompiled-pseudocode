/*
 * XREFs of ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180212690
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180212984 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipula.c)
 * Callees:
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801A5668 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  unsigned __int64 v6; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  v6 = a3[1];
  while ( v4 != v6 )
  {
    v9 = *a3;
    --v6;
    v10 = a4[1] - 1LL;
    a3[1] = v6;
    v11 = v6 & 1;
    a4[1] = v10;
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((v6 >> 1) & (*(_QWORD *)(v9 + 16) - 1LL)));
    v13 = *(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((v10 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL)));
    v14 = *(_QWORD *)(v12 + 8 * v11);
    *(_QWORD *)(v12 + 8 * v11) = 0LL;
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
      (__int64 *)(v13 + 8 * (v10 & 1)),
      v14);
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
