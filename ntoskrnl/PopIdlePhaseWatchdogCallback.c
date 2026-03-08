/*
 * XREFs of PopIdlePhaseWatchdogCallback @ 0x1403CFC20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 *     PopPdcSnapDiagnosticContext @ 0x14087EDA8 (PopPdcSnapDiagnosticContext.c)
 *     PopPowerAggregatorSnapDiagnosticContext @ 0x14087EDCC (PopPowerAggregatorSnapDiagnosticContext.c)
 *     PopSnapSystemIdleContext @ 0x14087F0F0 (PopSnapSystemIdleContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopIdlePhaseWatchdogCallback(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // ebx
  PVOID v10; // rax
  __int128 v12; // [rsp+58h] [rbp-39h] BYREF
  __int128 v13; // [rsp+68h] [rbp-29h]
  __int128 v14; // [rsp+78h] [rbp-19h]
  PVOID P[10]; // [rsp+88h] [rbp-9h] BYREF

  v8 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  memset(P, 0, sizeof(P));
  PopPdcSnapDiagnosticContext(&v12);
  if ( (v13 & 0xFFFFFFDF) != 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C39B88);
    v10 = qword_140C39B98;
    qword_140C39B98 = 0LL;
    P[0] = v10;
    LODWORD(v10) = dword_140C39BA0;
    dword_140C39BA0 = 0;
    LODWORD(P[1]) = (_DWORD)v10;
    PopReleaseRwLock((ULONG_PTR)&xmmword_140C39B88);
    *(_OWORD *)&P[4] = v12;
    P[6] = *((PVOID *)&v13 + 1);
    *(_OWORD *)&P[7] = v14;
    PopSnapSystemIdleContext(&P[2], &P[3]);
    PopPowerAggregatorSnapDiagnosticContext(&P[9]);
    v8 = DbgkWerCaptureLiveKernelDump((unsigned int)L"IdlePhaseWatchdog", a2, a3, a4, a5, a6, 0LL, 0LL, 0);
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
  return v8;
}
