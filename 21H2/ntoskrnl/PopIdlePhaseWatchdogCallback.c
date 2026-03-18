/*
 * XREFs of PopIdlePhaseWatchdogCallback @ 0x1403A0800
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopSnapSystemIdleContext @ 0x140809060 (PopSnapSystemIdleContext.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopPowerAggregatorSnapDiagnosticContext @ 0x14080B708 (PopPowerAggregatorSnapDiagnosticContext.c)
 *     PopPdcSnapDiagnosticContext @ 0x14080B778 (PopPdcSnapDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopIdlePhaseWatchdogCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  PVOID v7; // rax
  __int128 v9; // [rsp+58h] [rbp-39h] BYREF
  __int128 v10; // [rsp+68h] [rbp-29h]
  __int128 v11; // [rsp+78h] [rbp-19h]
  PVOID P[10]; // [rsp+88h] [rbp-9h] BYREF

  v6 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  memset(P, 0, sizeof(P));
  PopPdcSnapDiagnosticContext(&v9);
  if ( (v10 & 0xFFFFFFDF) != 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C20768);
    v7 = qword_140C20778;
    qword_140C20778 = 0LL;
    P[0] = v7;
    LODWORD(v7) = dword_140C20780;
    dword_140C20780 = 0;
    LODWORD(P[1]) = (_DWORD)v7;
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C20768);
    *(_OWORD *)&P[4] = v9;
    P[6] = *((PVOID *)&v10 + 1);
    *(_OWORD *)&P[7] = v11;
    PopSnapSystemIdleContext(&P[2], &P[3]);
    PopPowerAggregatorSnapDiagnosticContext(&P[9]);
    v6 = DbgkWerCaptureLiveKernelDump(L"IdlePhaseWatchdog", a5, a6, 0LL, 0LL, 0);
  }
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
  return v6;
}
