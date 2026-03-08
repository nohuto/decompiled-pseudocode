/*
 * XREFs of GetgpwszFamilyDefaultFonts @ 0x1C00F6460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpwszFamilyDefaultFonts(_QWORD *a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(SGDGetSessionState(a1) + 32) + 19536LL;
  *a1 = 6LL;
  return result;
}
