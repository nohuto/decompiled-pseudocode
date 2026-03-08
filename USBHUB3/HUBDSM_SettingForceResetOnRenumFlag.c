/*
 * XREFs of HUBDSM_SettingForceResetOnRenumFlag @ 0x1C00203C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_SettingForceResetOnRenumFlag(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 1636LL), 4u);
  return 4077LL;
}
