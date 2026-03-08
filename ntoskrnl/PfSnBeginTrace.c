/*
 * XREFs of PfSnBeginTrace @ 0x1407E31A8
 * Callers:
 *     PfSnBeginScenario @ 0x1407E4764 (PfSnBeginScenario.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     PsGetThreadId @ 0x1402DC330 (PsGetThreadId.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PfSnTraceBufferAllocate @ 0x14035AFEC (PfSnTraceBufferAllocate.c)
 *     PfSnActivateTrace @ 0x14035B038 (PfSnActivateTrace.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfSnCleanupTrace @ 0x1407E3630 (PfSnCleanupTrace.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginTrace(_OWORD *a1, int a2, void *a3, struct _KTHREAD *a4, int a5, __int64 *a6)
{
  __int64 v8; // r12
  void *Pool2; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int16 v13; // ax
  __int128 v14; // xmm1
  char *v15; // rax
  int v16; // ecx
  int v17; // eax
  __int64 *v18; // rax
  __int64 **v19; // rcx
  int v20; // ebx

  v8 = a2;
  if ( PfSnNumActiveTraces >= (unsigned int)dword_140C64A98 )
    return (unsigned int)-1073741618;
  if ( !FsRtlpVolumeStartupApplicationsComplete )
    return (unsigned int)-1073741661;
  Pool2 = (void *)ExAllocatePool2(64LL, 600LL, 1414554435LL);
  v11 = (__int64)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset(Pool2, 0, 0x258uLL);
  *(_DWORD *)v11 = 1128485697;
  KeInitializeTimerEx((PKTIMER)(v11 + 136), NotificationTimer);
  *(_QWORD *)(v11 + 128) = 0LL;
  v12 = v11 + 104;
  *(_QWORD *)(v11 + 112) = v11 + 104;
  *(_QWORD *)(v11 + 104) = v11 + 104;
  *(_DWORD *)(v11 + 456) = -1073741779;
  *(_QWORD *)(v11 + 464) = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(v11 + 520) = 0LL;
  *(_QWORD *)(v11 + 528) = 0LL;
  *(_QWORD *)(v11 + 272) = 0LL;
  KeInitializeDpc((PRKDPC)(v11 + 208), (PKDEFERRED_ROUTINE)PfSnTraceTimerRoutine, (PVOID)v11);
  ExInitializePushLock((PEX_RUNDOWN_REF)(v11 + 360));
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 360));
  ObfReferenceObjectWithTag(a3, 0x73576650u);
  *(_QWORD *)(v11 + 352) = a3;
  *(_QWORD *)(v11 + 368) = 0LL;
  *(_QWORD *)(v11 + 384) = PfSnEndTraceWorkerThreadRoutine;
  *(_QWORD *)(v11 + 392) = v11;
  *(_DWORD *)(v11 + 400) = 0;
  v13 = *(_WORD *)(v11 + 486);
  *(_OWORD *)(v11 + 24) = *a1;
  *(_OWORD *)(v11 + 40) = a1[1];
  *(_OWORD *)(v11 + 56) = a1[2];
  v14 = a1[3];
  *(_WORD *)(v11 + 486) = v13 & 0xFFFE | (a5 != 0);
  v15 = (char *)&unk_140C64A78 + 16 * v8;
  *(_DWORD *)(v11 + 88) = v8;
  *(_OWORD *)(v11 + 72) = v14;
  v16 = *(_DWORD *)v15;
  *(_DWORD *)(v11 + 340) = *(_DWORD *)v15;
  *(_QWORD *)(v11 + 200) = *((_QWORD *)v15 + 1);
  if ( !v16 )
  {
    v20 = -1073741811;
LABEL_18:
    PfSnCleanupTrace(v11);
    ExFreePoolWithTag((PVOID)v11, 0);
    return (unsigned int)v20;
  }
  v17 = v16;
  if ( v16 > 0x100000 )
    v17 = 0x100000;
  *(_DWORD *)(v11 + 340) = v17;
  *(_QWORD *)(v11 + 96) = PfSnTraceBufferAllocate();
  if ( !*(_QWORD *)(v11 + 96) )
  {
    v20 = -1073741670;
    goto LABEL_18;
  }
  v18 = *(__int64 **)(v11 + 96);
  v19 = *(__int64 ***)(v11 + 112);
  if ( *v19 != (__int64 *)v12 )
    __fastfail(3u);
  *v18 = v12;
  v18[1] = (__int64)v19;
  *v19 = v18;
  *(_QWORD *)(v11 + 112) = v18;
  *(_QWORD *)(v11 + 424) = -1LL;
  *(_DWORD *)(v11 + 120) = 1;
  *(_QWORD *)(v11 + 416) = -8LL;
  *(_QWORD *)(v11 + 408) = v11 + 416;
  if ( a4 )
  {
    *(_QWORD *)(v11 + 432) = a4;
    *(_QWORD *)(v11 + 440) = PsGetThreadId(a4);
  }
  v20 = PfSnActivateTrace(v11);
  if ( v20 < 0 )
    goto LABEL_18;
  v20 = 0;
  *a6 = v11;
  return (unsigned int)v20;
}
