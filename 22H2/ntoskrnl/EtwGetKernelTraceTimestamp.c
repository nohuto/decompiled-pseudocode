/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1402A2E70
 * Callers:
 *     KeDisableTimer2 @ 0x14031D998 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14031DED4 (KiFinalizeTimer2Disablement.c)
 *     KeFlushIoBuffers @ 0x140346DC0 (KeFlushIoBuffers.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403A2EBC (KiInvokeInterruptServiceRoutine.c)
 *     HvcallInitiateHypercall @ 0x1403CCD00 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x140420020 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140420200 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420350 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x1404261A0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426300 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x140555D40 (IopTimerDispatch.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     NtSetValueKey @ 0x1406D2AB0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1406D5980 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1406D6C60 (NtQueryKey.c)
 *     NtEnumerateKey @ 0x1406DBEC0 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x1406E2B10 (CmOpenKey.c)
 *     NtQueryValueKey @ 0x1406E2F20 (NtQueryValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DE10 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E3E0 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EAF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     CmpCloseKeyObject @ 0x1407685A0 (CmpCloseKeyObject.c)
 *     NtFlushKey @ 0x1407ACA70 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407ACFA0 (NtSetInformationKey.c)
 *     CmpReplicateKeyToVirtual @ 0x140A1A058 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A2E90 (EtwGetKernelTraceTimestampSilo.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(__int64 a1, __int64 a2)
{
  return EtwGetKernelTraceTimestampSilo(a1, a2, 0LL);
}
