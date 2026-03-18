/*
 * XREFs of NtUserGetCPD @ 0x1C000EC70
 * Callers:
 *     <none>
 * Callees:
 *     GetCPD @ 0x1C000ECF4 (GetCPD.c)
 */

__int64 __fastcall NtUserGetCPD(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CPD; // rbx
  __int64 v11; // rcx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  CPD = 0LL;
  v11 = v6;
  if ( v6 && ((a2 & 0xFFFFFFFC) == 0x20 || (a2 & 0xFFFFFFFC) == 0x40 || (a2 & 0xFFFFFFFC) == 0x80) )
    CPD = GetCPD(v6, a2, a3);
  UserSessionSwitchLeaveCrit(v11, v7, v8, v9);
  return CPD;
}
