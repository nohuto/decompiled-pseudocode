/*
 * XREFs of RtlStringCbCopyW @ 0x1C0033294
 * Callers:
 *     RaidAdapterCreateDriverInfo @ 0x1C0077494 (RaidAdapterCreateDriverInfo.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0033384 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  size_t v6; // [rsp+20h] [rbp-18h]

  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
    return RtlStringCopyWorkerW(pszDest, v3, (size_t *)pszSrc, pszSrc, v6);
  if ( v3 )
    *pszDest = 0;
  return v4;
}
