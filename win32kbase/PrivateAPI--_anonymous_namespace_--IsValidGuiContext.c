/*
 * XREFs of PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C004FD4C
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C008D904 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     W32kEtwEnableCallback @ 0x1C00BE69C (W32kEtwEnableCallback.c)
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 *     NtMITSetInputDelegationMode @ 0x1C016BD10 (NtMITSetInputDelegationMode.c)
 *     NtUserSystemParametersInfo @ 0x1C01788A0 (NtUserSystemParametersInfo.c)
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

bool __fastcall PrivateAPI::_anonymous_namespace_::IsValidGuiContext(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  return CurrentProcessWin32Process
      && *(_QWORD *)CurrentProcessWin32Process
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
      && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
      && (*((_DWORD *)gptiCurrent + 318) & 0x80) == 0;
}
