/*
 * XREFs of PsLoadVsmEnclaveData @ 0x1405A4630
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x140A3B45C (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     PspFindVsmEnclaveThread @ 0x1408A13DC (PspFindVsmEnclaveThread.c)
 *     VslLoadEnclaveData @ 0x14093F95C (VslLoadEnclaveData.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsLoadVsmEnclaveData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  bool v5; // di
  unsigned __int64 Pool2; // rsi
  int EnclaveData; // eax
  unsigned int v13; // r15d
  volatile signed __int64 *v14; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // r8
  unsigned __int64 *v17; // r13
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  int v20; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v20 = 0;
  if ( a3 == 4 )
  {
    Pool2 = ExAllocatePool2(256LL, 40LL, 1950708560LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = 0LL;
  }
  EnclaveData = VslLoadEnclaveData(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, (__int64)&v20);
  v13 = EnclaveData;
  if ( !Pool2 )
    return v13;
  if ( EnclaveData < 0 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return v13;
  }
  v14 = (volatile signed __int64 *)(a1 + 112);
  *(_DWORD *)(Pool2 + 32) = v20;
  *(_QWORD *)(Pool2 + 24) = a2;
  *(_DWORD *)(Pool2 + 36) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v17 = (unsigned __int64 *)(a1 + 104);
  v18 = *(_QWORD **)(a1 + 104);
  if ( !v18 )
    goto LABEL_11;
  while ( (int)PspFindVsmEnclaveThread(a2, v18, v16) < 0 )
  {
    v19 = (_QWORD *)*v18;
    if ( !*v18 )
      goto LABEL_11;
LABEL_15:
    v18 = v19;
  }
  v19 = (_QWORD *)v18[1];
  if ( v19 )
    goto LABEL_15;
  v5 = 1;
LABEL_11:
  RtlAvlInsertNodeEx(v17, (unsigned __int64)v18, v5, Pool2);
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v13;
}
