/*
 * XREFs of NtUserRegisterErrorReportingDialog @ 0x1C01FB9C0
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterErrorReportingDialog @ 0x1C0211704 (_RegisterErrorReportingDialog.c)
 */

__int64 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebx

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  if ( v5 )
    v7 = RegisterErrorReportingDialog(v5, v3);
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
