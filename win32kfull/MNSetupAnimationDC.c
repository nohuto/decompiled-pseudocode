/*
 * XREFs of MNSetupAnimationDC @ 0x1C00C1D98
 * Callers:
 *     FinalUserInit @ 0x1C00C1B24 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C0201C50 (MNAllocMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1C0050B00 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C009FD5C (GetDPIMetrics.c)
 *     Feature_439792958__private_IsEnabledDeviceUsage @ 0x1C012EE90 (Feature_439792958__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 *DPIMetrics; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    if ( (unsigned int)Feature_439792958__private_IsEnabledDeviceUsage() )
    {
      DPIMetrics = (__int64 *)GetDPIMetrics(v3);
      GreSelectFont(*(HDC *)(a1 + 136), *DPIMetrics);
      GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 0LL);
    }
    else
    {
      GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 0LL, 0LL, 0LL);
      v5 = (__int64 *)GetDPIMetrics(v4);
      GreSelectFont(*(HDC *)(a1 + 136), *v5);
    }
    return 1LL;
  }
  return result;
}
