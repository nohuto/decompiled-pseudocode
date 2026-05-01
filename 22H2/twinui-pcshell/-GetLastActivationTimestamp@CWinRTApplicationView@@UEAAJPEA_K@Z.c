/*
 * XREFs of ?GetLastActivationTimestamp@CWinRTApplicationView@@UEAAJPEA_K@Z @ 0x180205520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?UnbiasedInterruptTimeFromFileTime@@YA_KAEBU_FILETIME@@@Z @ 0x1802017B8 (-UnbiasedInterruptTimeFromFileTime@@YA_KAEBU_FILETIME@@@Z.c)
 */

__int64 __fastcall CWinRTApplicationView::GetLastActivationTimestamp(CWinRTApplicationView *this, unsigned __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _BYTE v6[16]; // [rsp+20h] [rbp-48h] BYREF
  struct _FILETIME v7; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 26) + 80LL))(*((_QWORD *)this + 26), v6);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = UnbiasedInterruptTimeFromFileTime(&v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
