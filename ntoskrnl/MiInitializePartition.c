/*
 * XREFs of MiInitializePartition @ 0x140837D40
 * Callers:
 *     MmCreatePartition @ 0x1403A6A3C (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140B3A0B8 (MiCreatePfnDatabase.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeInitializeGate @ 0x1402A4FEC (KeInitializeGate.c)
 *     RtlRandomEx @ 0x1402A6210 (RtlRandomEx.c)
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiInitializePfnListHead @ 0x140300ED8 (MiInitializePfnListHead.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     MiInitializeCommitment @ 0x140392394 (MiInitializeCommitment.c)
 *     MiInitializeCombining @ 0x140393F0C (MiInitializeCombining.c)
 *     MiProtectPageListLocks @ 0x140393F60 (MiProtectPageListLocks.c)
 *     MiInitializeNuma @ 0x140394008 (MiInitializeNuma.c)
 *     MiInitializeLargePageNodeLists @ 0x1408383C8 (MiInitializeLargePageNodeLists.c)
 *     MiInitializeSections @ 0x1408385EC (MiInitializeSections.c)
 */

char __fastcall MiInitializePartition(unsigned __int64 a1, __int16 a2)
{
  __int64 v3; // rbx
  __int64 *v4; // r8
  int v5; // edx
  int v6; // r9d
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // edx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rax
  bool v18; // cf
  __int64 v19; // rdi
  unsigned int v20; // r14d
  ULONG *v21; // rdi
  unsigned int v22; // r8d
  unsigned int v23; // edi
  __int64 i; // r14
  signed int v25; // eax
  __int64 v26; // rdi
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KEVENT *v31; // r14
  __int64 v32; // r15
  __int64 v33; // rcx
  __m128i si128; // xmm0
  struct _KEVENT *v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v41; // rax
  __int64 v42; // rbx
  char v43; // bp
  $C71981A45BEB2B45F82C232A7085991E *v44; // rax

  *(_DWORD *)(a1 + 8) = 305535296;
  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = 16LL;
  if ( (unsigned __int16 *)a1 == MiSystemPartition )
  {
    qword_140C66F80 = 0LL;
    qword_140C66FA8 = (__int64)&qword_140C66FA0;
    qword_140C66FA0 = &qword_140C66FA0;
    qword_140C66FE0 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 16;
  }
  *(_QWORD *)(a1 + 15872) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 104), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 128), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 16112), SynchronizationEvent, 0);
  v4 = (__int64 *)(a1 + 2496);
  v5 = 0;
  v6 = 3 * dword_140C6577C;
  do
  {
    v7 = *v4;
    v8 = 0;
    if ( v6 )
    {
      do
      {
        *(_DWORD *)(v7 + 8) = v5;
        ++v8;
        *(_QWORD *)(v7 + 16) = 0x3FFFFFFFFFLL;
        *(_QWORD *)(v7 + 24) = 0x3FFFFFFFFFLL;
        *(_QWORD *)v7 = 0LL;
        *(_DWORD *)(v7 + 32) = 0;
        v7 += 88LL;
        v6 = 3 * dword_140C6577C;
      }
      while ( v8 < 3 * dword_140C6577C );
    }
    ++v5;
    ++v4;
  }
  while ( v5 <= 1 );
  MiInitializePfnListHead(a1 + 2560, 0);
  MiInitializePfnListHead(a1 + 2688, 1);
  MiInitializePfnListHead(a1 + 2816, 2);
  v10 = (_QWORD *)(a1 + 11520);
  v11 = a1 + 2944;
  do
  {
    MiInitializePfnListHead(v11, v9);
    v17 = 64LL;
    do
    {
      *(v10 - 512) = -1LL;
      *v10++ = -1LL;
      --v17;
    }
    while ( v17 );
    v11 = v12 + 88;
  }
  while ( v13 != 1 );
  *(_QWORD *)(a1 + 6824) = v14;
  *(_QWORD *)(a1 + 6832) = v15;
  *(_QWORD *)(a1 + 6840) = v16;
  MiInitializeLargePageNodeLists(a1);
  v18 = KeNumberNodes != 0;
  v19 = *(_QWORD *)(a1 + 16);
  v20 = 0;
  *(_QWORD *)(a1 + 16096) = a1 + 16088;
  *(_QWORD *)(a1 + 16088) = a1 + 16088;
  if ( v18 )
  {
    v21 = (ULONG *)(v19 + 22848);
    do
    {
      *v21 = RtlRandomEx(&Seed);
      ++v20;
      v21 += 6352;
    }
    while ( v20 < (unsigned __int16)KeNumberNodes );
  }
  v22 = dword_140C6577C;
  v23 = 0;
  for ( i = *(_QWORD *)(a1 + 6808); v23 < 2 * dword_140C6577C; ++v23 )
  {
    InitializeSListHead((PSLIST_HEADER)(i + 16LL * v23));
    v22 = dword_140C6577C;
  }
  v25 = (unsigned int)(*(_QWORD *)(a1 + 17040) / 0x64uLL) / v22;
  if ( v25 < 4 )
  {
    v25 = 4;
  }
  else if ( (unsigned int)v25 > 0x10 )
  {
    v25 = 16;
  }
  *(_DWORD *)(a1 + 16512) = v25;
  if ( (unsigned __int16 *)a1 == MiSystemPartition )
    MiInitializePfnListHead((__int64)&qword_140C65308, 5);
  KeInitializeEvent((PRKEVENT)(a1 + 16488), NotificationEvent, 0);
  v26 = 3LL;
  MiInitializePfnListHead(a1 + 17600, 3);
  MiInitializePfnListHead(a1 + 17728, 4);
  MiInitializePfnListHead(a1 + 3648, 3);
  MiInitializePfnListHead(a1 + 3776, v27);
  v28 = a1 + 3904;
  do
  {
    MiInitializePfnListHead(v28, 3);
    v28 = v29 + 88;
  }
  while ( v30 != 1 );
  v31 = (struct _KEVENT *)(a1 + 7032);
  v32 = a1 + 5312;
  do
  {
    MiInitializePfnListHead(v32, 3);
    KeInitializeEvent(v31, SynchronizationEvent, 0);
    v32 += 88LL;
    ++v31;
    --v3;
  }
  while ( v3 );
  MiInitializePfnListHead(a1 + 6720, 5);
  *(_QWORD *)(a1 + 6864) = v33;
  *(_QWORD *)(a1 + 6848) = a1 + 17600;
  *(_QWORD *)(a1 + 6856) = a1 + 17728;
  *(_QWORD *)(a1 + 16248) = -1LL;
  MiProtectPageListLocks(a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm_fffffffefffffffefffffffefffffffe);
  v35 = (struct _KEVENT *)(a1 + 15880);
  *(__m128i *)(a1 + 15744) = si128;
  *(__m128i *)(a1 + 15760) = si128;
  do
  {
    KeInitializeEvent(v35, NotificationEvent, 1u);
    v35 = (struct _KEVENT *)((char *)v35 + 32);
    --v26;
  }
  while ( v26 );
  v36 = (_QWORD *)(a1 + 2144);
  *(_QWORD *)(a1 + 216) = 0LL;
  v37 = 9LL;
  do
  {
    *v36 = -1LL;
    v36 += 4;
    --v37;
  }
  while ( v37 );
  KeInitializeEvent((PRKEVENT)(a1 + 232), NotificationEvent, 0);
  memset64((void *)(a1 + 272), a1 + 232, 0xBuLL);
  *(_QWORD *)(a1 + 16936) = a1 + 16928;
  *(_QWORD *)(a1 + 16928) = a1 + 16928;
  KeInitializeEvent((PRKEVENT)(a1 + 832), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 776), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 800), NotificationEvent, 0);
  *(_DWORD *)(a1 + 760) = 18;
  *(_QWORD *)(a1 + 992) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 992));
  _InterlockedExchange64((volatile __int64 *)(a1 + 992), 1LL);
  KeInitializeEvent((PRKEVENT)(a1 + 736), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 920), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1048), NotificationEvent, 0);
  KeInitializeGate(a1 + 688, 0);
  *(_QWORD *)(a1 + 680) = a1 + 672;
  *(_QWORD *)(a1 + 672) = a1 + 672;
  KeInitializeEvent((PRKEVENT)(a1 + 960), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 952) = a1 + 944;
  *(_QWORD *)(a1 + 944) = a1 + 944;
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
    MiInitializeCommitment(a1);
  InitializeSListHead((PSLIST_HEADER)(a1 + 464));
  if ( (unsigned __int16 *)a1 == MiSystemPartition )
  {
    *(_QWORD *)(a1 + 16136) = qword_140D1D210;
    v38 = qword_140D1D210 << 8;
    *(_QWORD *)(a1 + 16136) = qword_140D1D210 << 8;
    *(_QWORD *)(a1 + 16144) = qword_140D1D218;
    v39 = qword_140D1D218 << 8;
    *(_QWORD *)(a1 + 16144) = qword_140D1D218 << 8;
    if ( v39 < v38 )
    {
      if ( v39 )
        v39 = v38;
      *(_QWORD *)(a1 + 16144) = v39;
    }
  }
  MiInitializeNuma(a1);
  *(_QWORD *)(a1 + 1168) = 0LL;
  *(_QWORD *)(a1 + 1144) = MiContractWsSwapPageFileWorker;
  *(_QWORD *)(a1 + 1152) = a1;
  *(_QWORD *)(a1 + 1128) = 0LL;
  *(_DWORD *)(a1 + 1188) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 1240), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1312), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1264), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1296));
  MiInitializeSections(a1);
  MiInitializeCombining(a1, (_QWORD *)(a1 + 16520));
  *(_QWORD *)(a1 + 1416) = 1LL;
  *(_QWORD *)(a1 + 16952) = a1 + 16944;
  *(_QWORD *)(a1 + 16944) = a1 + 16944;
  *(_QWORD *)(a1 + 16968) = a1 + 16960;
  *(_QWORD *)(a1 + 16960) = a1 + 16960;
  *(_QWORD *)(a1 + 1424) = 1LL;
  *(_QWORD *)(a1 + 1432) = 1LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v41 = KeAbPreAcquire((__int64)&qword_140C67008, 0LL);
  v18 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67008, 0LL);
  v42 = v41;
  if ( v18 )
    ExfAcquirePushLockExclusiveEx(&qword_140C67008, v41, (__int64)&qword_140C67008);
  if ( v42 )
    *(_BYTE *)(v42 + 18) = 1;
  *(_DWORD *)(a1 + 4) |= 2u;
  v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67008, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v43 & 2) != 0 && (v43 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67008);
  LOBYTE(v44) = KeAbPostRelease((ULONG_PTR)&qword_140C67008);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v44 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v44->ApcState.ApcListHead[0].Flink != v44 )
      LOBYTE(v44) = KiCheckForKernelApcDelivery();
  }
  return (char)v44;
}
