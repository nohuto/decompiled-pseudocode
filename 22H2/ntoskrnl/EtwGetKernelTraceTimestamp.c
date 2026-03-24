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

__int64 __fastcall EtwGetKernelTraceTimestamp(LARGE_INTEGER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r11
  LARGE_INTEGER *v6; // rdi
  int v7; // ebx
  bool i; // zf
  __int64 v9; // r10
  __int64 v10; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = qword_140D248A0;
  v5 = (unsigned int)a2;
  v6 = a1;
  v7 = 0;
  if ( qword_140D248A0 )
  {
    a4 = *(unsigned int *)(qword_140D248A0 + 4224);
    for ( i = !_BitScanForward((unsigned int *)&a1, a4); !i; i = !_BitScanForward((unsigned int *)&a1, a4) )
    {
      v9 = (unsigned int)a1;
      a4 = ((_DWORD)a4 - 1) & (unsigned int)a4;
      v10 = 32LL * (unsigned int)a1 + qword_140D248A0 + 4260;
      if ( v10 )
      {
        a2 = (unsigned int)v5 & *(_DWORD *)(v10 + 4 * (v5 >> 29));
        if ( (a2 & 0x1FFFFFFF) != 0 )
          v7 |= 1 << *(_BYTE *)(qword_140D248A0 + 2 * v9 + 4209);
      }
    }
  }
  else
  {
    LOBYTE(v7) = 30;
  }
  if ( (v7 & 2) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  *v6 = PerformanceCounter;
  if ( (v7 & 4) != 0 )
    result = RtlGetSystemTimePrecise(a1, a2, v4, a4);
  else
    result = 0LL;
  v6[1].QuadPart = result;
  if ( (v7 & 8) != 0 )
  {
    result = __rdtsc();
    v6[2].QuadPart = result;
  }
  else
  {
    v6[2].QuadPart = 0LL;
  }
  if ( (v7 & 0x10) != 0 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 *))off_140C009E0[0])(&v13);
    result = v13;
    v6[3].QuadPart = v13;
  }
  else
  {
    v6[3].QuadPart = 0LL;
  }
  return result;
}
