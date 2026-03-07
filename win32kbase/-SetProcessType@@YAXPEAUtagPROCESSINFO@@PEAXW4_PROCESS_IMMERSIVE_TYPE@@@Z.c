__int64 __fastcall SetProcessType(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+80h] [rbp+18h]

  v3 = 0;
  if ( a3 >= 3 )
  {
    v10 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3717LL);
  }
  *(_DWORD *)(a1 + 812) ^= (*(_DWORD *)(a1 + 812) ^ (16 * a3)) & 0x30;
  if ( a3 == 1 )
  {
    v9 = 0LL;
    if ( (int)RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, &v9, 0LL) >= 0 )
    {
      if ( (unsigned __int8)ExQueryFastCacheDevLicense() && (unsigned int)BYTE4(v9) - 4 <= 1 )
        v3 = 512;
      *(_DWORD *)(a1 + 812) = v3 | *(_DWORD *)(a1 + 812) & 0xFFFFFDFF;
    }
    *(_DWORD *)(a1 + 812) |= 0xCu;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://DESIGN_MODE");
  result = (*(_DWORD *)(a1 + 812) ^ ((unsigned __int8)SeSecurityAttributePresent(a2, &DestinationString) << 13)) & 0x2000;
  *(_DWORD *)(a1 + 812) ^= result;
  return result;
}
