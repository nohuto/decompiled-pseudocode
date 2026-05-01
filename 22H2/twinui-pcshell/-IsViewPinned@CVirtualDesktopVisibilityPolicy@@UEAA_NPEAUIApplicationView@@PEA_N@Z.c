/*
 * XREFs of ?IsViewPinned@CVirtualDesktopVisibilityPolicy@@UEAA_NPEAUIApplicationView@@PEA_N@Z @ 0x180017A30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVirtualDesktopVisibilityPolicy::IsViewPinned(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        bool *a3)
{
  char v4; // bl
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  if ( a3 )
    *a3 = 0;
  v5 = *(_QWORD *)a2;
  *(_OWORD *)v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v5 + 200))(a2, v14);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11F,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v6,
      v14[0]);
    v8 = *(_QWORD *)&v14[2];
    v7 = *(_QWORD *)v14;
  }
  else
  {
    v7 = *(_QWORD *)v14;
    v8 = *(_QWORD *)&v14[2];
    v9 = *(_QWORD *)v14 - 0x4AB24DE3BB64D5B7LL;
    if ( *(_QWORD *)v14 == 0x4AB24DE3BB64D5B7LL )
      v9 = *(_QWORD *)&v14[2] + 0x235851FE89248358LL;
    v10 = v9 == 0;
    if ( a3 )
      *a3 = v10;
  }
  v11 = v7 - 0x4CF966F2C2DDEA68LL;
  if ( v7 == 0x4CF966F2C2DDEA68LL )
    v11 = v8 + 0x534404FF02E49B7ELL;
  if ( !v11 )
    return 1;
  v12 = v7 - 0x4AB24DE3BB64D5B7LL;
  if ( !v12 )
    v12 = v8 + 0x235851FE89248358LL;
  if ( !v12 )
    return 1;
  return v4;
}
