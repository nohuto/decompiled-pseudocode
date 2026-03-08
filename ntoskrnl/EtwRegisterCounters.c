/*
 * XREFs of EtwRegisterCounters @ 0x14085566C
 * Callers:
 *     ExpPcwHostCallback @ 0x140855740 (ExpPcwHostCallback.c)
 * Callees:
 *     ExpRegisterCounterSet @ 0x140855950 (ExpRegisterCounterSet.c)
 */

__int64 EtwRegisterCounters()
{
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+20h] [rbp-40h] BYREF

  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  *((_DWORD *)&Info.Flags + 1) = 0;
  Info.Name = (const _UNICODE_STRING *)L"24";
  Info.CounterCount = 6;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationEventTracingCounterSet'::`2'::Descriptors;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))EtwpEventTracingCounterSetCallback;
  Info.CallbackContext = (void *)1;
  Info.Version = 512;
  Info.Flags = PcwRegistrationSiloNeutral;
  ExpRegisterCounterSet(&PcwpEventTracingCounterSet, &Info);
  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  *((_DWORD *)&Info.Flags + 1) = 0;
  Info.Name = (const _UNICODE_STRING *)L"BD";
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationEventTracingSessionCounterSet'::`2'::Descriptors;
  Info.CounterCount = 5;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))EtwpEventTracingCounterSetCallback;
  Info.CallbackContext = (void *)2;
  Info.Version = 512;
  Info.Flags = PcwRegistrationSiloNeutral;
  return ExpRegisterCounterSet(&PcwpEventTracingSessionCounterSet, &Info);
}
