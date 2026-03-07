__int64 __fastcall CmFcManagerRegisterFeatureConfigurationChangeNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  unsigned int v5; // esi
  char *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  signed __int8 v12; // cf
  __int64 v13; // rbp
  _QWORD *v14; // rax
  unsigned __int32 v16; // eax

  v5 = 0;
  if ( byte_140C14052 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 96LL, 1665559875LL);
    if ( !Pool2 )
      goto LABEL_4;
  }
  else
  {
    v16 = _InterlockedIncrement(&dword_140C14054);
    if ( v16 > 3 )
      return (unsigned int)-1073741670;
    Pool2 = (char *)&unk_140C14148 + 96 * v16 - 96;
  }
  CmFcpInitializeChangeSubscription((__int64)Pool2, a2, a3);
LABEL_4:
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((__int64)&stru_140C14130, 0LL);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C14130, 0LL);
  v13 = v11;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(&stru_140C14130, v11, (__int64)&stru_140C14130);
  if ( v13 )
    *(_BYTE *)(v13 + 18) = 1;
  v14 = (_QWORD *)qword_140C14140;
  if ( *(__int64 **)qword_140C14140 != &qword_140C14138 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &qword_140C14138;
  *((_QWORD *)Pool2 + 1) = v14;
  *v14 = Pool2;
  qword_140C14140 = (__int64)Pool2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C14130, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C14130);
  KeAbPostRelease((ULONG_PTR)&stru_140C14130);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( a4 && MiGetPfnLink((__int64)&qword_140C13F18) != *a4 )
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(Pool2 + 16));
  *a5 = Pool2;
  return v5;
}
