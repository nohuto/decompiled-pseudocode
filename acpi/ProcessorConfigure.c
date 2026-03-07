__int64 ProcessorConfigure()
{
  ProcessorReserveIdtEntries = (__int64)ProcessorpReserveIdtEntriesApic;
  ProcessorFindIdtEntries = (__int64)ProcessorpFindIdtEntriesApic;
  return KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)ProcessorpAddInstanceCallback, 0LL, 0) == 0LL
       ? 0xC0000001
       : 0;
}
