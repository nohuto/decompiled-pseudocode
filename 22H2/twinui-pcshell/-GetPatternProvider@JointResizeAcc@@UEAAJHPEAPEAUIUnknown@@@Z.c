/*
 * XREFs of ?GetPatternProvider@JointResizeAcc@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x18048E840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResizeAcc::GetPatternProvider(JointResizeAcc *this, int a2, struct IUnknown **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a2 != 10030 )
  {
    v3 = -2147220988;
    v4 = 97LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
      (const char *)v3);
    return v3;
  }
  v3 = (**(__int64 (__fastcall ***)(JointResizeAcc *, GUID *))this)(this, &GUID_00000000_0000_0000_c000_000000000046);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 98LL;
    goto LABEL_5;
  }
  return v3;
}
