NTSTATUS __fastcall Counter_CreateCommonBufferInstance(PPCW_INSTANCE *a1)
{
  NTSTATUS result; // eax
  PPCW_INSTANCE v2; // r9
  int Data; // [rsp+20h] [rbp-58h]
  struct _PCW_DATA v5; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-28h] BYREF

  result = g_WdfDriverUsbXhciContext;
  v2 = *a1;
  DestinationString = 0LL;
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) && !a1[2] )
  {
    Data = *((_DWORD *)v2 + 44);
    if ( *((_DWORD *)v2 + 61) == 1 )
      RtlStringCchPrintfW(pszDest, 0xAuLL, L"%04X.%u", *((unsigned __int16 *)v2 + 124), Data);
    else
      RtlStringCchPrintfW(pszDest, 0xAuLL, L"%S.%u", (char *)v2 + 304, Data);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v5.Data = a1[1];
    v5.Size = 16;
    return PcwCreateInstance(a1 + 2, Ctr_CommonBuffer, &DestinationString, 1u, &v5);
  }
  return result;
}
