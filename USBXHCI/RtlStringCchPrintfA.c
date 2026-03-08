/*
 * XREFs of RtlStringCchPrintfA @ 0x1C000C294
 * Callers:
 *     Endpoint_Enable @ 0x1C000BDC0 (Endpoint_Enable.c)
 *     Endpoint_SetLogIdentifier @ 0x1C0019968 (Endpoint_SetLogIdentifier.c)
 *     Controller_TelemetryReport @ 0x1C0034B08 (Controller_TelemetryReport.c)
 *     Controller_Create @ 0x1C00712C4 (Controller_Create.c)
 *     Interrupter_PrepareInterrupter @ 0x1C007275C (Interrupter_PrepareInterrupter.c)
 *     Command_PrepareHardware @ 0x1C0072DA0 (Command_PrepareHardware.c)
 *     Controller_SetLogIdentifier @ 0x1C007541C (Controller_SetLogIdentifier.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C00782EC (Controller_PopulateAcpiDeviceInformation.c)
 * Callees:
 *     <none>
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
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
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
