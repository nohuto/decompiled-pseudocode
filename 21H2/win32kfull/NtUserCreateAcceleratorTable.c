/*
 * XREFs of NtUserCreateAcceleratorTable @ 0x1C0107A70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _CreateAcceleratorTable @ 0x1C0107B34 (_CreateAcceleratorTable.c)
 */

__int64 __fastcall NtUserCreateAcceleratorTable(void *Src, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 *AcceleratorTable; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx

  v2 = a2;
  EnterCrit(0LL, 0LL);
  if ( (unsigned int)(v2 - 1) > 0x7FFE )
  {
    v9 = 0LL;
    UserSetLastError(87LL, v4);
  }
  else
  {
    if ( v2 > 0x2AAAAAAAAAAAAAAALL )
      ExRaiseAccessViolation();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForRead(Src, 6 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
    AcceleratorTable = (__int64 *)CreateAcceleratorTable(Src, (unsigned int)(6 * v2));
    v9 = 0LL;
    if ( AcceleratorTable )
      v9 = *AcceleratorTable;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
