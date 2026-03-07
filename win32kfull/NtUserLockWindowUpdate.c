__int64 __fastcall NtUserLockWindowUpdate(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_3;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_3:
    v2 = zzzLockWindowUpdate2(v3, 0LL);
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
