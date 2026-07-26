/*
 * XREFs of ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C00337E4
 * Callers:
 *     DriverEntry @ 0x1C01448F0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void ndisRegisterPDCounterSets(void)
{
  __int64 v0; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v1; // [rsp+28h] [rbp-38h]
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+30h] [rbp-30h] BYREF

  v0 = 4063292LL;
  v1 = L"PacketDirect Transmit Counters";
  *(_QWORD *)&Info.Version = 256LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisRegisterPDTxQueueCounterSet'::`2'::Descriptors;
  *(_QWORD *)&Info.CounterCount = 4LL;
  Info.Name = (PCUNICODE_STRING)&v0;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwCallback;
  Info.CallbackContext = (PVOID)2;
  PcwRegister(&ndisPDTxQueueCounterSet, &Info);
  v0 = 3932218LL;
  v1 = L"PacketDirect Receive Counters";
  *(_QWORD *)&Info.Version = 256LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisRegisterPDRxQueueCounterSet'::`2'::Descriptors;
  *(_QWORD *)&Info.CounterCount = 6LL;
  Info.Name = (PCUNICODE_STRING)&v0;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwCallback;
  Info.CallbackContext = (PVOID)1;
  PcwRegister(&ndisPDRxQueueCounterSet, &Info);
  v0 = 3801144LL;
  v1 = L"PacketDirect Receive Filters";
  *(_QWORD *)&Info.Version = 256LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisRegisterPDTxQueueCounterSet'::`2'::Descriptors;
  *(_QWORD *)&Info.CounterCount = 4LL;
  Info.Name = (PCUNICODE_STRING)&v0;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwCallback;
  Info.CallbackContext = (PVOID)3;
  PcwRegister(&ndisPDRxFilterCounterSet, &Info);
  v0 = 3670070LL;
  v1 = L"PacketDirect EC Utilization";
  *(_QWORD *)&Info.Version = 256LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisRegisterPDECUtilizationCounterSet'::`2'::Descriptors;
  *(_QWORD *)&Info.CounterCount = 13LL;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwUtilizationCallback;
  Info.Name = (PCUNICODE_STRING)&v0;
  Info.CallbackContext = 0LL;
  PcwRegister(&ndisPDECUtilizationCounterSet, &Info);
  v0 = 3276848LL;
  v1 = L"PacketDirect Queue Depth";
  *(_QWORD *)&Info.Version = 256LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisRegisterPDQueueDepthCounterSet'::`2'::Descriptors;
  *(_QWORD *)&Info.CounterCount = 2LL;
  Info.Callback = (PPCW_CALLBACK)ndisPDPcwQueueDepthCallback;
  Info.Name = (PCUNICODE_STRING)&v0;
  Info.CallbackContext = 0LL;
  PcwRegister(&ndisPDQueueDepthCounterSet, &Info);
}
