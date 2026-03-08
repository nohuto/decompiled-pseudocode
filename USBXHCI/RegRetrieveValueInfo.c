/*
 * XREFs of RegRetrieveValueInfo @ 0x1C007B834
 * Callers:
 *     TelemetryData_pInitWerContext @ 0x1C007B300 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegRetrieveValueInfo(HANDLE KeyHandle, PUNICODE_STRING ValueName, _QWORD *a3)
{
  void *Pool2; // rbx
  ULONG Length; // esi
  NTSTATUS v8; // eax
  int v9; // edi
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  Pool2 = 0LL;
  *a3 = 0LL;
  Length = 1024;
  while ( 1 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x74614454u);
    Pool2 = (void *)ExAllocatePool2(256LL, Length, 1952531540LL);
    if ( !Pool2 )
      break;
    ResultLength = 0;
    v8 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    Length = ResultLength;
    v9 = v8;
    if ( v8 != -2147483643 && v8 != -1073741789 )
      goto LABEL_9;
  }
  v9 = -1073741670;
LABEL_9:
  if ( v9 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x74614454u);
    Pool2 = 0LL;
  }
  *a3 = Pool2;
  return (unsigned int)v9;
}
