/*
 * XREFs of NtUserValidateHandleSecure @ 0x1C0127DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserValidateHandleSecure(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx

  EnterCrit(0LL, 0LL);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v3 = ValidateHandleSecure(a1, 3LL);
  else
    v3 = 0;
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
