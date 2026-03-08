/*
 * XREFs of ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C000E470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000BC30 (ACPIBuildCompleteCommon.c)
 */

__int64 __fastcall ACPIBuildProcessDelayedDependencyPhase1(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  signed __int32 v4; // ebp
  __int64 *v5; // rax
  const char *v6; // rax
  __int64 v7; // rdx
  const char *v8; // rcx
  signed __int32 v9; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_DWORD *)(v3 + 28);
  if ( (*(_QWORD *)(v1 + 8) & 0x80000000080LL) != 0 )
  {
    *(_DWORD *)(v3 + 48) = -1073741810;
    v4 = 2;
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(v3 + 20) &= ~0x20u;
  _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 24), v4, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 1008), 0xFFFFFFFFFFDFFFFFuLL);
  v5 = (__int64 *)qword_1C006F4B8;
  if ( *(__int64 **)qword_1C006F4B8 != &AcpiBuildQueueList )
    __fastfail(3u);
  AcpiBuildDpcFlags |= 2u;
  *(_QWORD *)v3 = &AcpiBuildQueueList;
  *(_QWORD *)(v3 + 8) = v5;
  *v5 = v3;
  qword_1C006F4B8 = v3;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  *(_DWORD *)(a1 + 32) = 0;
  v6 = (const char *)&unk_1C00622D0;
  v7 = *(_QWORD *)(v1 + 8);
  v8 = (const char *)&unk_1C00622D0;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(v1 + 608);
    if ( (v7 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x33u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      0,
      v1,
      v6,
      v8);
  v9 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v9);
  return 0LL;
}
