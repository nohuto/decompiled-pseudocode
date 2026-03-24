/*
 * XREFs of _SetDisplayMapping @ 0x1C01EEFA4
 * Callers:
 *     NtUserSetDisplayMapping @ 0x1C0201800 (NtUserSetDisplayMapping.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00499CC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall SetDisplayMapping(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-3C8h] BYREF
  _DWORD v9[212]; // [rsp+40h] [rbp-3B8h] BYREF
  WCHAR SourceString[32]; // [rsp+390h] [rbp-68h] BYREF

  v4 = 0;
  memset(&v9[1], 0, 0x344uLL);
  v5 = *(_QWORD *)(a1 + 16);
  DestinationString = 0LL;
  RIMEndAllActiveContacts(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 424LL), a1, 0LL);
  v6 = *(_QWORD *)(a2 + 240);
  v9[0] = 840;
  if ( (unsigned int)DrvGetHdevName(v6, SourceString) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v9, 1, 0) >= 0
      && (int)RtlStringCchCopyW((char *)(v5 + 1364), 128LL, (char *)&v9[82]) >= 0 )
    {
      RIMFindMonitorForDigitizer(v5, a1, 1LL, 0LL);
      return 1;
    }
  }
  return v4;
}
