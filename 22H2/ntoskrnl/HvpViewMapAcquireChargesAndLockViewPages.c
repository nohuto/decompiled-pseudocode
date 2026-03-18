/*
 * XREFs of HvpViewMapAcquireChargesAndLockViewPages @ 0x140689A3C
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140689AA4 (HvpViewMapMakeViewRangeValid.c)
 * Callees:
 *     CmSiLockViewOfSection @ 0x140207D4C (CmSiLockViewOfSection.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x140207D84 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9BBC (CmSiReleaseProcessLockedPagesCharge.c)
 */

__int64 __fastcall HvpViewMapAcquireChargesAndLockViewPages(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  int locked; // ebx

  locked = CmSiAcquireProcessLockedPagesCharge(a2, a4);
  if ( locked >= 0 )
  {
    locked = CmSiLockViewOfSection(v7, a2, a3, a4);
    if ( locked < 0 )
      CmSiReleaseProcessLockedPagesCharge(a2, a4);
    else
      return 0;
  }
  return (unsigned int)locked;
}
