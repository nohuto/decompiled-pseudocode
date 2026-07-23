/*
 * XREFs of LdrpCompareModuleName @ 0x180085074
 * Callers:
 *     LdrpCheckForRetryLoading @ 0x1800612A8 (LdrpCheckForRetryLoading.c)
 * Callees:
 *     <none>
 */

LONG __fastcall LdrpCompareModuleName(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 264);
  if ( !result )
    return RtlCompareUnicodeString((PUNICODE_STRING)(a2 - 152), (PUNICODE_STRING)(a1 + 72), 1u);
  return result;
}
