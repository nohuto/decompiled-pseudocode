/*
 * XREFs of MNSetupAnimationDC @ 0x1C00D4628
 * Callers:
 *     FinalUserInit @ 0x1C00D43C4 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C021B978 (MNAllocMenuState.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *DPIMetrics; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), a2, a3, a4);
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    DPIMetrics = (__int64 *)GetDPIMetrics(v7, v6);
    GreSelectFontInternal(*(HDC *)(a1 + 136), *DPIMetrics, 1);
    GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 0LL);
    return 1LL;
  }
  return result;
}
