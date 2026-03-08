/*
 * XREFs of MNAllocMenuState @ 0x1C0201C50
 * Callers:
 *     xxxMNStartMenuState @ 0x1C0202C44 (xxxMNStartMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GreSelectFont @ 0x1C0050B00 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C009FD5C (GetDPIMetrics.c)
 *     MNSetupAnimationDC @ 0x1C00C1D98 (MNSetupAnimationDC.c)
 *     Feature_439792958__private_IsEnabledDeviceUsage @ 0x1C012EE90 (Feature_439792958__private_IsEnabledDeviceUsage.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall MNAllocMenuState(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 *DPIMetrics; // rax

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v2 = (_QWORD *)Win32AllocPoolWithQuotaZInit(144LL, 1953330005LL);
    if ( !v2 )
      return 0LL;
    v2[17] = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC((__int64)v2) )
    {
      Win32FreePool(v2);
      return 0LL;
    }
    if ( (unsigned int)Feature_439792958__private_IsEnabledDeviceUsage() )
      GreSetDCOwnerEx(v2[17], 0LL, 0LL, 0LL);
  }
  else
  {
    gdwPUDFlags |= 0x2000000u;
    v2 = (_QWORD *)gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 1LL);
    if ( (unsigned int)Feature_439792958__private_IsEnabledDeviceUsage() )
    {
      DPIMetrics = (__int64 *)GetDPIMetrics(v4);
      GreSelectFont((HDC)gMenuState[17], *DPIMetrics);
    }
  }
  memset_0(v2, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
  {
    *((_DWORD *)v2 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *v2 = **a1;
  v2[4] = gptiCurrent;
  *(_DWORD *)**a1 |= 0x20000000u;
  v2[6] = *(_QWORD *)(gptiCurrent + 608LL);
  result = v2;
  *(_QWORD *)(gptiCurrent + 608LL) = v2;
  return result;
}
