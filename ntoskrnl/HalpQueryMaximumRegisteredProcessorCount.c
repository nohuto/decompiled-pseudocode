/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x140372460
 * Callers:
 *     HalEnumerateProcessors @ 0x140371430 (HalEnumerateProcessors.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x140371D58 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalStartNextProcessor @ 0x140371EB0 (HalStartNextProcessor.c)
 *     HalpTimerSelectRoles @ 0x140376F4C (HalpTimerSelectRoles.c)
 *     HalpTscReserveResources @ 0x1403AC968 (HalpTscReserveResources.c)
 *     HalStartDynamicProcessor @ 0x140502C20 (HalStartDynamicProcessor.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140509010 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x14051A90C (EmonAllocateResources.c)
 *     HalpTscReportSyncStatus @ 0x14085DD54 (HalpTscReportSyncStatus.c)
 *     EmonInitializeProfiling @ 0x140A868F0 (EmonInitializeProfiling.c)
 *     HalpMcaInitializePcrContext @ 0x140A8CFF8 (HalpMcaInitializePcrContext.c)
 *     EmonCompleteInitializeProfiling @ 0x140A8DD80 (EmonCompleteInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x140A94AF4 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x140A95700 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140B7228C (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x140414ED0 (ZwQueryLicenseValue.c)
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
  _m_prefetchw(&dword_140D0CB44);
  LODWORD(result) = dword_140D0CB44;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140D0CB44, result, result);
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
    _InterlockedExchange(&dword_140D0CB44, MaximumProcessorCount);
  }
  return result;
}
