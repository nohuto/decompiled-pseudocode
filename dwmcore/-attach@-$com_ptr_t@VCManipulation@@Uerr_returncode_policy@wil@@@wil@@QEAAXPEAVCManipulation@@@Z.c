/*
 * XREFs of ?attach@?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCManipulation@@@Z @ 0x18020C61C
 * Callers:
 *     ?s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z @ 0x18020C660 (-s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z.c)
 *     ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180270438 (--$_Move_backward_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_si_ea_180270438.c)
 *     ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x1802704EC (--$_Move_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
