__int64 __fastcall NtUserWindowFromPoint(struct tagPOINT a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterCrit(0LL, 0LL);
  v2 = (__int64 *)xxxWindowFromPoint(a1);
  v4 = 0LL;
  if ( v2 )
    v4 = *v2;
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
