__int64 __fastcall InitializeWppLogging(struct _DRIVER_OBJECT *a1)
{
  PVOID v1; // rdi
  unsigned int v2; // r8d
  int v3; // ebx
  unsigned int v4; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  v1 = gpWin32kDriverObject;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Win32kWPP");
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kbaseTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(v1, &DestinationString);
  v7 = 16;
  v9 = 2;
  v8 = 0x200000000LL;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v7);
  v3 = InitializeWppRecorder((struct RECORDER_LOG__ **)&WPP_MAIN_CB.Queue, "win32kbase", v2);
  if ( v3 < 0
    || (v3 = InitializeWppRecorder(&gRimLog, "win32kbase_rim", v4), v3 < 0)
    || (v3 = ApiSetEditionInitializeWppLogging(v1, &DestinationString), v3 < 0) )
  {
    UninitializeBaseWppLog();
  }
  return (unsigned int)v3;
}
