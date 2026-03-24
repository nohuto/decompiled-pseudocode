/*
 * XREFs of NtUserShowSystemCursor @ 0x1C02031E0
 * Callers:
 *     <none>
 * Callees:
 *     GreHidePointer @ 0x1C0028DC0 (GreHidePointer.c)
 *     CheckWinstaAttributeAccess @ 0x1C0033350 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // rcx

  EnterSharedCrit(0LL, 1LL);
  v4 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
  {
    LOBYTE(v4) = a1 == 0;
    v4 = GreHidePointer(v4);
  }
  else
  {
    UserSetLastError(5LL, v2, v3);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
