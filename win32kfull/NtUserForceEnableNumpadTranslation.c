/*
 * XREFs of NtUserForceEnableNumpadTranslation @ 0x1C0016A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserForceEnableNumpadTranslation(int a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = *(unsigned int *)(gptiCurrent + 1272LL);
  *(_DWORD *)(gptiCurrent + 1272LL) = v2 ^ (v2 ^ (a1 << 23)) & 0x800000;
  UserSessionSwitchLeaveCrit(v3);
  return (v2 >> 23) & 1;
}
