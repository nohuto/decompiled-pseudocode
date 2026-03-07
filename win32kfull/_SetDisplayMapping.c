__int64 __fastcall SetDisplayMapping(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-3C8h] BYREF
  int v9; // [rsp+40h] [rbp-3B8h] BYREF
  _BYTE v10[324]; // [rsp+44h] [rbp-3B4h] BYREF
  size_t v11[65]; // [rsp+188h] [rbp-270h] BYREF
  WCHAR SourceString[32]; // [rsp+390h] [rbp-68h] BYREF

  v4 = 0;
  memset_0(v10, 0, 0x344uLL);
  v5 = *(_QWORD *)(a1 + 16);
  DestinationString = 0LL;
  RIMEndAllActiveContacts(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 408LL), a1, 0LL);
  v6 = *(_QWORD *)(a2 + 88);
  v9 = 840;
  if ( (unsigned int)DrvGetHdevName(v6, SourceString) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, &v9, 1, 0) >= 0
      && RtlStringCchCopyW((unsigned __int16 *)(v5 + 1356), 0x80uLL, v11) >= 0 )
    {
      RIMFindMonitorForDigitizer(v5, a1, 1LL, 0LL);
      return 1;
    }
  }
  return v4;
}
