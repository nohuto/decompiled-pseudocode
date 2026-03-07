void __fastcall ExpPcwHostCallback(int a1)
{
  int v1; // ecx
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+20h] [rbp-40h] BYREF

  *(&Info.Version + 1) = 0;
  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      if ( PcwpEventTracingSessionCounterSet )
      {
        PcwUnregister(PcwpEventTracingSessionCounterSet);
        PcwpEventTracingSessionCounterSet = 0LL;
      }
      if ( PcwpEventTracingCounterSet )
      {
        PcwUnregister(PcwpEventTracingCounterSet);
        PcwpEventTracingCounterSet = 0LL;
      }
      if ( PcwpSynchCounterSet )
      {
        PcwUnregister(PcwpSynchCounterSet);
        PcwpSynchCounterSet = 0LL;
      }
      if ( PcwpSynchNumaCounterSet )
      {
        PcwUnregister(PcwpSynchNumaCounterSet);
        PcwpSynchNumaCounterSet = 0LL;
      }
      if ( PcwpProcessorCounterSet )
      {
        PcwUnregister(PcwpProcessorCounterSet);
        PcwpProcessorCounterSet = 0LL;
      }
      if ( PcwpProcessCounterSet )
      {
        PcwUnregister(PcwpProcessCounterSet);
        PcwpProcessCounterSet = 0LL;
      }
      if ( PcwpFileSystemDiskIOCounterSet )
      {
        PcwUnregister(PcwpFileSystemDiskIOCounterSet);
        PcwpFileSystemDiskIOCounterSet = 0LL;
      }
      if ( PcwpThermalCounterSet )
      {
        PcwUnregister(PcwpThermalCounterSet);
        PcwpThermalCounterSet = 0LL;
      }
    }
  }
  else
  {
    EtwRegisterCounters();
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (const _UNICODE_STRING *)&`PcwpInitRegistrationInformationSynchCounterSet'::`2'::Name;
    *(_QWORD *)&Info.CounterCount = 42LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationSynchNumaCounterSet'::`2'::Descriptors;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))KiSynchCounterSetCallback;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.CallbackContext = 0LL;
    ExpRegisterCounterSet(&PcwpSynchCounterSet, &Info);
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (const _UNICODE_STRING *)L"&(";
    *(_QWORD *)&Info.CounterCount = 42LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationSynchNumaCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))KiSynchNumaCounterSetCallback;
    Info.CallbackContext = 0LL;
    ExpRegisterCounterSet(&PcwpSynchNumaCounterSet, &Info);
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (const _UNICODE_STRING *)L"*,";
    *(_QWORD *)&Info.CounterCount = 35LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationProcessorCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 1LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ExProcessorCounterSetCallback;
    Info.CallbackContext = 0LL;
    ExpRegisterCounterSet(&PcwpProcessorCounterSet, &Info);
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (const _UNICODE_STRING *)&`PcwpInitRegistrationInformationProcessCounterSet'::`2'::Name;
    *(_QWORD *)&Info.CounterCount = 30LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationProcessCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 1LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ExProcessCounterSetCallback;
    Info.CallbackContext = 0LL;
    ExpRegisterCounterSet(&PcwpProcessCounterSet, &Info);
    if ( PsIsDiskCountersEnabled() )
    {
      *(_QWORD *)&Info.Version = 512LL;
      Info.Name = (const _UNICODE_STRING *)L"02";
      *(_QWORD *)&Info.CounterCount = 2LL;
      Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationFileSystemDiskIOCounterSet'::`2'::Descriptors;
      *(_QWORD *)&Info.Flags = 0LL;
      Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))FsRtlDiskIOCounterSetCallback;
      Info.CallbackContext = 0LL;
      ExpRegisterCounterSet(&PcwpFileSystemDiskIOCounterSet, &Info);
    }
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (const _UNICODE_STRING *)L"02";
    *(_QWORD *)&Info.CounterCount = 4LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationThermalCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))PoThermalCounterSetCallback;
    Info.CallbackContext = 0LL;
    ExpRegisterCounterSet(&PcwpThermalCounterSet, &Info);
  }
}
