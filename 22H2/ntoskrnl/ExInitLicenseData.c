/*
 * XREFs of ExInitLicenseData @ 0x1407AB138
 * Callers:
 *     sub_1405B2D88 @ 0x1405B2D88 (sub_1405B2D88.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     PsIsHostSilo @ 0x1402D5230 (PsIsHostSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     ClipInitHandles @ 0x1403B7B20 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExpSetKernelDataProtection @ 0x140665A90 (ExpSetKernelDataProtection.c)
 *     ExGetExpirationDate @ 0x1407AAC50 (ExGetExpirationDate.c)
 *     sub_1407ABC58 @ 0x1407ABC58 (sub_1407ABC58.c)
 *     ntoskrnl_24 @ 0x14094D630 (ntoskrnl_24.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E2E0 (SLUpdateLicenseDataInternal.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     sub_140A5B300 @ 0x140A5B300 (sub_140A5B300.c)
 */

void __fastcall ExInitLicenseData(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  char v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // rdi
  struct _KTHREAD *v9; // rax
  struct _KTHREAD *v10; // rax
  int v11; // r15d
  char v12; // r14
  __int64 v13; // rdx
  __int128 *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  struct _KTHREAD *v17; // rax
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int ExpirationDate; // ecx
  LARGE_INTEGER v23; // rax
  unsigned int v24; // eax
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v26[5]; // [rsp+28h] [rbp-48h] BYREF
  char v27; // [rsp+50h] [rbp-20h]
  int v28; // [rsp+51h] [rbp-1Fh]
  __int16 v29; // [rsp+55h] [rbp-1Bh]
  char v30; // [rsp+57h] [rbp-19h]
  __int128 v31; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  v2 = (_QWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 113);
  v3 = *((_BYTE *)v2 + 46992);
  CurrentServerSilo = PsGetCurrentServerSilo(v5, v4);
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140A5B300();
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = v2 + 5855;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  memset(v26, 0, 32);
  v26[4] = 10800LL;
  v27 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v27 = 0;
  ExpSetKernelDataProtection((__int64)v2, (__int64)v26, -1, 1);
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2 + 5855);
  KeAbPostRelease((ULONG_PTR)(v2 + 5855));
  KeLeaveCriticalRegion();
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
  *((_DWORD *)v2 + 2) = 0;
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2 + 5855);
  KeAbPostRelease((ULONG_PTR)(v2 + 5855));
  KeLeaveCriticalRegion();
  if ( *v2 )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
    v11 = sub_1407ABC58(v2);
    if ( v11 == -1073741762 )
    {
      *((_BYTE *)v2 + 46992) = 1;
      v12 = 1;
    }
    else
    {
      v12 = *((_BYTE *)v2 + 46992);
    }
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 + 5855);
    KeAbPostRelease((ULONG_PTR)(v2 + 5855));
    KeLeaveCriticalRegion();
    if ( !v3 && v12 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v11 >= 0 && !v12 )
    {
      v13 = *(unsigned int *)(*v2 + 81920LL);
      if ( qword_140D2D500 )
        ((void (__fastcall *)(_QWORD *, __int64))qword_140D2D500)(v2, v13);
      else
        SLUpdateLicenseDataInternal(v2, v13, *v2);
    }
    v14 = &v31;
    v15 = 16LL;
    do
    {
      v16 = __rdtsc();
      *(_BYTE *)v14 = v16;
      v14 = (__int128 *)((char *)v14 + 1);
      --v15;
    }
    while ( v15 );
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
    *(_OWORD *)((char *)v2 + 46993) = v31;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 + 5855);
    KeAbPostRelease((ULONG_PTR)(v2 + 5855));
    KeLeaveCriticalRegion();
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 5855), 0LL);
    v21 = PsGetCurrentServerSilo(v20, v19);
    if ( !PsIsHostSilo(v21) && *v2 )
      ExFreePoolWithTag((PVOID)*v2, 0x69534C53u);
    *v2 = 0LL;
    if ( !v2[5854] )
    {
      v24 = *((_DWORD *)v2 + 11706);
      if ( v24 )
      {
        memset(v2 + 3, 0, 16LL * v24);
        *((_DWORD *)v2 + 11706) = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 + 5855);
    KeAbPostRelease((ULONG_PTR)(v2 + 5855));
    KeLeaveCriticalRegion();
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    v23 = Time;
    if ( ExpirationDate < 0 )
      v23.QuadPart = 0LL;
    MEMORY[0xFFFFF780000002C8] = v23.QuadPart;
  }
}
