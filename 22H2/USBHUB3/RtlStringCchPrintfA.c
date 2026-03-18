/*
 * XREFs of RtlStringCchPrintfA @ 0x1C00014E0
 * Callers:
 *     HUBMUX_CreatePSM @ 0x1C000FDA8 (HUBMUX_CreatePSM.c)
 *     HUBPDO_ReportDeviceFailure @ 0x1C001B478 (HUBPDO_ReportDeviceFailure.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C0033DDC (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0076680 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_QueryHubErrataFlags @ 0x1C007B7E4 (HUBFDO_QueryHubErrataFlags.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C0083478 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     DriverEntry @ 0x1C0092234 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v4; // ebx
  size_t v5; // rdi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
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
  else
  {
    v4 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  return v4;
}
