/*
 * XREFs of SmKmStoreAdd @ 0x1406BF6EC
 * Callers:
 *     SmProcessCreateRequest @ 0x1406BF384 (SmProcessCreateRequest.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SSHSupportAllocateNonPaged @ 0x1402483BC (SSHSupportAllocateNonPaged.c)
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     SmEtwEnabled @ 0x14028C158 (SmEtwEnabled.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     SmKmEtwLogStoreChange @ 0x14092B1CC (SmKmEtwLogStoreChange.c)
 */

__int64 __fastcall SmKmStoreAdd(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // r13d
  __int64 v5; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  volatile signed __int64 *v9; // rsi
  struct _KTHREAD *v10; // rax
  struct _KTHREAD *v11; // rax
  volatile signed __int64 *v12; // rsi
  __int16 v13; // cx
  int v14; // eax
  ULONGLONG *v15; // rax
  struct _PRIVILEGE_SET *NonPaged; // rax
  struct _PRIVILEGE_SET *v19; // rbp
  unsigned __int64 v20; // r15
  LUID_AND_ATTRIBUTES *Privilege; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v23; // [rsp+20h] [rbp-48h]

  v4 = 0;
  v23 = *(_DWORD **)a3;
  v5 = 0LL;
  do
  {
    if ( !*(_QWORD *)(a1 + 8 * v5) )
    {
      NonPaged = (struct _PRIVILEGE_SET *)SSHSupportAllocateNonPaged(0x500uLL, 0x61536D73u);
      v19 = NonPaged;
      if ( !NonPaged )
        return (unsigned int)-1073741670;
      v20 = (unsigned __int64)&NonPaged[64];
      if ( NonPaged < &NonPaged[64] )
      {
        Privilege = NonPaged->Privilege;
        do
        {
          *(_OWORD *)&Privilege[-1].Luid.HighPart = 0LL;
          *(_OWORD *)&Privilege->Attributes = 0LL;
          Privilege[2].Luid = 0LL;
          ExInitializePushLock((PKSPIN_LOCK)&Privilege->Luid);
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)Privilege);
          *(_QWORD *)&Privilege->Attributes = 0LL;
          Privilege = (LUID_AND_ATTRIBUTES *)((char *)Privilege + 40);
        }
        while ( (unsigned __int64)&Privilege[-1].Luid.HighPart < v20 );
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 416, 0LL);
      if ( !*(_QWORD *)(a1 + 8 * v5) )
      {
        *(_QWORD *)(a1 + 8 * v5) = v19;
        v19 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 416);
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      if ( v19 )
        CmSiFreeMemory(v19);
    }
    v7 = *(_QWORD *)(a1 + 8 * v5);
    v8 = v7 + 1280;
    if ( v7 >= v7 + 1280 )
      goto LABEL_35;
    v9 = (volatile signed __int64 *)(v7 + 16);
    while ( *(_QWORD *)v7 )
    {
LABEL_6:
      v7 += 40LL;
      v9 += 5;
      ++v4;
      if ( v7 >= v8 )
        goto LABEL_9;
    }
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
    if ( *(_QWORD *)v7 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegion();
      goto LABEL_6;
    }
LABEL_9:
    if ( v7 < v8 )
      break;
LABEL_35:
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 0x20 );
  if ( v4 >= 0x400 )
  {
    return (unsigned int)-1073741671;
  }
  else
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = (volatile signed __int64 *)(a1 + 416);
    ExAcquirePushLockExclusiveEx(a1 + 416, 0LL);
    if ( (*v23 & 0x100) == 0 )
      goto LABEL_12;
    if ( *(_DWORD *)(a1 + 432) == -1 )
    {
      *(_DWORD *)(a1 + 432) = v4;
LABEL_12:
      *(_BYTE *)(v7 + 34) &= ~1u;
      *(_BYTE *)(v7 + 34) &= ~2u;
      *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (*v23 >> 18 << 7)) & 0x80;
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(a3 + 16);
      ++*(_DWORD *)(a1 + 424);
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 416);
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      *(_QWORD *)v7 = a2;
      do
      {
        v13 = *(_WORD *)(v7 + 32) ^ (*(_WORD *)(v7 + 32) ^ (*(_WORD *)(v7 + 32) + 1)) & 0x3F;
        *(_WORD *)(v7 + 32) = v13;
        v14 = v4 | ((v13 & 0x3F) << 10);
        *a4 = v14;
      }
      while ( v14 == 66559 );
      v15 = SmEtwEnabled(0);
      if ( v15 )
        SmKmEtwLogStoreChange(v15, *(_QWORD *)v7, SmEventStoreCreate);
      _InterlockedExchange64((volatile __int64 *)(v7 + 8), 0LL);
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7 + 16);
      KeAbPostRelease(v7 + 16);
      KeLeaveCriticalRegion();
      return 0;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 416);
      KeAbPostRelease(a1 + 416);
      KeLeaveCriticalRegion();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7 + 16);
      KeAbPostRelease(v7 + 16);
      KeLeaveCriticalRegion();
      return (unsigned int)-1073740757;
    }
  }
}
