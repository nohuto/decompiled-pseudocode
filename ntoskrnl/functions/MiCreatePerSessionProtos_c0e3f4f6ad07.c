__int64 __fastcall MiCreatePerSessionProtos(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rdi
  bool v10; // zf
  __int64 *SessionProtosInSubsection; // rax
  int v13; // ecx
  int PerSessionProtos; // r12d
  __int64 v15; // r8
  __int64 *v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(*a1 + 40LL);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)v5, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = (__int64)(a1 + 16);
  v9 = (__int64)(a1 + 16);
  if ( a1 == (_QWORD *)-128LL )
  {
LABEL_9:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((ULONG_PTR)v5);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  while ( (*(_BYTE *)(v9 + 34) & 2) == 0 )
  {
LABEL_8:
    v9 = *(_QWORD *)(v9 + 16);
    if ( !v9 )
      goto LABEL_9;
  }
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(v9, a2);
  v16 = SessionProtosInSubsection;
  if ( SessionProtosInSubsection )
  {
    ++*((_DWORD *)SessionProtosInSubsection + 20);
    goto LABEL_8;
  }
  PerSessionProtos = MiAllocatePerSessionProtos(v13, 0, 0, 0, (__int64)&v16);
  if ( PerSessionProtos >= 0 )
  {
    v15 = (__int64)v16;
    *((_DWORD *)v16 + 16) = a2;
    MiUpdatePerSessionProto((__int64)a1, v9, v15, 1);
    goto LABEL_8;
  }
  v17 = 0LL;
  while ( v8 != v9 )
  {
    MiDereferenceSubsectionProtos(v8, a2, &v17);
    v8 = *(_QWORD *)(v8 + 16);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  MiFreeSubsectionProtos(&v17);
  return (unsigned int)PerSessionProtos;
}
