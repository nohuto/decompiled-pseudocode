/*
 * XREFs of PsQueryProcessEnergyValues @ 0x1406B0B60
 * Callers:
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406F8590 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406F92F0 (PspQueryProcessAccountingInformationCallback.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140701C20 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x140703944 (PopEtEnergyContextProcessStateUpdate.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     RtlTimelineBitmapMerge @ 0x14023840C (RtlTimelineBitmapMerge.c)
 *     RtlStateDurationCapture @ 0x140238458 (RtlStateDurationCapture.c)
 *     PoEnergyEstimationEnabled @ 0x1402384C0 (PoEnergyEstimationEnabled.c)
 *     KeQueryTimelineBitmapTime @ 0x1402384D0 (KeQueryTimelineBitmapTime.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlTimelineBitmapUpdateRange @ 0x1402EA814 (RtlTimelineBitmapUpdateRange.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall PsQueryProcessEnergyValues(_QWORD *a1, _OWORD *a2)
{
  char result; // al
  unsigned __int64 v5; // r15
  unsigned int TimelineBitmapTime; // eax
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r12d
  __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 *v19; // rcx
  signed __int64 *v20; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v22; // r13
  _QWORD *v23; // r11
  _QWORD *v24; // r11
  __int64 v25; // r10
  __int64 v26; // r10
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+80h] [rbp+18h]
  __int64 v33; // [rsp+88h] [rbp+20h]

  memset(a2, 0, 0x1B0uLL);
  result = PoEnergyEstimationEnabled();
  if ( !result || a1 == PsIdleProcess )
    return result;
  v33 = a1[285];
  *((_QWORD *)a2 + 8) = *(_QWORD *)(v33 + 64);
  *((_QWORD *)a2 + 9) = *(_QWORD *)(v33 + 72);
  *((_QWORD *)a2 + 10) = *(_QWORD *)(v33 + 80);
  *((_QWORD *)a2 + 11) = *(_QWORD *)(v33 + 88);
  *((_QWORD *)a2 + 12) = *(_QWORD *)(v33 + 96);
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v32 = TimelineBitmapTime;
  v7 = v33 - (_QWORD)a2;
  v8 = a2 + 17;
  v9 = 14LL;
  do
  {
    *v8 = *(_QWORD *)((char *)v8 + v7);
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = TimelineBitmapTime;
  v11 = (__int64)a2 + 104;
  v12 = 3LL;
  do
  {
    v13 = RtlStateDurationCapture(v11, (_QWORD *)(v11 + v7), v5);
    if ( (_OWORD *)v11 == (_OWORD *)((char *)a2 + 104) )
    {
      v14 = 304LL;
    }
    else
    {
      if ( (_OWORD *)v11 != a2 + 7 )
        goto LABEL_13;
      v14 = 312LL;
    }
    if ( (_OWORD *)((char *)a2 + v14) && v13 )
      RtlTimelineBitmapUpdateRange((__int64 *)((char *)a2 + v14), v10 - (v13 >> 12), v10);
LABEL_13:
    v11 += 8LL;
    --v12;
  }
  while ( v12 );
  v15 = (__int64)(a2 + 24);
  v16 = 5LL;
  do
  {
    v17 = RtlStateDurationCapture(v15, (_QWORD *)(v15 + v7), v5);
    if ( (_OWORD *)v15 == (_OWORD *)((char *)a2 + 392) )
    {
      v18 = 352LL;
    }
    else if ( (_OWORD *)v15 == a2 + 25 )
    {
      v18 = 360LL;
    }
    else
    {
      if ( (_OWORD *)v15 != (_OWORD *)((char *)a2 + 408) )
        goto LABEL_23;
      v18 = 368LL;
    }
    v19 = (__int64 *)((char *)a2 + v18);
    if ( v19 && v17 )
      RtlTimelineBitmapUpdateRange(v19, v32 - (v17 >> 12), v32);
LABEL_23:
    v15 += 8LL;
    --v16;
  }
  while ( v16 );
  *((_DWORD *)a2 + 32) = *(_DWORD *)(v33 + 128);
  *((_DWORD *)a2 + 33) = *(_DWORD *)(v33 + 132);
  v20 = a1 + 268;
  *((_DWORD *)a2 + 34) = *(_DWORD *)(v33 + 136);
  *((_DWORD *)a2 + 106) = *(_DWORD *)(v33 + 424);
  *((_DWORD *)a2 + 107) = *(_DWORD *)(v33 + 428);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 268), 0LL);
  v22 = a1 + 188;
  *a2 = *(_OWORD *)v33;
  a2[1] = *(_OWORD *)(v33 + 16);
  a2[2] = *(_OWORD *)(v33 + 32);
  a2[3] = *(_OWORD *)(v33 + 48);
  a2[9] = *(_OWORD *)(v33 + 144);
  a2[10] = *(_OWORD *)(v33 + 160);
  a2[11] = *(_OWORD *)(v33 + 176);
  a2[12] = *(_OWORD *)(v33 + 192);
  a2[13] = *(_OWORD *)(v33 + 208);
  a2[14] = *(_OWORD *)(v33 + 224);
  a2[15] = *(_OWORD *)(v33 + 240);
  a2[16] = *(_OWORD *)(v33 + 256);
  v23 = (_QWORD *)a1[188];
  if ( (_QWORD *)*v22 != v22 )
  {
    do
    {
      *(_QWORD *)v30 = *(_QWORD *)(v23[34] + 192LL);
      RtlTimelineBitmapMerge((unsigned int *)a2 + 68, v30);
      v26 = v25 - (_QWORD)a2;
      v27 = a2;
      v28 = 4LL;
      do
      {
        v29 = 2LL;
        do
        {
          *v27 += *(_QWORD *)((char *)v27 + v26);
          v27[18] += *(_QWORD *)((char *)v27 + v26 + 64);
          v27[26] += *(_QWORD *)((char *)v27 + v26 + 128);
          ++v27;
          --v29;
        }
        while ( v29 );
        --v28;
      }
      while ( v28 );
      v23 = (_QWORD *)*v24;
    }
    while ( v23 != v22 );
  }
  if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v20);
  KeAbPostRelease((ULONG_PTR)v20);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
