/*
 * XREFs of RtlStringCchCatNA @ 0x1C003BDE4
 * Callers:
 *     GetObjectPathNoLock @ 0x1C004BBC8 (GetObjectPathNoLock.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C008DDB4 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C003BE3C (RtlStringCopyWorkerA.c)
 *     RtlStringValidateDestAndLengthA @ 0x1C003BE88 (RtlStringValidateDestAndLengthA.c)
 */

NTSTATUS __stdcall RtlStringCchCatNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToAppend)
{
  NTSTATUS result; // eax
  size_t *v7; // r8
  __int64 v8; // r10
  __int64 v9; // r11
  size_t pcchDestLength[3]; // [rsp+30h] [rbp-18h] BYREF

  pcchDestLength[0] = 0LL;
  result = RtlStringValidateDestAndLengthA(pszDest, cchDest, pcchDestLength, cchToAppend);
  if ( result >= 0 )
    return RtlStringCopyWorkerA(
             (NTSTRSAFE_PSTR)(pcchDestLength[0] + v9),
             v8 - pcchDestLength[0],
             v7,
             pszSrc,
             cchToAppend);
  return result;
}
