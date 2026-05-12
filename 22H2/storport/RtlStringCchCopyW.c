/*
 * XREFs of RtlStringCchCopyW @ 0x1C00332E0
 * Callers:
 *     StorCreateSystemLogEntry @ 0x1C0046054 (StorCreateSystemLogEntry.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C00757E4 (RaidGetStorageAdapterSerialNumberProperty.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0033384 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, v5);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
