/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x140250530
 * Callers:
 *     KeDisableTimer2 @ 0x140204028 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x140204564 (KiFinalizeTimer2Disablement.c)
 *     KeFlushIoBuffers @ 0x1402DCDE0 (KeFlushIoBuffers.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14039E8DC (KiInvokeInterruptServiceRoutine.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x140417C90 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140417E70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140417FC0 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x14041DE10 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x14041DF70 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x1405538A0 (IopTimerDispatch.c)
 *     CmpCloseKeyObject @ 0x1406B5340 (CmpCloseKeyObject.c)
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     CmCreateKey @ 0x1406BBA60 (CmCreateKey.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1406E7B60 (CmOpenKey.c)
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407590A0 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1407AB260 (NtEnumerateValueKey.c)
 *     CmpSecurityMethod @ 0x1407AC040 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x1407AC4B0 (NtEnumerateKey.c)
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x140250570 (EtwGetKernelTraceTimestampSilo.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestamp(__int64 a1, __int64 a2)
{
  return EtwGetKernelTraceTimestampSilo(a1, a2, 0LL);
}
