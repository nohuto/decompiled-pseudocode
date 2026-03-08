/*
 * XREFs of VacbLevelReference @ 0x1402187E8
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402180C0 (CcSetVacbLargeOffset.c)
 *     CcAdjustVacbLevelLockCount @ 0x14021BD70 (CcAdjustVacbLevelLockCount.c)
 *     CcCalculateVacbLevelLockCount @ 0x14029C938 (CcCalculateVacbLevelLockCount.c)
 *     CcExtendVacbArray @ 0x14029E348 (CcExtendVacbArray.c)
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
