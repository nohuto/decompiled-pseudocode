/*
 * XREFs of VacbLevelReference @ 0x140275DDC
 * Callers:
 *     CcSetVacbLargeOffset @ 0x140275A2C (CcSetVacbLargeOffset.c)
 *     CcAdjustVacbLevelLockCount @ 0x140275D34 (CcAdjustVacbLevelLockCount.c)
 *     CcExtendVacbArray @ 0x1402F2054 (CcExtendVacbArray.c)
 *     CcCalculateVacbLevelLockCount @ 0x14037D188 (CcCalculateVacbLevelLockCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VacbLevelReference(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = 0LL;
  if ( !a3 )
    v3 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
  return a2 + v3 + 1024;
}
