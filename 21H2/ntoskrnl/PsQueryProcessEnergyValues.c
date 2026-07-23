/*
 * XREFs of PsQueryProcessEnergyValues @ 0x1406D8A30
 * Callers:
 *     PspFoldProcessAccountingIntoJob @ 0x14060BA1C (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406803E0 (PspQueryProcessAccountingInformationCallback.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140682C20 (PopEtProcessEnumSnapshotCallback.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406F6E88 (PopEtEnergyContextProcessStateUpdate.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 * Callees:
 *     RtlTimelineBitmapUpdateRange @ 0x14022C2E4 (RtlTimelineBitmapUpdateRange.c)
 *     PoEnergyEstimationEnabled @ 0x1402AA040 (PoEnergyEstimationEnabled.c)
 *     KeQueryTimelineBitmapTime @ 0x1402AA050 (KeQueryTimelineBitmapTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall PsQueryProcessEnergyValues(_QWORD *a1, _OWORD *a2)
{
  char result; // al
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned int TimelineBitmapTime; // eax
  _QWORD *v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // r13d
  __int64 v11; // r8
  char *v12; // r11
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  _OWORD *v19; // r11
  unsigned __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v25; // rdi
  _QWORD *v26; // r15
  _QWORD *i; // r10
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  int v45; // eax

  memset(a2, 0, 0x1B0uLL);
  result = PoEnergyEstimationEnabled();
  if ( !result || a1 == PsIdleProcess )
    return result;
  v5 = a1[285];
  *((_QWORD *)a2 + 8) = *(_QWORD *)(v5 + 64);
  *((_QWORD *)a2 + 9) = *(_QWORD *)(v5 + 72);
  *((_QWORD *)a2 + 10) = *(_QWORD *)(v5 + 80);
  *((_QWORD *)a2 + 11) = *(_QWORD *)(v5 + 88);
  *((_QWORD *)a2 + 12) = *(_QWORD *)(v5 + 96);
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v8 = a2 + 17;
  v9 = v5 - (_QWORD)a2;
  v10 = TimelineBitmapTime;
  v11 = 14LL;
  do
  {
    *v8 = *(_QWORD *)((char *)v8 + v9);
    ++v8;
    --v11;
  }
  while ( v11 );
  v12 = (char *)a2 + 104;
  v13 = 3LL;
  do
  {
    v14 = *(_QWORD *)&v12[v9];
    v15 = 0;
    *(_QWORD *)v12 = v14;
    v16 = HIDWORD(v14);
    if ( (v16 & 0x80000000) != 0LL )
    {
      v40 = v16 & 0x7FFFFFFF;
      *((_DWORD *)v12 + 1) = v40;
      v41 = *(_DWORD *)&v12[v9];
      if ( (unsigned int)v6 > v41 )
      {
        *(_DWORD *)v12 = v6;
        v15 = v6 - v41;
        if ( (_DWORD)v6 - v41 == -1 || ~v15 < v40 )
          v42 = -1;
        else
          v42 = v15 + v40;
        *((_DWORD *)v12 + 1) = v42 & 0x7FFFFFFF;
      }
    }
    if ( v12 == (char *)a2 + 104 )
    {
      v17 = 304LL;
    }
    else
    {
      if ( v12 != (char *)(a2 + 7) )
        goto LABEL_14;
      v17 = 312LL;
    }
    if ( (_OWORD *)((char *)a2 + v17) && v15 )
      RtlTimelineBitmapUpdateRange((__int64 *)((char *)a2 + v17), v10 - (v15 >> 12), v10);
LABEL_14:
    v12 += 8;
    --v13;
  }
  while ( v13 );
  v18 = 5LL;
  v19 = a2 + 24;
  while ( 2 )
  {
    v20 = *(_QWORD *)((char *)v19 + v9);
    v21 = 0;
    *(_QWORD *)v19 = v20;
    v22 = HIDWORD(v20);
    if ( (v22 & 0x80000000) != 0LL )
    {
      v43 = v22 & 0x7FFFFFFF;
      *((_DWORD *)v19 + 1) = v43;
      v44 = *(_DWORD *)((char *)v19 + v9);
      if ( (unsigned int)v6 > v44 )
      {
        *(_DWORD *)v19 = v6;
        v21 = v6 - v44;
        if ( (_DWORD)v6 - v44 == -1 || ~v21 < v43 )
          v45 = -1;
        else
          v45 = v21 + v43;
        *((_DWORD *)v19 + 1) = v45 & 0x7FFFFFFF;
      }
    }
    if ( v19 == (_OWORD *)((char *)a2 + 392) )
    {
      v23 = 352LL;
      goto LABEL_22;
    }
    if ( v19 == a2 + 25 )
    {
      v23 = 360LL;
LABEL_22:
      if ( (_OWORD *)((char *)a2 + v23) && v21 )
        RtlTimelineBitmapUpdateRange((__int64 *)((char *)a2 + v23), v10 - (v21 >> 12), v10);
      goto LABEL_25;
    }
    if ( v19 == (_OWORD *)((char *)a2 + 408) )
    {
      v23 = 368LL;
      goto LABEL_22;
    }
LABEL_25:
    v19 = (_OWORD *)((char *)v19 + 8);
    if ( --v18 )
      continue;
    break;
  }
  *((_DWORD *)a2 + 32) = *(_DWORD *)(v5 + 128);
  *((_DWORD *)a2 + 33) = *(_DWORD *)(v5 + 132);
  *((_DWORD *)a2 + 34) = *(_DWORD *)(v5 + 136);
  *((_DWORD *)a2 + 106) = *(_DWORD *)(v5 + 424);
  *((_DWORD *)a2 + 107) = *(_DWORD *)(v5 + 428);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = a1 + 268;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 268), 0LL);
  v26 = a1 + 188;
  *a2 = *(_OWORD *)v5;
  a2[1] = *(_OWORD *)(v5 + 16);
  a2[2] = *(_OWORD *)(v5 + 32);
  a2[3] = *(_OWORD *)(v5 + 48);
  a2[9] = *(_OWORD *)(v5 + 144);
  a2[10] = *(_OWORD *)(v5 + 160);
  a2[11] = *(_OWORD *)(v5 + 176);
  a2[12] = *(_OWORD *)(v5 + 192);
  a2[13] = *(_OWORD *)(v5 + 208);
  a2[14] = *(_OWORD *)(v5 + 224);
  a2[15] = *(_OWORD *)(v5 + 240);
  a2[16] = *(_OWORD *)(v5 + 256);
  for ( i = (_QWORD *)*v26; i != v26; i = (_QWORD *)*i )
  {
    v28 = i[34];
    v29 = *(_QWORD *)(v28 + 192);
    v30 = *((_DWORD *)a2 + 68);
    if ( (unsigned int)v29 > v30 )
    {
      *((_DWORD *)a2 + 68) = v29;
      if ( (unsigned int)v29 - v30 >= 0x20 )
        v39 = 0;
      else
        v39 = *((_DWORD *)a2 + 69) << (v29 - v30);
      *((_DWORD *)a2 + 69) = v39 | HIDWORD(v29);
    }
    else
    {
      v31 = v30 - v29;
      if ( v31 < 0x20 )
        *((_DWORD *)a2 + 69) |= HIDWORD(v29) << v31;
    }
    v32 = v28 - (_QWORD)a2;
    v33 = a2;
    v34 = 4LL;
    do
    {
      v35 = 2LL;
      do
      {
        *v33 += *(_QWORD *)((char *)v33 + v32);
        v33[18] += *(_QWORD *)((char *)v33 + v32 + 64);
        v33[26] += *(_QWORD *)((char *)v33 + v32 + 128);
        ++v33;
        --v35;
      }
      while ( v35 );
      --v34;
    }
    while ( v34 );
  }
  if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v25);
  KeAbPostRelease((ULONG_PTR)v25);
  return (unsigned __int8)KeLeaveCriticalRegionThread((__int64)CurrentThread, v36, v37, v38);
}
