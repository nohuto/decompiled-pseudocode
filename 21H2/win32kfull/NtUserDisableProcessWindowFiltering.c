/*
 * XREFs of NtUserDisableProcessWindowFiltering @ 0x1C0110500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 NtUserDisableProcessWindowFiltering()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 0LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) |= 0x800u;
  v0 = *(_QWORD *)(gptiCurrent + 480LL);
  if ( v0 )
    *(_QWORD *)(v0 + 224) |= 4uLL;
  UserSessionSwitchLeaveCrit(v0);
  return 1LL;
}
