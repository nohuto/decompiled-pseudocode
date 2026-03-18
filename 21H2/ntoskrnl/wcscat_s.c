/*
 * XREFs of wcscat_s @ 0x1403E7610
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x14080D370 (NtLockProductActivationKeys.c)
 *     BcdGetSystemStorePath @ 0x140812698 (BcdGetSystemStorePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8680 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC108 (ExpCreateOutputSIGNATURE.c)
 *     AslPathToNetworkPathNt @ 0x140A15C98 (AslPathToNetworkPathNt.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
 *     VhdiMountVhdFile @ 0x140B54AE4 (VhdiMountVhdFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  wchar_t v4; // ax
  errno_t v5; // ebx

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v3 = Dst;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInWords )
          goto LABEL_12;
      }
      while ( 1 )
      {
        v4 = *Src++;
        *v3++ = v4;
        if ( !v4 )
          return 0;
        if ( !--SizeInWords )
        {
          v5 = 34;
          goto LABEL_13;
        }
      }
    }
    else
    {
LABEL_12:
      v5 = 22;
LABEL_13:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v5;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
