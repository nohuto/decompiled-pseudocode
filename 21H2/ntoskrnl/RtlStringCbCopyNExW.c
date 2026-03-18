/*
 * XREFs of RtlStringCbCopyNExW @ 0x14024AB14
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x14077CF10 (_CmGetDeviceRegPropWorker.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x14024AB88 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cbToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  size_t v8; // rbx
  size_t v10; // r9
  NTSTATUS result; // eax
  size_t v12; // [rsp+48h] [rbp+10h] BYREF

  v8 = cbDest >> 1;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    return -1073741811;
  v10 = cbToCopy >> 1;
  if ( v10 >= 0x7FFFFFFF )
  {
    result = -1073741811;
    *pszDest = 0;
  }
  else
  {
    result = RtlStringCopyWorkerW(pszDest, cbDest >> 1, &v12, pszSrc, v10);
    if ( result >= 0 )
      return result;
  }
  if ( cbDest )
  {
    if ( v8 )
      *pszDest = 0;
  }
  return result;
}
