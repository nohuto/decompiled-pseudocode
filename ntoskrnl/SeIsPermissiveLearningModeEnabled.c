/*
 * XREFs of SeIsPermissiveLearningModeEnabled @ 0x1402F4BA4
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeIsPermissiveLearningModeEnabled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 200) & 0x3000000) == 50331648;
}
