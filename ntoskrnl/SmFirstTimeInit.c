/*
 * XREFs of SmFirstTimeInit @ 0x1407DDCE0
 * Callers:
 *     SmProcessCreateRequest @ 0x1407DD648 (SmProcessCreateRequest.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     SmFpCleanup @ 0x1403590B8 (SmFpCleanup.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A1440 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403A1670 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x1403A1704 (SmFpPreAllocate.c)
 *     SmFpInitialize @ 0x1403A33A8 (SmFpInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A340C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1403B0DD0 (MmStoreChargeResidentAvailableForRead.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405BC26C (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmTerminateStoreProcess @ 0x1405C77C8 (SmTerminateStoreProcess.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 *     MmStoreRegister @ 0x140834CA4 (MmStoreRegister.c)
 *     MmStoreCheckPagefiles @ 0x140836214 (MmStoreCheckPagefiles.c)
 *     ExpPartitionCreatePool @ 0x1408480E8 (ExpPartitionCreatePool.c)
 *     SmRegistrationCtxStart @ 0x14085DAC0 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(__int64 a1, int a2, int a3)
{
  volatile signed __int64 *v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v8; // edx
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int MinimalProcess; // edi
  __int64 v16; // r15
  __int64 v17; // rdi
  int v18; // r9d
  int v19; // r15d
  HANDLE Handle; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+68h] [rbp-31h] BYREF
  PVOID Object; // [rsp+70h] [rbp-29h] BYREF
  __int128 v23; // [rsp+78h] [rbp-21h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v24; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v25[4]; // [rsp+B8h] [rbp+1Fh] BYREF

  Handle = 0LL;
  v3 = (volatile signed __int64 *)(a1 + 1992);
  v25[2] = 1048596;
  memset(&v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 1992, 0LL);
  if ( *(PVOID *)(a1 + 1936) != PspSystemPartition && !*(_QWORD *)(a1 + 1944) )
  {
    MinimalProcess = -1073741394;
    goto LABEL_13;
  }
  v10 = *(_DWORD *)(a1 + 1984);
  if ( v10 )
  {
    if ( v10 != a3 )
    {
      MinimalProcess = -1073741217;
      goto LABEL_13;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1984) = a3;
  }
  if ( (*(_DWORD *)(a1 + 1976) & 8) == 0 )
  {
    MinimalProcess = SmRegistrationCtxStart(a1 + 2688);
    if ( MinimalProcess < 0 )
      goto LABEL_13;
    *(_DWORD *)(a1 + 1976) |= 8u;
  }
  if ( !*(_QWORD *)(a1 + 2000) )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles(*(_QWORD *)(a1 + 1936)) )
    {
      MinimalProcess = -1073741637;
      goto LABEL_13;
    }
    v16 = *(_QWORD *)(a1 + 1936);
    v17 = *(_QWORD *)(v16 + 112);
    KiStackAttachProcess((_KPROCESS *)v17, 0, (__int64)&v24);
    LOBYTE(v18) = *(_BYTE *)(v17 + 2170);
    MinimalProcess = PsCreateMinimalProcess(
                       v17,
                       (unsigned int)&unk_140C03498,
                       0,
                       v18,
                       0LL,
                       0,
                       16,
                       0LL,
                       *(_QWORD *)(a1 + 1944),
                       v16,
                       (__int64)&Handle);
    KiUnstackDetachProcess(&v24);
    if ( MinimalProcess < 0 )
      goto LABEL_13;
    Object = 0LL;
    MinimalProcess = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( MinimalProcess < 0 )
    {
      ZwClose(Handle);
      goto LABEL_13;
    }
    *(_QWORD *)(a1 + 2000) = Handle;
    *(_QWORD *)(a1 + 2008) = Object;
    PsDereferencePartition(v16);
  }
  v11 = *(_DWORD *)(a1 + 1976);
  if ( (v11 & 2) == 0 )
  {
    v19 = *(_DWORD *)(a1 + 1984);
    *(_QWORD *)(a1 + 1872) = *(_QWORD *)(a1 + 2000);
    MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(a1);
    if ( MinimalProcess < 0
      || (*(_DWORD *)(a1 + 1856) & 0x20) != 0
      && (MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(a1 + 1264, a1, v19), MinimalProcess < 0) )
    {
      v23 = *(_OWORD *)(a1 + 1856);
      SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(a1);
      SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v23);
      SmTerminateStoreProcess(a1);
      goto LABEL_13;
    }
    *(_DWORD *)(a1 + 1976) |= 2u;
    v11 = *(_DWORD *)(a1 + 1976);
  }
  if ( (v11 & 0x10) == 0 )
  {
    *(_DWORD *)(a1 + 1976) ^= (*(_DWORD *)(a1 + 1976) ^ (16
                                                       * MmStoreChargeResidentAvailableForRead(
                                                           *(void ***)(a1 + 1936),
                                                           1LL))) & 0x10;
    if ( (*(_DWORD *)(a1 + 1976) & 0x10) == 0 )
    {
      MinimalProcess = -1073741670;
      goto LABEL_13;
    }
  }
  v12 = *(_DWORD *)(a1 + 1980);
  if ( v12 )
  {
    if ( a2 == v12 )
      goto LABEL_10;
    MinimalProcess = -1073741800;
  }
  else
  {
    v21 = (a2 & 0xFFFF000 | 0x10000300u) >> 8;
    v25[1] = v21 & 0xFFFF0 | 0x100002;
    v25[0] = v21 & 0xFFFF0 | 0x100005;
    MinimalProcess = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 2720), v25, 3u);
    if ( MinimalProcess < 0 )
      goto LABEL_13;
    MinimalProcess = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 2840), &v21, 1u);
    if ( MinimalProcess >= 0 )
    {
      *(_DWORD *)(a1 + 1980) = a2;
LABEL_10:
      v13 = *(_DWORD *)(a1 + 1976);
      if ( (v13 & 0x20) == 0 )
      {
        MinimalProcess = ExpPartitionCreatePool(*(_QWORD *)(*(_QWORD *)(a1 + 1936) + 16LL), 1LL, 16LL, a1 + 2048);
        if ( MinimalProcess < 0 )
          goto LABEL_13;
        *(_DWORD *)(a1 + 1976) |= 0x20u;
        v13 = *(_DWORD *)(a1 + 1976);
      }
      if ( (v13 & 1) == 0 )
      {
        MinimalProcess = MmStoreRegister(
                           *(_QWORD *)(a1 + 1936),
                           v8,
                           v9,
                           *(_QWORD *)(a1 + 2008),
                           (*(_DWORD *)(a1 + 2064) >> 7) & 1);
        if ( MinimalProcess < 0 )
          goto LABEL_13;
        *(_DWORD *)(a1 + 1976) |= 1u;
      }
      MinimalProcess = 0;
      goto LABEL_13;
    }
    SmFpCleanup(a1 + 2720);
    SmFpInitialize(a1 + 2720, a1);
  }
LABEL_13:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  return (unsigned int)MinimalProcess;
}
