/*
 * XREFs of EtwpCompressPendingBuffers @ 0x1405AC9DC
 * Callers:
 *     EtwpBufferingModeCompressionFlush @ 0x1405AC43C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1405ACCE0 (EtwpCompressionProc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     EtwpCompressBuffer @ 0x1405AC654 (EtwpCompressBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1405ACF34 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1405AD770 (EtwpRotateCompressionTargetIfNeeded.c)
 *     EtwpCompleteBuffer @ 0x1406BD8BC (EtwpCompleteBuffer.c)
 */

char __fastcall EtwpCompressPendingBuffers(__int64 a1)
{
  unsigned __int64 v1; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  LARGE_INTEGER v6; // rax
  __int64 v7; // rcx
  LONGLONG v8; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // si
  unsigned int v12; // r8d
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v19; // rax
  __int64 v20; // rcx
  int v22; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1 + 1128;
  ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
  EtwpRotateCompressionTargetIfNeeded(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = (_DWORD *)EtwpDequeueBufferPendingCompression(a1);
    v5 = v4;
    if ( !v4 )
      break;
    if ( (int)v4[3] > 0 || v4[1] > 0x48u && v4[2] > 0x48u )
    {
      if ( (int)EtwpCompressBuffer(a1, (__int64)v4) < 0 )
        _InterlockedAdd((volatile signed __int32 *)(a1 + 268), 1u);
      EtwpCompleteBuffer(a1, v5);
      v6 = KeQueryPerformanceCounter(0LL);
      v7 = *(_QWORD *)(a1 + 1256);
      v8 = v6.QuadPart - PerformanceCounter.QuadPart;
      if ( v7 )
        *(_QWORD *)(a1 + 1256) = (v8 + 4 * v7) / 5;
      else
        *(_QWORD *)(a1 + 1256) = v8;
    }
    else
    {
      EtwpCompleteBuffer(a1, v4);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v11 = ++CurrentThread->AbAllocationRegionCount;
  v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v12);
    if ( v14 )
      goto LABEL_24;
    v13 = (__int64)&CurrentThread->LockEntries[v15];
    v12 &= ~(1 << v15);
    if ( (*(_BYTE *)(v13 + 26) & 1) != 0
      && (*(_DWORD *)(v13 + 32) & 1) == 0
      && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v13 + 40) == SessionId )
    {
      *(_BYTE *)(v13 + 26) &= ~1u;
      if ( *(_QWORD *)(v13 + 32) )
        break;
    }
  }
  if ( !v13 )
  {
LABEL_24:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    goto LABEL_31;
  }
  *(_BYTE *)(v13 + 32) |= 2u;
  if ( *(__int64 *)(v13 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
  v16 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
  v17 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
  *(_BYTE *)(v13 + 25) &= ~1u;
  v22 = v16;
  *(_DWORD *)(v13 + 88) = v17;
  *(_QWORD *)(v13 + 32) = 0LL;
  v18 = (signed __int64)(v13 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v11 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v18;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
LABEL_31:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v19) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v1, &v22);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 )
  {
    v19 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != v19 )
      LOBYTE(v19) = KiCheckForKernelApcDelivery(v20);
  }
  return (char)v19;
}
