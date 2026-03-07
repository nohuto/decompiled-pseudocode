char __fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rsi
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  PEPROCESS v9; // rdi
  __int64 v10; // rax
  signed __int8 v11; // cf
  __int64 v12; // rbx
  $C71981A45BEB2B45F82C232A7085991E *v13; // rax
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+20h] [rbp-138h] BYREF
  int v17[48]; // [rsp+50h] [rbp-108h] BYREF

  memset(&v16, 0, sizeof(v16));
  memset(v17, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v17, 0, 20);
  MiInsertTbFlushEntry((__int64)v17, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v9 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v16);
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire((__int64)&qword_140C65660, 0LL);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65660, 0LL);
  v12 = v10;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&qword_140C65660, v10, (__int64)&qword_140C65660);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList(v17);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65660, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65660);
  LOBYTE(v13) = KeAbPostRelease((ULONG_PTR)&qword_140C65660);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v13 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v13->ApcState.ApcListHead[0].Flink != v13 )
      LOBYTE(v13) = KiCheckForKernelApcDelivery();
  }
  if ( Process != v9 )
    LOBYTE(v13) = KiUnstackDetachProcess(&v16);
  return (char)v13;
}
