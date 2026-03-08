/*
 * XREFs of ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEA_K@Z @ 0x1C01FEA40
 * Callers:
 *     ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z @ 0x1C01FDCF8 (--$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z.c)
 *     ?TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEA_K@Z @ 0x1C03CA720 (-TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        _QWORD *a4)
{
  NTSTATUS v6; // eax
  __int64 v8; // rdx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v12; // [rsp+4Ch] [rbp-2Ch]
  int v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+54h] [rbp-24h]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  ResultLength = 0;
  v6 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x17u, &ResultLength);
  if ( v6 == -1073741772 )
    return 0;
  if ( v6 < 0 )
  {
    v8 = v6;
LABEL_9:
    WdLogSingleEntry1(2LL, v8);
    return 0;
  }
  if ( v12 != 11 || v13 != 8 )
  {
    v8 = -1073741823LL;
    goto LABEL_9;
  }
  *a4 = v14;
  return 1;
}
