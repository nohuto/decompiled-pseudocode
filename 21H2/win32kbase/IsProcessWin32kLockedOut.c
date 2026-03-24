/*
 * XREFs of IsProcessWin32kLockedOut @ 0x1C00C4D20
 * Callers:
 *     W32CalloutDispatch @ 0x1C004DFB0 (W32CalloutDispatch.c)
 *     UserGlobalAtomTableCallout @ 0x1C008615C (UserGlobalAtomTableCallout.c)
 * Callees:
 *     GetProcessSyscallDisablePolicy @ 0x1C00C4D50 (GetProcessSyscallDisablePolicy.c)
 */

char __fastcall IsProcessWin32kLockedOut(__int64 a1)
{
  char result; // al
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( (int)GetProcessSyscallDisablePolicy(a1, &v2) < 0 )
    return 0;
  result = 1;
  if ( (v2 & 0x100000000LL) == 0 )
    return 0;
  return result;
}
