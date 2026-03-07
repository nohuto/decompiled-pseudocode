__int64 __fastcall WbAllocateSlots(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  signed __int64 *v4; // rdi
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rbp
  signed __int64 v12; // r11
  unsigned int v13; // r10d
  _BYTE *v14; // rcx
  int v15; // eax
  struct _KTHREAD *v16; // rax
  bool v17; // zf
  struct _KTHREAD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbp
  char v21; // r14
  struct _KTHREAD *v22; // rcx

  v4 = (signed __int64 *)(a1 + 1072);
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire(a1 + 1072, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v11, (__int64)v4);
  v12 = 0LL;
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v13 = a3 + 1;
  while ( a2 < v13 )
  {
    v14 = (_BYTE *)(a2 + a1 + 44);
    while ( *v14 != (_BYTE)v12 )
    {
      ++a2;
      ++v14;
      if ( a2 >= v13 )
        goto LABEL_10;
    }
    if ( a2 == -1 )
      goto LABEL_13;
    v15 = sub_140754DBC(a1, a2 + 1, a4 - 1);
    if ( v15 == -1 )
      goto LABEL_13;
    a2 = v15 + 1;
  }
LABEL_10:
  a2 = -1;
LABEL_13:
  if ( _InterlockedCompareExchange64(v4, v12, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v16 = KeGetCurrentThread();
  v17 = v16->SpecialApcDisable++ == -1;
  if ( v17 && ($C71981A45BEB2B45F82C232A7085991E *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  if ( a2 != -1 )
  {
    v18 = KeGetCurrentThread();
    --v18->SpecialApcDisable;
    v19 = KeAbPreAcquire((__int64)v4, 0LL);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v19, (__int64)v4);
    if ( v20 )
      *(_BYTE *)(v20 + 18) = 1;
    if ( (unsigned int)sub_140754DBC(a1, a2, a4) == -1 )
    {
      v5 = *(_QWORD *)(a1 + 32) + (a2 << 6);
      if ( a4 )
        memset((void *)(a1 + a2 + 44LL), 2, a4 - 1);
      *(_BYTE *)(a2 + a4 - 1 + a1 + 44) = 1;
    }
    v21 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    v22 = KeGetCurrentThread();
    v17 = v22->SpecialApcDisable++ == -1;
    if ( v17 && ($C71981A45BEB2B45F82C232A7085991E *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery();
  }
  return v5;
}
