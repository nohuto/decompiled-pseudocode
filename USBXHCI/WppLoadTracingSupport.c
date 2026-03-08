/*
 * XREFs of WppLoadTracingSupport @ 0x1C0074988
 * Callers:
 *     DriverEntry @ 0x1C0074360 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void *WppLoadTracingSupport()
{
  void *result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  WPP_MAIN_CB.DeviceObjectExtension = (_DEVOBJ_EXTENSION *)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  pfnWppTraceMessage = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  pfnWppQueryTraceInformation = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = WPP_MAIN_CB.DeviceObjectExtension;
  *(_DWORD *)&WPP_MAIN_CB.SectorSize = 2;
  if ( WPP_MAIN_CB.DeviceObjectExtension )
    result = (void *)((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD, _QWORD))WPP_MAIN_CB.DeviceObjectExtension)(
                       &v2,
                       0LL,
                       0LL,
                       0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = MmGetSystemRoutineAddress(&DestinationString);
    WPP_MAIN_CB.Reserved = result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = MmGetSystemRoutineAddress(&DestinationString);
      *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = result;
      *(_DWORD *)&WPP_MAIN_CB.SectorSize = 4;
    }
  }
  return result;
}
