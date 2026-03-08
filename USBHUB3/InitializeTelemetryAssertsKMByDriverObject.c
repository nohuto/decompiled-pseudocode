/*
 * XREFs of InitializeTelemetryAssertsKMByDriverObject @ 0x1C004151C
 * Callers:
 *     DriverEntry @ 0x1C0093228 (DriverEntry.c)
 * Callees:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0041448 (InitializeTelemetryAssertsKMWorkerInternal.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMByDriverObject(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // rcx
  bool v5; // zf
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING AnsiString; // [rsp+30h] [rbp-30h] BYREF
  struct _STRING v8; // [rsp+40h] [rbp-20h] BYREF
  struct _STRING v9; // [rsp+50h] [rbp-10h] BYREF

  AnsiString = 0LL;
  DestinationString = 0LL;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  result = IoQueryFullDriverPath(a1, &DestinationString);
  if ( (int)result >= 0 )
  {
    v3 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    if ( v3 >= 0 )
    {
      v4 = (unsigned int)AnsiString.Length - 1;
      if ( AnsiString.Length != 1 )
      {
        while ( AnsiString.Buffer[v4] != 92 )
        {
          v5 = (_DWORD)v4 == 1;
          v4 = (unsigned int)(v4 - 1);
          if ( v5 )
            goto LABEL_11;
        }
        if ( (_DWORD)v4 != AnsiString.Length )
        {
          v8 = 0LL;
          RtlInitAnsiString(&v8, &AnsiString.Buffer[(unsigned int)(v4 + 1)]);
          v9 = v8;
          v3 = InitializeTelemetryAssertsKMWorkerInternal((const void **)&v9);
        }
      }
LABEL_11:
      RtlFreeAnsiString(&AnsiString);
    }
    return (unsigned int)v3;
  }
  return result;
}
