/*
 * XREFs of RtlStringCchPrintfA @ 0x1403B86DC
 * Callers:
 *     IopCreateArcName @ 0x1407804D8 (IopCreateArcName.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     IopMarkBootPartition @ 0x140A62890 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140A62BAC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A62E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140A90EC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A91110 (PipCriticalDeviceWaitCallback.c)
 * Callees:
 *     _vsnprintf @ 0x1403D1300 (_vsnprintf.c)
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v3;
}
