NTSTATUS Counter_Register()
{
  NTSTATUS result; // eax
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+20h] [rbp-40h] BYREF

  result = g_WdfDriverUsbXhciContext;
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
  {
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (const _UNICODE_STRING *)L" \"";
    *(_QWORD *)&Info.CounterCount = 6LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`Ctr_InitRegistrationInformationInterrupter'::`2'::Descriptors;
    memset(&Info.Callback, 0, 24);
    PcwRegister(&Ctr_Interrupter, &Info);
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (const _UNICODE_STRING *)L"\"$";
    *(_QWORD *)&Info.CounterCount = 4LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`Ctr_InitRegistrationInformationCommonBuffer'::`2'::Descriptors;
    memset(&Info.Callback, 0, 24);
    PcwRegister(&Ctr_CommonBuffer, &Info);
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (const _UNICODE_STRING *)L"\"$";
    *(_QWORD *)&Info.CounterCount = 7LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`Ctr_InitRegistrationInformationTransferRing'::`2'::Descriptors;
    memset(&Info.Callback, 0, 24);
    return PcwRegister(&Ctr_TransferRing, &Info);
  }
  return result;
}
