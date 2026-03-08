/*
 * XREFs of HUBDSM_SettingResetOnLastResumeFlagForPDO @ 0x1C0024020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_SettingResetOnLastResumeFlagForPDO(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(v1 + 1636), 4u);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0x40u);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0x2000u);
  return 4077LL;
}
