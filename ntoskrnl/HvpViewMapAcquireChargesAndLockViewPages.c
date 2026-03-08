/*
 * XREFs of HvpViewMapAcquireChargesAndLockViewPages @ 0x1407310B8
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140730EE4 (HvpViewMapMakeViewRangeValid.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14020C564 (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1402B2CD4 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiLockViewOfSection @ 0x1402B2DA4 (CmSiLockViewOfSection.c)
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
