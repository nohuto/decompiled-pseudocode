/*
 * XREFs of ??R_lambda_ed53dc686cf6ff589a02cff9f21397f4_@@QEBAHPEAUHWND__@@@Z @ 0x1802F1B1C
 * Callers:
 *     _lambda_a79dac1be2c40788dead125dd22402f9_::_lambda_invoker_cdecl_ @ 0x1802F16A0 (_lambda_a79dac1be2c40788dead125dd22402f9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z @ 0x1802F2858 (-IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall _lambda_ed53dc686cf6ff589a02cff9f21397f4_::operator()(__int64 a1, HWND a2)
{
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 1;
  if ( GetWindowThreadProcessId(a2, &v8) && v8 == **(_DWORD **)a1 && IsWindowEligibleForTabbing(a2, **(HWND **)(a1 + 8)) )
  {
    v4 = **(_QWORD **)(a1 + 16);
    if ( !v4 )
    {
LABEL_8:
      **(_QWORD **)(a1 + 24) = a2;
      return 0LL;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, HWND, int *))(*(_QWORD *)v4 + 24LL))(v4, a2, &v9);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\TabShellHelpers.h",
        (const char *)(unsigned int)v5);
      goto LABEL_8;
    }
    if ( v9 )
      goto LABEL_8;
  }
  return 1LL;
}
