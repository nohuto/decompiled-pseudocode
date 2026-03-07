char ExInitLicenseData()
{
  struct _LIST_ENTRY *Blink; // rdi
  char Flink; // r12
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_Blink; // rbx
  char v5; // al
  struct _KTHREAD *v6; // rax
  char v7; // al
  char result; // al
  struct _KTHREAD *v9; // rax
  int v10; // r15d
  char v11; // r14
  char v12; // cl
  __int64 Flink_low; // rdx
  struct _LIST_ENTRY *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  struct _KTHREAD *v17; // rax
  char v18; // al
  struct _KTHREAD *v19; // rax
  __int64 v20; // rax
  char v21; // si
  int ExpirationDate; // eax
  LARGE_INTEGER v23; // rcx
  bool v24; // sf
  unsigned int v25; // eax
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v27[5]; // [rsp+28h] [rbp-48h] BYREF
  char v28; // [rsp+50h] [rbp-20h]
  int v29; // [rsp+51h] [rbp-1Fh]
  __int16 v30; // [rsp+55h] [rbp-1Bh]
  char v31; // [rsp+57h] [rbp-19h]
  struct _LIST_ENTRY v32; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
  Flink = (char)Blink[2937].Flink;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140B53C00();
  }
  CurrentThread = KeGetCurrentThread();
  p_Blink = (volatile signed __int64 *)&Blink[2927].Blink;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Blink[2927].Blink, 0LL);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  memset(v27, 0, 32);
  v27[4] = 10800LL;
  v28 = 1;
  if ( (_DWORD)InitSafeBootMode || InitIsWinPEMode )
    v28 = 0;
  ExpSetKernelDataProtection((__int64)Blink, (__int64)v27, -1, 1);
  v5 = _InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Blink[2927].Blink, 0LL);
  LODWORD(Blink->Blink) = 0;
  v7 = _InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Blink->Flink )
  {
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Blink[2927].Blink, 0LL);
    v10 = sub_14081A850(Blink);
    if ( v10 == -1073741762 )
      LOBYTE(Blink[2937].Flink) = 1;
    v11 = (char)Blink[2937].Flink;
    v12 = _InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !Flink && v11 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v10 >= 0 && !v11 )
    {
      Flink_low = LODWORD(Blink->Flink[5120].Flink);
      if ( qword_140D53510 )
        ((void (__fastcall *)(struct _LIST_ENTRY *, __int64))qword_140D53510)(Blink, Flink_low);
      else
        SLUpdateLicenseDataInternal(Blink, Flink_low, Blink->Flink);
    }
    v14 = &v32;
    v15 = 16LL;
    do
    {
      v16 = __rdtsc();
      LOBYTE(v14->Flink) = v16;
      v14 = (struct _LIST_ENTRY *)((char *)v14 + 1);
      --v15;
    }
    while ( v15 );
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Blink[2927].Blink, 0LL);
    *(struct _LIST_ENTRY *)((char *)Blink + 46993) = v32;
    v18 = _InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Blink[2927].Blink, 0LL);
    v20 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v20) && Blink->Flink )
      ExFreePoolWithTag(Blink->Flink, 0x69534C53u);
    Blink->Flink = 0LL;
    if ( !Blink[2927].Flink )
    {
      v25 = (unsigned int)Blink[2926].Blink;
      if ( v25 )
      {
        memset(&Blink[1].Blink, 0, 16LL * v25);
        LODWORD(Blink[2926].Blink) = 0;
      }
    }
    v21 = _InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    v23 = Time;
    v24 = ExpirationDate < 0;
    result = MmWriteableSharedUserData;
    if ( v24 )
      v23.QuadPart = 0LL;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 712) = v23;
  }
  return result;
}
