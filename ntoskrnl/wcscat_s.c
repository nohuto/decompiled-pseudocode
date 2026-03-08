/*
 * XREFs of wcscat_s @ 0x1403DA170
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x14082C8E8 (BcdGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x140838E20 (NtLockProductActivationKeys.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F57C0 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409F9388 (ExpCreateOutputSIGNATURE.c)
 *     AslPathToNetworkPathNt @ 0x140A5261C (AslPathToNetworkPathNt.c)
 *     VhdiMountVhdFile @ 0x140A7058C (VhdiMountVhdFile.c)
 *     ExpWatchProductTypeInitialization @ 0x140B64AFC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  errno_t v4; // ebx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v3 = Dst;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInWords )
          goto LABEL_7;
      }
      while ( 1 )
      {
        v6 = *Src++;
        *v3++ = v6;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_7:
      v4 = 22;
LABEL_8:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
