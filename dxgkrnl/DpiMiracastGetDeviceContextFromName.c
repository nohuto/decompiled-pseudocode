/*
 * XREFs of DpiMiracastGetDeviceContextFromName @ 0x1C039A854
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C00624C4 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C039BE64 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C005F23C (DpiMiracastAddRefMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastGetDeviceContextFromName(PCWSTR SourceString)
{
  __int64 i; // rbx
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  String1 = 0LL;
  RtlInitUnicodeString(&String1, SourceString);
  AcquireMiniportListMutex();
  for ( i = qword_1C013B8A0; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_1C013B8A0 )
    {
      i = 0LL;
      goto LABEL_6;
    }
    if ( !RtlCompareUnicodeString(&String1, (PCUNICODE_STRING)(i + 160), 1u) )
      break;
  }
  DpiMiracastAddRefMiracastDeviceContext(i, i);
LABEL_6:
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  return i;
}
