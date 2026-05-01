/*
 * XREFs of ?AddToSelection@AccessibleElementBase@@UEAAJXZ @ 0x1804231A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessibleElementBase::AddToSelection(AccessibleElementBase *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(AccessibleElementBase *))(*(_QWORD *)this + 24LL))(this);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19A,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
