/*
 * XREFs of MNAllocMenuState @ 0x1C0221838
 * Callers:
 *     xxxMNStartMenuState @ 0x1C0222A90 (xxxMNStartMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GreSelectFont @ 0x1C0045F20 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C00E0DEC (GetDPIMetrics.c)
 *     MNSetupAnimationDC @ 0x1C00E6268 (MNSetupAnimationDC.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall MNAllocMenuState(_QWORD **a1)
{
  HDC v2; // rbx
  HDC result; // rax
  __int64 v4; // rcx

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v2 = (HDC)Win32AllocPoolWithQuota(144LL, 1953330005LL);
    if ( !v2 )
      return 0LL;
    *((_QWORD *)v2 + 17) = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC((__int64)v2) )
    {
      Win32FreePool(v2);
      return 0LL;
    }
    GreSetDCOwnerEx(*((_QWORD *)v2 + 17), 0LL, 0LL, 0LL);
  }
  else
  {
    gdwPUDFlags |= 0x2000000u;
    v2 = gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 1LL);
    GetDPIMetrics(v4);
    GreSelectFont(gMenuState[17]);
  }
  memset(v2, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
  {
    *((_DWORD *)v2 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *(_QWORD *)v2 = **a1;
  *((_QWORD *)v2 + 4) = gptiCurrent;
  *(_DWORD *)**a1 |= 0x20000000u;
  *((_QWORD *)v2 + 6) = *(_QWORD *)(gptiCurrent + 608LL);
  result = v2;
  *(_QWORD *)(gptiCurrent + 608LL) = v2;
  return result;
}
