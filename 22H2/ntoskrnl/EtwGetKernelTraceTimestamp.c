/*
 * XREFs of EtwGetKernelTraceTimestamp @ 0x1402F1D90
 * Callers:
 *     KiProcessExpiredTimerList @ 0x140247410 (KiProcessExpiredTimerList.c)
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 *     KiIpiProcessRequests @ 0x1402EF610 (KiIpiProcessRequests.c)
 *     KeFlushIoBuffers @ 0x1403007D0 (KeFlushIoBuffers.c)
 *     KiIpiSendRequest @ 0x140343EE0 (KiIpiSendRequest.c)
 *     KeDisableTimer2 @ 0x140348C40 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x140348F6C (KiFinalizeTimer2Disablement.c)
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     KiScanInterruptObjectList @ 0x1403FF030 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FF210 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FF360 (KiInterruptSubDispatchNoLock.c)
 *     KiHvInterruptSubDispatch @ 0x140404320 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404480 (KiVmbusInterruptSubDispatch.c)
 *     IopTimerDispatch @ 0x140500DB0 (IopTimerDispatch.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1405218AC (KiInvokeInterruptServiceRoutine.c)
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x1405F3E50 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405F48F0 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140645C90 (NtQueryKey.c)
 *     CmKtmNotification @ 0x14066E410 (CmKtmNotification.c)
 *     NtQueryMultipleValueKey @ 0x140686BA0 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140696C00 (NtFlushKey.c)
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1406DDF10 (CmpSecurityMethod.c)
 *     NtDeleteValueKey @ 0x1406E1EF0 (NtDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x1406E3D70 (CmpCloseKeyObject.c)
 *     NtDeleteKey @ 0x1406E5000 (NtDeleteKey.c)
 *     CmCreateKey @ 0x1406E8480 (CmCreateKey.c)
 *     CmpReplicateKeyToVirtual @ 0x140870A14 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x140341F30 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, unsigned int a2)
{
  int v3; // ebx
  unsigned int v4; // r9d
  bool i; // zf
  unsigned int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  if ( qword_140D248A0 )
  {
    v4 = *(_DWORD *)(qword_140D248A0 + 4224);
    for ( i = !_BitScanForward(&v6, v4); !i; i = !_BitScanForward(&v6, v4) )
    {
      v7 = v6;
      v4 &= v4 - 1;
      v8 = 32LL * v6 + qword_140D248A0 + 4260;
      if ( v8 && (a2 & *(_DWORD *)(v8 + 4 * ((unsigned __int64)a2 >> 29)) & 0x1FFFFFFF) != 0 )
        v3 |= 1 << *(_BYTE *)(qword_140D248A0 + 2 * v7 + 4209);
    }
  }
  else
  {
    LOBYTE(v3) = 30;
  }
  if ( (v3 & 2) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  *a1 = PerformanceCounter;
  if ( (v3 & 4) != 0 )
    result = RtlGetSystemTimePrecise();
  else
    result.QuadPart = 0LL;
  a1[1] = result;
  if ( (v3 & 8) != 0 )
  {
    result.QuadPart = __rdtsc();
    a1[2] = result;
  }
  else
  {
    a1[2].QuadPart = 0LL;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v11.QuadPart = 0LL;
    ((void (__fastcall *)(LARGE_INTEGER *))off_140C009E0[0])(&v11);
    result = v11;
    a1[3] = v11;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}
