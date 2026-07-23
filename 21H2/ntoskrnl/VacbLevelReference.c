/*
 * XREFs of VacbLevelReference @ 0x1403004AC
 * Callers:
 *     CcExtendVacbArray @ 0x140212CB4 (CcExtendVacbArray.c)
 *     CcSetVacbLargeOffset @ 0x1403000FC (CcSetVacbLargeOffset.c)
 *     CcAdjustVacbLevelLockCount @ 0x140300404 (CcAdjustVacbLevelLockCount.c)
 *     CcCalculateVacbLevelLockCount @ 0x14037D370 (CcCalculateVacbLevelLockCount.c)
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
