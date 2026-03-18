/*
 * XREFs of MNSetupAnimationDC @ 0x1C003E6D0
 * Callers:
 *     FinalUserInit @ 0x1C003E45C (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C01FF0D0 (MNAllocMenuState.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C0041140 (GetDPIMetrics.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1)
{
  __int64 result; // rax
  _QWORD *DPIMetrics; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    DPIMetrics = (_QWORD *)GetDPIMetrics();
    GreSelectFontInternal(*(_QWORD *)(a1 + 136), *DPIMetrics, 1LL);
    GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 0LL);
    return 1LL;
  }
  return result;
}
