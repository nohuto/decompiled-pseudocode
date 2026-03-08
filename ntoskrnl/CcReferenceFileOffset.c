/*
 * XREFs of CcReferenceFileOffset @ 0x140535C90
 * Callers:
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x14021804C (SetVacb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14021BCF0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14021BD30 (CcAcquireBcbLockAndVacbLock.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     CcAllocateVacbLevels @ 0x14029C894 (CcAllocateVacbLevels.c)
 *     CcFreeUnusedVacbLevels @ 0x14029E2EC (CcFreeUnusedVacbLevels.c)
 */

void __fastcall CcReferenceFileOffset(__int64 a1, __int64 a2)
{
  int v4; // edx
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+3Ch] [rbp-Ch]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v7 = 0;
    v4 = *(_DWORD *)(a1 + 152);
    v5[2] = 0LL;
    v5[1] = v5;
    v5[0] = v5;
    v6 = 0;
    if ( !CcAllocateVacbLevels(CcMaxVacbLevelsSeen - 1, (v4 & 0x200) != 0, (__int64)v5) )
      RtlRaiseStatus(-1073741670);
    CcAcquireBcbLockAndVacbLock(1, a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFFuLL);
    CcReleaseBcbLockAndVacbLock(1, a1);
    CcFreeUnusedVacbLevels((__int64)v5);
  }
}
