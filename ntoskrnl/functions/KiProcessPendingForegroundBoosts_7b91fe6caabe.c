void __fastcall KiProcessPendingForegroundBoosts(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  unsigned int v5; // esi
  int v6; // edi
  __int64 *v7; // rcx
  bool v8; // di
  struct _KPRCB *CurrentPrcb; // rdi
  char v10; // si
  _QWORD *v11; // rbx
  __int64 *v12; // rax
  unsigned int v13; // edx
  __int64 **v14; // rdx
  __int64 *v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rdi
  int v18; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v19; // [rsp+28h] [rbp-18h] BYREF
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF

  v19 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_140C42198);
  v7 = (__int64 *)qword_140C42188;
  while ( v7 != &qword_140C42188 )
  {
    v12 = v7;
    v7 = (__int64 *)*v7;
    v13 = v6 - *((_DWORD *)v12 - 2);
    if ( v13 < KiForegroundBoostTicks )
    {
      if ( v13 > v5 )
        v5 = v6 - *((_DWORD *)v12 - 2);
    }
    else
    {
      v14 = (__int64 **)v12[1];
      if ( (__int64 *)v7[1] != v12 || *v14 != v12 )
        __fastfail(3u);
      *v14 = v7;
      v7[1] = (__int64)v14;
      *v12 = (__int64)v4;
      v4 = v12;
      v12[1] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v12 - 6, 1u);
    }
  }
  v8 = qword_140C42188 != (_QWORD)&qword_140C42188;
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C42198);
  if ( v8 )
  {
    *((_QWORD *)&v20 + 1) = -1LL;
    KeSetTimer2((__int64)&KiForegroundState, -150000LL * (KiForegroundBoostTicks - v5), 0LL, (__int64)&v20);
  }
  while ( v4 )
  {
    v15 = v4;
    v18 = 0;
    v16 = v4;
    v4 = (__int64 *)*v4;
    v17 = (__int64)(v16 - 110);
    *v15 = 1LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)(v17 + 64) );
    }
    KiApplyForegroundBoostThread(v17, (unsigned __int64)&v19);
    *(_QWORD *)(v17 + 64) = 0LL;
    _InterlockedAdd16((volatile signed __int16 *)(v17 + 868), 0xFFFFu);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v11 = v19;
  if ( v19 )
  {
    v19 = (_QWORD *)*v19;
    do
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (unsigned __int64)(v11 - 27), (__int64)&v19);
      v11 = v19;
      ++v10;
      if ( v19 )
        v19 = (_QWORD *)*v19;
      if ( (v10 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((__int64)&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v11 );
  }
  KiFlushSoftwareInterruptBatch((__int64)&CurrentPrcb->DeferredDispatchInterrupts);
}
