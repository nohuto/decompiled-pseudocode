/*
 * XREFs of RtlStringCchCatExW @ 0x1403C3950
 * Callers:
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140639AFC (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B06F0 (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x140240F48 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1403C3A00 (RtlStringLengthWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCatExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  int v7; // r9d
  const wchar_t *v9; // r11
  size_t v11; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  pcchLength = 0LL;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v7 = -1073741811;
  if ( v7 >= 0 )
  {
    v7 = RtlStringLengthWorkerW(pszDest, cchDest, &pcchLength);
    if ( v7 >= 0 )
    {
      v7 = 0;
      if ( cchDest - pcchLength <= 1 )
      {
        if ( !*v9 )
          return v7;
        v7 = pszDest != 0LL ? -2147483643 : -1073741811;
      }
      else
      {
        v7 = RtlStringCopyWorkerW(&pszDest[pcchLength], cchDest - pcchLength, &pcchLength, v9, v11);
        if ( v7 >= 0 )
          return v7;
      }
      if ( cchDest && (cchDest & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        *pszDest = 0;
    }
  }
  return v7;
}
