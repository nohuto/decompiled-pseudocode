/*
 * XREFs of RtlStringCchLengthA @ 0x1C00091CC
 * Callers:
 *     AcpiDiagTraceDeviceReset @ 0x1C0008154 (AcpiDiagTraceDeviceReset.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C00251B0 (ACPIEcInitOpRegionHandler.c)
 *     ConvertMethodNameToUnicode @ 0x1C0059798 (ConvertMethodNameToUnicode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  if ( !psz || cchMax > 0x7FFFFFFF )
  {
    result = -1073741811;
LABEL_13:
    if ( pcchLength )
      *pcchLength = 0LL;
    return result;
  }
  for ( i = cchMax; i; --i )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = i == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( i )
      *pcchLength = cchMax - i;
    else
      *pcchLength = 0LL;
  }
  if ( !i )
    goto LABEL_13;
  return result;
}
