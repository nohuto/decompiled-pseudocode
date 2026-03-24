/*
 * XREFs of ?_SwapMouseButton@@YAHH@Z @ 0x1C01E9DE0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C01039E4 (CheckGrantedAccess.c)
 */

__int64 __fastcall _SwapMouseButton(__int64 a1)
{
  int v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 680), 0x12u) )
    return 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459LL, v3, v5);
    return 0LL;
  }
  LOBYTE(v4) = v1 != 0;
  return (unsigned __int8)SetSwapMouseButton(v4);
}
