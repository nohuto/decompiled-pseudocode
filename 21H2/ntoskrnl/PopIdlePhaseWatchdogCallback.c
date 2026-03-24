/*
 * XREFs of PopIdlePhaseWatchdogCallback @ 0x1405765D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x140414200 (memset.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888B30 (DbgkWerCaptureLiveKernelDump.c)
 *     PopPowerAggregatorSnapDiagnosticContext @ 0x1408EEB04 (PopPowerAggregatorSnapDiagnosticContext.c)
 *     PopPdcSnapDiagnosticContext @ 0x1408F0158 (PopPdcSnapDiagnosticContext.c)
 *     PopSnapSystemIdleContext @ 0x1408F0FCC (PopSnapSystemIdleContext.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopIdlePhaseWatchdogCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  PVOID v6; // rax
  unsigned int v7; // ebx
  __int128 v9; // [rsp+58h] [rbp-39h] BYREF
  __int128 v10; // [rsp+68h] [rbp-29h]
  void *v11; // [rsp+78h] [rbp-19h]
  PVOID P[10]; // [rsp+88h] [rbp-9h] BYREF

  v11 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(P, 0, sizeof(P));
  PopSnapSystemIdleContext(&P[2], &P[3]);
  PopPdcSnapDiagnosticContext(&v9);
  PopAcquireRwLockExclusive((ULONG_PTR)&unk_140C21388);
  v6 = qword_140C21398;
  qword_140C21398 = 0LL;
  dword_140C213A0 = 0;
  P[0] = v6;
  PopReleaseRwLock((ULONG_PTR)&unk_140C21388);
  *(_OWORD *)&P[4] = v9;
  *(_OWORD *)&P[6] = v10;
  P[8] = v11;
  PopPowerAggregatorSnapDiagnosticContext(&P[9]);
  v7 = DbgkWerCaptureLiveKernelDump(L"IdlePhaseWatchdog", a5, a6, 0LL, 0LL, 0);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x67696450u);
  if ( P[2] )
    ExFreePoolWithTag(P[2], 0x67696450u);
  if ( P[4] )
    ExFreePoolWithTag(P[4], 0x54445050u);
  if ( P[5] )
    ExFreePoolWithTag(P[5], 0x54445050u);
  if ( P[6] )
    ExFreePoolWithTag(P[6], 0x54445050u);
  if ( P[7] )
    ExFreePoolWithTag(P[7], 0x54445050u);
  if ( P[8] )
    ExFreePoolWithTag(P[8], 0x54445050u);
  if ( P[9] )
    ExFreePoolWithTag(P[9], 0x67696450u);
  return v7;
}
