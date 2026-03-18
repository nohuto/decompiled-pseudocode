/*
 * XREFs of RtlStringLengthWorkerW @ 0x1C004F880
 * Callers:
 *     RtlStringCbCatW @ 0x1C004F7A4 (RtlStringCbCatW.c)
 *     UsbhBuildContainerID @ 0x1C0050024 (UsbhBuildContainerID.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  for ( i = cchMax; cchMax; --cchMax )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = cchMax == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( cchMax )
      *pcchLength = i - cchMax;
    else
      *pcchLength = 0LL;
  }
  return result;
}
