/*
 * XREFs of _lambda_bebd0e8b231a0deebea19a688ef01941_::operator() @ 0x1800DAD24
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_bebd0e8b231a0deebea19a688ef01941___ @ 0x1800DA8E8 (CVirtualDesktopManager--_OnViewAdded__lambda_bebd0e8b231a0deebea19a688ef01941___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_bebd0e8b231a0deebea19a688ef01941_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[13] + 112LL))((*a1)[13], *a1[1], 0LL);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x232,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
