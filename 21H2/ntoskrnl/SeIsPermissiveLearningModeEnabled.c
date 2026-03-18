/*
 * XREFs of SeIsPermissiveLearningModeEnabled @ 0x1402443C4
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeIsPermissiveLearningModeEnabled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 200) & 0x400000) != 0;
}
