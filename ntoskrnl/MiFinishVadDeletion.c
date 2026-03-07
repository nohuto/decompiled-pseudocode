void __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v5; // r14
  unsigned int v6; // eax
  BOOL v8; // r10d
  _KPROCESS *Process; // rbx
  int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  unsigned int v14; // ecx
  volatile signed __int64 *v15; // rbp
  bool v16; // zf
  __int64 VadWakeList; // rax
  unsigned int v18; // ecx
  int v19; // eax
  struct _KTHREAD *v20; // rbp
  int v21; // r13d
  _QWORD *v22; // rdi
  struct _KTHREAD *v23; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = P[12];
  v23 = CurrentThread;
  v8 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( (v6 & 4) != 0 )
  {
    v10 = 1;
    if ( (v6 & 0x200000) == 0 )
    {
      v11 = P[13];
      LODWORD(v11) = v11 & 0x7FFFFFFF;
      v8 = (v11 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFDLL;
    }
  }
  else
  {
    v10 = 0;
  }
  if ( a3 <= Process[1].ActiveProcessors.StaticBitmap[5] && (a4 & 1) == 0 )
    Process[1].Affinity.StaticBitmap[1] += a2 - a3 - 1;
  v12 = P[12];
  v13 = Process[1].ActiveProcessors.StaticBitmap[28];
  if ( (v12 & 0x200000) == 0 && (v12 & 0x70) == 0x20 && (v12 & 0x400000) != 0 )
    --*(_QWORD *)(v13 + 368);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 280));
    v14 = P[12];
    if ( MiVadPageSizes[(v14 >> 19) & 3] == 16 )
    {
      if ( (v14 & 0x200000) != 0 )
        --*(_QWORD *)(v13 + 408);
      else
        --*(_QWORD *)(v13 + 416);
    }
    MiReturnVadQuota(P, Process, v8);
    MiRemoveVadCharges(P, Process);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v15 = (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[7];
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[7],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v10 )
  {
    VadWakeList = MiGetVadWakeList(P, 1LL);
    *((_QWORD *)P + 2) = -1LL;
    v5 = (_QWORD *)VadWakeList;
    if ( VadWakeList )
      --CurrentThread->KernelApcDisable;
    v18 = P[12];
    if ( (v18 & 0x200000) == 0 && (v18 & 0x70) == 0x20 && (v18 & 0x1800000) != 0 )
      MiDeleteVadHotPatchState(P);
  }
  v19 = MiDereferenceVad(P);
  v20 = KeGetCurrentThread();
  v21 = v19;
  LOBYTE(v20[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
  KeAbPostRelease((ULONG_PTR)(P + 10));
  v16 = v20->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery();
  if ( v21 )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
  {
    do
    {
      v22 = (_QWORD *)*v5;
      KeSignalGate(v5 + 1, 1LL);
      v5 = v22;
    }
    while ( v22 );
    KeLeaveCriticalRegionThread(v23);
  }
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 280), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v13 + 304), 0, 0);
  }
}
