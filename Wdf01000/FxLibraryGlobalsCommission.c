NTSTATUS __fastcall FxLibraryGlobalsCommission()
{
  _IO_ALLOCATION_ACTION (__fastcall *SystemRoutineAddress)(_DEVICE_OBJECT *, _IRP *, void *, void *); // rax
  NTSTATUS result; // eax
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  unk_1C009FF18 = 0;
  unk_1C009FF60 = 0;
  unk_1C009FF62 = 0;
  FxLibraryGlobalsQueryRegistrySettings();
  funcName = 0LL;
  RtlInitUnicodeString(&funcName, L"IoConnectInterruptEx");
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoDisconnectInterruptEx");
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptActive");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfChannels = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptInactive");
  SystemRoutineAddress = (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))MmGetSystemRoutineAddress(&funcName);
  LODWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext) = 284;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceRoutine = SystemRoutineAddress;
  RtlGetVersion((PRTL_OSVERSIONINFOW)&WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext);
  SpinLock = 0LL;
  unk_1C009FF1A = 0;
  unk_1C009FF1C = 0;
  unk_1C009FEA8 = &FxDriverGlobals;
  FxDriverGlobals = (_FX_DRIVER_GLOBALS *)&FxDriverGlobals;
  unk_1C009FE90 = 1;
  FxInitializeBugCheckDriverInfo();
  stru_1C009FEF8.m_DriverUsage = 0LL;
  stru_1C009FEF8.m_PoolToFree = 0LL;
  *(_QWORD *)&stru_1C009FEF8.m_EntrySize = 0LL;
  ImageSectionHandle = 0LL;
  unk_1C009FF28 = 0;
  result = WmiQueryTraceInformation(WdfNotifyRoutinesClass, &qword_1C009FF30, 8u, 0LL, 0LL);
  if ( result < 0 )
  {
    xmmword_1C009FF38 = 0LL;
    qword_1C009FF30 = &xmmword_1C009FF38;
    result = 0;
    LODWORD(xmmword_1C009FF38) = 32;
    unk_1C009FF48 = 0LL;
  }
  return result;
}
