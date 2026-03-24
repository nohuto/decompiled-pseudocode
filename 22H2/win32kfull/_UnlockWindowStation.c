/*
 * XREFs of _UnlockWindowStation @ 0x1C0130CA0
 * Callers:
 *     NtUserUnlockWindowStation @ 0x1C0130C20 (NtUserUnlockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall UnlockWindowStation(__int64 a1)
{
  __int64 v2; // r8
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // eax

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    v3 = *(_DWORD *)(a1 + 64);
    v4 = -2;
    v5 = gdwLocks;
    if ( (v3 & 8) == 0 )
      v4 = -4;
    *(_DWORD *)(a1 + 64) = v4 & v3;
    gdwLocks = v4 & v5;
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, gpidLogon, v2);
    return 0LL;
  }
}
