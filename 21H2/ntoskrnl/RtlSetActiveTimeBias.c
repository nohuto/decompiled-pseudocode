/*
 * XREFs of RtlSetActiveTimeBias @ 0x1408364C4
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1406F1A04 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlpQueryRegistryValues @ 0x140781F40 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlSetActiveTimeBias(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int RegistryValues; // ebx
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF
  int ValueData; // [rsp+C0h] [rbp+67h] BYREF
  int v7; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF

  ValueData = a1;
  Handle = 0LL;
  v7 = 0;
  result = RtlpGetTimeZoneInfoHandle(1, (__int64)&Handle, a3);
  if ( (int)result >= 0 )
  {
    memset(v5, 0, 0x70uLL);
    v5[3] = &v7;
    LODWORD(v5[1]) = 292;
    v5[2] = L"ActiveTimeBias";
    LODWORD(v5[4]) = 0x4000000;
    RegistryValues = RtlpQueryRegistryValues(0x40000000, (const WCHAR *)Handle, (__int64)v5, 0LL);
    if ( RegistryValues < 0 || v7 != ValueData )
      RegistryValues = RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"ActiveTimeBias", 4u, &ValueData, 4u);
    ZwClose(Handle);
    return (unsigned int)RegistryValues;
  }
  return result;
}
