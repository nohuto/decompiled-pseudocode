/*
 * XREFs of PsQueryStatisticsProcess @ 0x140682920
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406803E0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspEnforceLimitsProcessCallback @ 0x1406816D0 (PspEnforceLimitsProcessCallback.c)
 *     ExpCopyProcessInfo @ 0x140682680 (ExpCopyProcessInfo.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     EtwTraceAppStateChange @ 0x1406A3FC0 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1406F2410 (EtwpPsProvTraceProcess.c)
 * Callees:
 *     KeQueryValuesThread @ 0x140275640 (KeQueryValuesThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r12
  __int64 v8; // r13
  _QWORD *i; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 result; // rax
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-48h]
  signed __int64 *BugCheckParameter2; // [rsp+88h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  --CurrentThread->KernelApcDisable;
  v16 = 0LL;
  BugCheckParameter2 = (signed __int64 *)(a1 + 2144);
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  v4 = *(_DWORD *)(a1 + 892);
  v5 = *(_DWORD *)(a1 + 896);
  v6 = *(_DWORD *)(a1 + 900);
  v7 = *(_QWORD *)(a1 + 1000);
  v8 = *(_QWORD *)(a1 + 1008);
  a2[3] = *(_QWORD *)(a1 + 864);
  a2[4] = *(_QWORD *)(a1 + 872);
  a2[5] = *(_QWORD *)(a1 + 1552);
  a2[6] = *(_QWORD *)(a1 + 1560);
  a2[7] = *(_QWORD *)(a1 + 1568);
  a2[8] = *(_QWORD *)(a1 + 1576);
  a2[9] = *(_QWORD *)(a1 + 1584);
  a2[10] = *(_QWORD *)(a1 + 1592);
  for ( i = *(_QWORD **)(a1 + 1504); i != (_QWORD *)(a1 + 1504); v8 += *((_QWORD *)&v16 + 1) )
  {
    v4 += *((_DWORD *)i - 151);
    v5 += *((_DWORD *)i - 131);
    KeQueryValuesThread((__int64)(i - 157), (__int64)&v15);
    a2[3] += *(i - 148);
    a2[4] += *((unsigned int *)i - 229);
    a2[5] += *(i - 45);
    a2[6] += *(i - 44);
    a2[7] += *(i - 43);
    a2[8] += *(i - 42);
    a2[9] += *(i - 41);
    a2[10] += *(i - 40);
    i = (_QWORD *)*i;
    v6 += DWORD1(v15);
    v7 += v16;
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  v13 = KeMaximumIncrement;
  *a2 = KeMaximumIncrement * (unsigned __int64)v4;
  a2[1] = v13 * v5;
  a2[2] = v13 * v6;
  result = v7 * (unsigned int)v13;
  a2[11] = result;
  a2[12] = v8 * v13;
  return result;
}
