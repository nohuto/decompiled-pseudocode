/*
 * XREFs of RtlStringCbPrintfW @ 0x1C0013FD0
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0018018 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C0033144 (HUBMISC_QueryKseDeviceFlags.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C0034298 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBMISC_ReportPnPFailureProblem @ 0x1C00835A0 (HUBMISC_ReportPnPFailureProblem.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // edi
  unsigned __int64 v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      v5 = -2147483643;
    }
    else if ( v7 != v6 )
    {
      return v5;
    }
    pszDest[v6] = 0;
    return v5;
  }
  v5 = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return v5;
}
