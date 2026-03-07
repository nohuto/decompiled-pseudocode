__int64 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct tagWND *v5; // rax
  __int64 v6; // rcx
  int v7; // ebx

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v7 = 0;
  if ( v5 )
    v7 = _RegisterErrorReportingDialog(v5, v3);
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
