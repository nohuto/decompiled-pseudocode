/*
 * XREFs of NtUserSetWatermarkStrings @ 0x1C00F0470
 * Callers:
 *     <none>
 * Callees:
 *     _SetWatermarkStrings @ 0x1C00F04B0 (_SetWatermarkStrings.c)
 */

__int64 __fastcall NtUserSetWatermarkStrings(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)SetWatermarkStrings(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
