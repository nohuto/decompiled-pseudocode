/*
 * XREFs of PspEnableProcessOptionalXStateFeatures @ 0x1409AB970
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     KeCopyXfdMaskToPeb @ 0x14029618C (KeCopyXfdMaskToPeb.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MmCreateKernelStack @ 0x140317B10 (MmCreateKernelStack.c)
 *     MmDeleteKernelStackEx @ 0x140318070 (MmDeleteKernelStackEx.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x140353BBC (KeGetProcessorNodeNumberByIndex.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x14056FFF0 (KeEnableOptionalXStateFeaturesApc.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspEnableProcessOptionalXStateFeatures(_QWORD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // esi
  __int64 v9; // rdi
  signed __int64 *v10; // r15
  __int64 **v11; // r14
  __int64 **v12; // rcx
  unsigned __int64 v13; // rax
  __int64 Pool2; // rax
  __int64 *v15; // r12
  _QWORD *v16; // rcx
  __int64 *v17; // r14
  unsigned __int16 ProcessorNodeNumberByIndex; // ax
  __int64 KernelStack; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 *v22; // rdi
  ULONG_PTR v23; // rcx
  unsigned int v24; // edi
  unsigned int v25; // r12d
  __int64 v26; // r14
  __int64 v27; // rax
  ULONG_PTR v28; // rcx
  _DWORD *P; // [rsp+40h] [rbp-68h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+50h] [rbp-58h]
  int v33; // [rsp+B8h] [rbp+10h]
  __int64 v34; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v34 = (__int64)CurrentThread;
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  LODWORD(v7) = 0;
  v8 = 0;
  BugCheckParameter2 = a1 + 360;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 360), 0LL);
  v9 = a2 & 0x40000;
  if ( (v9 & a1[129]) == 0 )
    goto LABEL_49;
  --CurrentThread->KernelApcDisable;
  v10 = a1 + 268;
  ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  v11 = (__int64 **)(a1 + 188);
  v12 = (__int64 **)a1[188];
  if ( v12 == a1 + 188 )
    goto LABEL_32;
  do
  {
    if ( (v9 & (unsigned __int64)*(v12 - 34)) != 0 && ((_DWORD)v12[5] & 1) == 0 )
      LODWORD(v7) = v7 + 1;
    v12 = (__int64 **)*v12;
  }
  while ( v12 != v11 );
  if ( !(_DWORD)v7 )
    goto LABEL_32;
  v13 = (unsigned __int64)(unsigned int)v7 << 7;
  if ( v13 > 0xFFFFFFFF || (int)v13 + 8 < (unsigned int)v13 )
  {
    v8 = -1073741675;
    goto LABEL_29;
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(v13 + 8), 1480946512LL);
  P = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741801;
    goto LABEL_29;
  }
  v15 = *v11;
  v6 = Pool2 + 8;
  v7 = 0LL;
  if ( *v11 == (__int64 *)v11 )
  {
LABEL_21:
    v5 = P;
LABEL_32:
    a1[129] &= ~v9;
    if ( (_DWORD)v7 )
      *v5 = v7;
    v33 = -1;
    v24 = -1;
    v25 = 0;
    if ( (_DWORD)v7 )
    {
      v26 = v6 + 112;
      v27 = v34;
      do
      {
        if ( *(_QWORD *)v26 == v27 )
        {
          v24 = v25;
          v33 = v25;
        }
        else
        {
          KeInitializeApc(
            v6 + ((unsigned __int64)v25 << 7),
            *(_QWORD *)v26,
            0,
            (__int64)KeEnableOptionalXStateFeaturesApc,
            0LL,
            0LL,
            0,
            0LL);
          if ( !(unsigned __int8)KeInsertQueueApc(v6 + ((unsigned __int64)v25 << 7), 0LL, 0LL, 0) )
          {
            v28 = *(_QWORD *)(v26 - 16);
            if ( v28 )
              MmDeleteKernelStackEx(v28, 8u, *(_QWORD *)v26);
            if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(v26 + 8), 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(P, 0);
          }
          v24 = v33;
          v27 = v34;
        }
        ++v25;
        v26 += 128LL;
      }
      while ( v25 < (unsigned int)v7 );
    }
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    CurrentThread = (struct _KTHREAD *)v34;
    KeLeaveCriticalRegionThread(v34);
    if ( v24 != -1 )
      KeEnableOptionalXStateFeaturesApc(v6 + ((unsigned __int64)v24 << 7));
    KeFlushProcessWriteBuffers(0);
    KeCopyXfdMaskToPeb(a1);
    goto LABEL_49;
  }
  v16 = a1;
  while ( 1 )
  {
    v17 = v15 - 167;
    if ( (v9 & *(v15 - 34)) == 0 || (v17[172] & 1) != 0 )
      goto LABEL_20;
    if ( (*((_DWORD *)v17 + 29) & 0x800000) == 0 )
      break;
LABEL_19:
    v16 = a1;
    v21 = (unsigned __int64)(unsigned int)v7 << 7;
    v7 = (unsigned int)(v7 + 1);
    *(_QWORD *)(v21 + v6 + 104) = v9;
    *(_QWORD *)(v21 + v6 + 112) = v17;
    *(_QWORD *)(v21 + v6 + 120) = P;
LABEL_20:
    v15 = (__int64 *)*v15;
    if ( v15 == v16 + 188 )
      goto LABEL_21;
  }
  ProcessorNodeNumberByIndex = KeGetProcessorNodeNumberByIndex(*((_DWORD *)v17 + 147));
  KernelStack = MmCreateKernelStack(0x20u, ProcessorNodeNumberByIndex, (unsigned __int64)(v15 - 167));
  if ( KernelStack )
  {
    v20 = (unsigned __int64)(unsigned int)v7 << 7;
    *(_QWORD *)(v20 + v6 + 88) = KernelStack - (unsigned int)KeDecoupledStateSaveAreaLength;
    *(_QWORD *)(v20 + v6 + 96) = KernelStack;
    goto LABEL_19;
  }
  v8 = -1073741801;
  if ( (_DWORD)v7 )
  {
    v22 = (__int64 *)(v6 + 112);
    do
    {
      v23 = *(v22 - 2);
      if ( v23 )
        MmDeleteKernelStackEx(v23, 8u, *v22);
      v22 += 16;
      --v7;
    }
    while ( v7 );
  }
  LODWORD(v7) = 0;
LABEL_29:
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  CurrentThread = (struct _KTHREAD *)v34;
  KeLeaveCriticalRegionThread(v34);
LABEL_49:
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( P && !(_DWORD)v7 )
    ExFreePoolWithTag(P, 0);
  return v8;
}
