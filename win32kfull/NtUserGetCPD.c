__int64 __fastcall NtUserGetCPD(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 CPD; // rbx
  __int64 v8; // rcx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  CPD = 0LL;
  v8 = v6;
  if ( v6 && ((a2 & 0xFFFFFFFC) == 0x20 || (a2 & 0xFFFFFFFC) == 0x40 || (a2 & 0xFFFFFFFC) == 0x80) )
    CPD = GetCPD(v6, a2, a3);
  UserSessionSwitchLeaveCrit(v8);
  return CPD;
}
