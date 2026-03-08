/*
 * XREFs of RtlStringCchPrintfA @ 0x140389204
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140B54C8C (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140B54EB0 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x140B550C4 (IopCreateArcNames.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140B90CC0 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140B90F20 (PipCriticalDeviceWaitCallback.c)
 * Callees:
 *     _vsnprintf @ 0x1403D2F50 (_vsnprintf.c)
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  size_t v4; // rdi
  NTSTATUS v5; // ebx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      pszDest[v4] = 0;
      return -2147483643;
    }
    else if ( v6 == v4 )
    {
      pszDest[v4] = 0;
    }
  }
  return v5;
}
