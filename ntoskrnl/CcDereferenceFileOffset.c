/*
 * XREFs of CcDereferenceFileOffset @ 0x140535AC4
 * Callers:
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x14021804C (SetVacb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14021BCF0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14021BD30 (CcAcquireBcbLockAndVacbLock.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, __int64 a2)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    CcAcquireBcbLockAndVacbLock(1, a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFEuLL);
    CcReleaseBcbLockAndVacbLock(1, a1);
  }
}
