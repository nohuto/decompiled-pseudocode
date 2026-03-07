__int64 __fastcall HUBFDO_QueryHubErrataFlags(__int64 a1)
{
  int v2; // ecx
  int v3; // edi
  int HubErrataFlags; // eax
  unsigned int v5; // ecx
  char v7[4]; // [rsp+40h] [rbp-20h] BYREF
  char v8; // [rsp+44h] [rbp-1Ch]
  char v9[4]; // [rsp+48h] [rbp-18h] BYREF
  char v10; // [rsp+4Ch] [rbp-14h]
  char pszDest[4]; // [rsp+50h] [rbp-10h] BYREF
  char v12; // [rsp+54h] [rbp-Ch]

  if ( *(_BYTE *)(a1 + 240) )
  {
    v3 = a1 + 2456;
    HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 2456), pszDest, v9, v7);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 168) - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        *(_DWORD *)pszDest = *(_DWORD *)(a1 + 176);
        v12 = *(_BYTE *)(a1 + 180);
        *(_DWORD *)v9 = *(_DWORD *)(a1 + 181);
        v10 = *(_BYTE *)(a1 + 185);
        *(_DWORD *)v7 = *(_DWORD *)(a1 + 186);
        v8 = *(_BYTE *)(a1 + 190);
      }
      else
      {
        RtlStringCchPrintfA(pszDest, 5uLL, "%04X", 0x7FFFFFFF);
        RtlStringCchPrintfA(v9, 5uLL, "%04X", 0x7FFFFFFF);
        RtlStringCchPrintfA(v7, 5uLL, "%04X", 0);
      }
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(_DWORD *)(a1 + 176));
      RtlStringCchPrintfA(v9, 5uLL, "%04X", *(_DWORD *)(a1 + 180));
      RtlStringCchPrintfA(v7, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 184));
    }
    v3 = a1 + 2456;
  }
  HUBREG_QueryUsbHardwareVerifierValue(
    v3,
    (unsigned int)pszDest,
    (unsigned int)v9,
    (unsigned int)v7,
    (__int64)&g_HwVerifierHubName,
    *(_QWORD *)(a1 + 2520),
    a1 + 2592);
  HubErrataFlags = HUBREG_QueryHubErrataFlags(a1, pszDest, v9, v7);
  v5 = 2045;
  if ( HubErrataFlags >= 0 )
    return 2053;
  return v5;
}
