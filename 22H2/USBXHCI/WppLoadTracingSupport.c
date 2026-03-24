/*
 * XREFs of WppLoadTracingSupport @ 0x1C0071710
 * Callers:
 *     DriverEntry @ 0x1C007112C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

_DEVOBJ_EXTENSION *WppLoadTracingSupport()
{
  _DEVOBJ_EXTENSION *result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  WPP_MAIN_CB.Reserved = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = MmGetSystemRoutineAddress(&DestinationString);
  result = (_DEVOBJ_EXTENSION *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 2;
  if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    result = (_DEVOBJ_EXTENSION *)((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD, _QWORD))WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink)(
                                    &v2,
                                    0LL,
                                    0LL,
                                    0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = (_DEVOBJ_EXTENSION *)MmGetSystemRoutineAddress(&DestinationString);
    *(_QWORD *)&WPP_MAIN_CB.SectorSize = result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = (_DEVOBJ_EXTENSION *)MmGetSystemRoutineAddress(&DestinationString);
      WPP_MAIN_CB.DeviceObjectExtension = result;
      LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 4;
    }
  }
  return result;
}
