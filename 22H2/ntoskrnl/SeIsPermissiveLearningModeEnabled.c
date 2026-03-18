/*
 * XREFs of SeIsPermissiveLearningModeEnabled @ 0x14035FF94
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeIsPermissiveLearningModeEnabled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 200) & 0x3000000) == 50331648;
}
