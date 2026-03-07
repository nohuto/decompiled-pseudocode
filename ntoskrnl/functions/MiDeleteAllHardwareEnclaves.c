char MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rbx
  __int64 v4; // rsi
  _KPROCESS *v5; // r14
  unsigned __int64 v6; // rbp
  bool v7; // zf
  __int64 v8; // rax
  void *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  $C71981A45BEB2B45F82C232A7085991E *v12; // rax
  int v14; // [rsp+20h] [rbp-58h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v15; // [rsp+28h] [rbp-50h] BYREF

  memset(&v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease(&stru_140C69548);
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140C69540, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69540, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140C69540, v1, (__int64)&qword_140C69540);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  while ( 1 )
  {
    v4 = qword_140C69530;
    if ( (__int64 *)qword_140C69530 == &qword_140C69530 )
      break;
    v5 = *(_KPROCESS **)(qword_140C69530 - 8);
    ObfReferenceObject(v5);
    v6 = (*(unsigned int *)(v4 - 96) | ((unsigned __int64)*(unsigned __int8 *)(v4 - 88) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C69540);
    KeAbPostRelease((ULONG_PTR)&qword_140C69540);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KiStackAttachProcess(v5, 0, (__int64)&v15);
    v8 = MiObtainReferencedVadEx(v6, 0, &v14);
    v9 = (void *)v8;
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 48) & 0x6200000) == 0x4200000 && (*(_DWORD *)(v8 + 64) & 1) != 0 )
        MiDeleteEnclavePages(v5, v8);
      MiUnlockAndDereferenceVad(v9);
    }
    KiUnstackDetachProcess(&v15);
    ObfDereferenceObject(v5);
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((__int64)&qword_140C69540, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69540, 0LL);
    v11 = v10;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&qword_140C69540, v10, (__int64)&qword_140C69540);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C69540);
  LOBYTE(v12) = KeAbPostRelease((ULONG_PTR)&qword_140C69540);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    v12 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery();
  }
  if ( qword_140C69510 )
    LOBYTE(v12) = KeRemoveEnclavePage();
  return (char)v12;
}
