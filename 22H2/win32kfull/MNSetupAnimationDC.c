/*
 * XREFs of MNSetupAnimationDC @ 0x1C00E5F18
 * Callers:
 *     FinalUserInit @ 0x1C00E4FC8 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C0221278 (MNAllocMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C00E0A9C (GetDPIMetrics.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GetDPIMetrics(v3);
    GreSelectFont(*(HDC *)(a1 + 136));
    GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 0LL);
    return 1LL;
  }
  return result;
}
