NTSTATUS __fastcall Counter_CreateInterrupterInstance(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v2; // r9
  int Data; // [rsp+20h] [rbp-68h]
  int v5; // [rsp+28h] [rbp-60h]
  struct _PCW_DATA v6; // [rsp+30h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+50h] [rbp-38h] BYREF

  result = g_WdfDriverUsbXhciContext;
  v2 = *(_QWORD *)(a1 + 8);
  DestinationString = 0LL;
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) && !*(_QWORD *)(a1 + 88) )
  {
    v5 = *(_DWORD *)(a1 + 32);
    Data = *(_DWORD *)(v2 + 176);
    if ( *(_DWORD *)(v2 + 244) == 1 )
      RtlStringCchPrintfW(pszDest, 0x10uLL, L"%04X.%u.%u", *(unsigned __int16 *)(v2 + 248), Data, v5);
    else
      RtlStringCchPrintfW(pszDest, 0x10uLL, L"%S.%u.%u", v2 + 304, Data, v5);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v6.Data = (const void *)(a1 + 40);
    v6.Size = 56;
    return PcwCreateInstance((PPCW_INSTANCE *)(a1 + 88), Ctr_Interrupter, &DestinationString, 1u, &v6);
  }
  return result;
}
