/*
 * XREFs of NtUserGetPriorityClipboardFormat @ 0x1C01D4400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _GetPriorityClipboardFormat @ 0x1C02006A8 (_GetPriorityClipboardFormat.c)
 */

__int64 __fastcall NtUserGetPriorityClipboardFormat(volatile void *Address, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v7; // rcx
  unsigned int PriorityClipboardFormat; // [rsp+28h] [rbp-20h]

  v3 = (int)a2;
  EnterSharedCrit(Address, a2, a3);
  if ( v3 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
  ProbeForRead(Address, 4 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  PriorityClipboardFormat = GetPriorityClipboardFormat(Address, (unsigned int)v3);
  UserSessionSwitchLeaveCrit(v7);
  return PriorityClipboardFormat;
}
