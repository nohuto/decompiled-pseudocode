/*
 * XREFs of ?_SwapMouseButton@@YAHH@Z @ 0x1C01C0578
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     NtUserSwapMouseButton @ 0x1C01DFE60 (NtUserSwapMouseButton.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C00D7810 (CheckGrantedAccess.c)
 */

__int64 __fastcall _SwapMouseButton(__int64 a1)
{
  int v1; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(v3 + 672), 0x12u) )
    return 0LL;
  if ( (*(_DWORD *)(v3 + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459);
    return 0LL;
  }
  LOBYTE(v4) = v1 != 0;
  return (unsigned __int8)SetSwapMouseButton(v4);
}
