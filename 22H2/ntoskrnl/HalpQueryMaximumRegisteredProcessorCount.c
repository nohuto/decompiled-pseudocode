/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x1403776B0
 * Callers:
 *     HalEnumerateProcessors @ 0x1403766E0 (HalEnumerateProcessors.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x140376FA8 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalStartNextProcessor @ 0x140377100 (HalStartNextProcessor.c)
 *     HalpTimerSelectRoles @ 0x14037A8FC (HalpTimerSelectRoles.c)
 *     HalpTscReserveResources @ 0x1403B16B8 (HalpTscReserveResources.c)
 *     HalStartDynamicProcessor @ 0x140504D00 (HalStartDynamicProcessor.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14050B0F0 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x14051CE3C (EmonAllocateResources.c)
 *     HalpTscReportSyncStatus @ 0x140861BC4 (HalpTscReportSyncStatus.c)
 *     EmonInitializeProfiling @ 0x140A89F00 (EmonInitializeProfiling.c)
 *     HalpMcaInitializePcrContext @ 0x140A90488 (HalpMcaInitializePcrContext.c)
 *     EmonCompleteInitializeProfiling @ 0x140A91210 (EmonCompleteInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x140A97C34 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x140A98840 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140B76804 (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FEF0 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x14041D260 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  int v1; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 v5; // [rsp+60h] [rbp+20h] BYREF
  int v6; // [rsp+68h] [rbp+28h] BYREF
  int v7; // [rsp+70h] [rbp+30h] BYREF

  v6 = 0;
  v7 = 0;
  v5 = 0;
  DestinationString = 0LL;
  _m_prefetchw(&dword_140D0CF04);
  LODWORD(result) = dword_140D0CF04;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140D0CF04, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount > 0x800 )
      MaximumProcessorCount = 2048;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( (int)ZwQueryLicenseValue(&DestinationString, &v7, &v5, 4LL, &v6) >= 0 && v6 == 4 && v7 == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > v5 )
        MaximumProcessorCount = v5;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140D0CF04, MaximumProcessorCount);
  }
  return result;
}
