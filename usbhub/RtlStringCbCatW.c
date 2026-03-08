/*
 * XREFs of RtlStringCbCatW @ 0x1C004EC84
 * Callers:
 *     UsbhBuildContainerID @ 0x1C004F3E8 (UsbhBuildContainerID.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C004ECF0 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1C004ED4C (RtlStringLengthWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax
  size_t *v6; // r8
  __int64 v7; // r11
  size_t v8; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  pcchLength = 0LL;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    return -1073741811;
  result = RtlStringLengthWorkerW(pszDest, cbDest >> 1, &pcchLength);
  if ( result >= 0 )
    return RtlStringCopyWorkerW(&pszDest[pcchLength], v7 - pcchLength, v6, pszSrc, v8);
  return result;
}
