/*
 * XREFs of RtlStringCbPrintfExW @ 0x1402986C0
 * Callers:
 *     RtlQueryPackageClaims @ 0x1402983B0 (RtlQueryPackageClaims.c)
 *     WmipGenerateBinaryMofNotification @ 0x14084FEDC (WmipGenerateBinaryMofNotification.c)
 *     PiNormalizeDeviceText @ 0x14086EE68 (PiNormalizeDeviceText.c)
 *     EtwpQueryPsmKey @ 0x1409E4448 (EtwpQueryPsmKey.c)
 *     ConvertDevpropcompkeyToString @ 0x140A6B464 (ConvertDevpropcompkeyToString.c)
 *     ConvertDevpropertyToString @ 0x140A6B5A0 (ConvertDevpropertyToString.c)
 *     PipCreateComputerId @ 0x140B56980 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1402987DC (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1403AE140 (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x14055D3D8 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS RtlStringCbPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v7; // rdi
  NTSTATUS v10; // ebx
  wchar_t *v11; // r12
  const wchar_t *v12; // r9
  NTSTATUS v13; // eax
  size_t v14; // rcx
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v7 = cbDest >> 1;
  v10 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v11 = pszDest;
    pcchNewDestLength[0] = cbDest >> 1;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (const wchar_t *)&cchOriginalDestLength;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v10 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
      if ( v7 )
        *pszDest = 0;
    }
    else if ( v7 )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(pszDest, v7, pcchNewDestLength, v12, va);
      v14 = pcchNewDestLength[0];
      v10 = v13;
      v7 -= pcchNewDestLength[0];
      pcchNewDestLength[0] = v7;
      v11 = &pszDest[v14];
      ppszDestEnda = v11;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 )
          RtlStringExHandleFillBehindNullW(&pszDest[v14], (cbDest & 1) + 2 * v7, dwFlags);
        goto LABEL_12;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_12:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v7;
        return v10;
      }
      v10 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      StringExHandleOtherFlagsW(pszDest, cbDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v11 = ppszDestEnda;
      v7 = pcchNewDestLength[0];
    }
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      goto LABEL_12;
  }
  return v10;
}
