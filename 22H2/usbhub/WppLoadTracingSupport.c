/*
 * XREFs of WppLoadTracingSupport @ 0x1C0075638
 * Callers:
 *     DriverEntry @ 0x1C00422D8 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 */

void *WppLoadTracingSupport()
{
  void *result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  WPP_MAIN_CB.SecurityDescriptor = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  WPP_MAIN_CB.DeviceObjectExtension = (_DEVOBJ_EXTENSION *)MmGetSystemRoutineAddress(&DestinationString);
  result = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 2;
  if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
    result = (void *)((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD, _QWORD))WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink)(
                       &v2,
                       0LL,
                       0LL,
                       0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = MmGetSystemRoutineAddress(&DestinationString);
    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = MmGetSystemRoutineAddress(&DestinationString);
      *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = result;
      LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 4;
    }
  }
  return result;
}
