__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // rdi
  __int64 PteAddress; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rsi
  _QWORD *v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned int *v21; // rcx
  int v22; // edi
  bool v23; // zf
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2 + a1;
  if ( v3 <= a1 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
  PteAddress = MiGetPteAddress((v3 - 1) | 0xFFF);
  v7 = MiGetPteAddress(v5);
  --CurrentThread->SpecialApcDisable;
  v8 = ((PteAddress - v7) >> 3) + 1;
  v9 = KeAbPreAcquire((__int64)&qword_140C681C0, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C681C0, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_140C681C0, v9, (__int64)&qword_140C681C0);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = P;
  while ( v12 )
  {
    v13 = v12[11] & 0xFFFFFFFFFFFFF000uLL;
    if ( v5 >= v13 + v12[4] )
    {
      v12 = (_QWORD *)v12[1];
    }
    else
    {
      if ( v5 >= v13 )
        break;
      v12 = (_QWORD *)*v12;
    }
  }
  if ( !v12 )
    KeBugCheckEx(0xD7u, v5, 2uLL, 0LL, 0LL);
  v14 = v12[6];
  if ( *(_QWORD *)(*(_QWORD *)v14 + 64LL) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C681C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C681C0);
    KeAbPostRelease((ULONG_PTR)&qword_140C681C0);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225505LL;
  }
  v15 = (unsigned int *)(*(_QWORD *)v14 + 128LL);
  v26 = v12[3] + ((v5 - (v12[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v16 = MiLocatePagefileSubsection(v15, &v26);
  v17 = v16;
  if ( !v16 )
  {
LABEL_24:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C681C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C681C0);
    KeAbPostRelease((ULONG_PTR)&qword_140C681C0);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225712LL;
  }
  v18 = v8 + v26;
  v19 = *((_QWORD *)v16 + 1) + 8 * v26;
  v20 = v16[11];
  v21 = v17;
  while ( v18 > v20 )
  {
    v25 = v21[11];
    v21 = (unsigned int *)*((_QWORD *)v21 + 2);
    v18 -= v25;
    if ( !v21 )
      goto LABEL_24;
    v20 = v21[11];
  }
  v22 = MiChargeSegmentCommit(v17, v19, v8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C681C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C681C0);
  KeAbPostRelease((ULONG_PTR)&qword_140C681C0);
  v23 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v22 == 0 ? 0xC000012D : 0;
}
