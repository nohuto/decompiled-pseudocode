/*
 * XREFs of NtUserCreateAcceleratorTable @ 0x1C011CD10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _CreateAcceleratorTable @ 0x1C011CDD4 (_CreateAcceleratorTable.c)
 */

__int64 __fastcall NtUserCreateAcceleratorTable(void *Src, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 *AcceleratorTable; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx

  v2 = a2;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(v2 - 1) > 0x7FFE )
  {
    v10 = 0LL;
    UserSetLastError(87LL, v4, v6);
  }
  else
  {
    if ( v2 > 0x2AAAAAAAAAAAAAAALL )
      ExRaiseAccessViolation();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForRead(Src, 6 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
    AcceleratorTable = (__int64 *)CreateAcceleratorTable(Src, (unsigned int)(6 * v2));
    v10 = 0LL;
    if ( AcceleratorTable )
      v10 = *AcceleratorTable;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
