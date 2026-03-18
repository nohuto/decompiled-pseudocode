/*
 * XREFs of RtlStringCbPrintfW @ 0x1C004436C
 * Callers:
 *     UsbhGetPersistedUsbFlagsPath @ 0x1C00448B0 (UsbhGetPersistedUsbFlagsPath.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0044C38 (UsbhGetRegUsbClassFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00461CC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetDeviceFlags @ 0x1C0051110 (UsbhGetDeviceFlags.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C00566C0 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C0058FA0 (UsbhBuildUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005925C (UsbhDeleteUxdPortSettings.c)
 *     UsbhGetUxdPortKey @ 0x1C0059C74 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C0059F10 (UsbhPropagateUxdState.c)
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
