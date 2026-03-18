/*
 * XREFs of WbRemoveWarbirdProcess @ 0x1407E15B4
 * Callers:
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x1407E2B70 (WbDispatchOperation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406E1BD4 @ 0x1406E1BD4 (sub_1406E1BD4.c)
 *     WbFindWarbirdProcess @ 0x1407E1754 (WbFindWarbirdProcess.c)
 *     sub_1407E1B0C @ 0x1407E1B0C (sub_1407E1B0C.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int WarbirdProcess; // ebx
  struct _KTHREAD *v5; // rax
  bool v6; // zf
  struct _KTHREAD *v8; // rax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbx
  char v12; // di
  struct _KTHREAD *v13; // rax
  volatile signed __int64 *v14; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140C5A6F8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C5A6F8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C5A6F8, 0, v3, (__int64)&qword_140C5A6F8);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  WarbirdProcess = WbFindWarbirdProcess(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C5A6F8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C5A6F8);
  KeAbPostRelease((ULONG_PTR)&qword_140C5A6F8);
  v5 = KeGetCurrentThread();
  v6 = v5->SpecialApcDisable++ == -1;
  if ( v6 && ($CEA84C04E3712D858E5667A507841A2A *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery();
  if ( WarbirdProcess >= 0 )
  {
    v8 = KeGetCurrentThread();
    --v8->SpecialApcDisable;
    v9 = KeAbPreAcquire((__int64)&qword_140C5A6F8, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C5A6F8, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140C5A6F8, v9, (__int64)&qword_140C5A6F8);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    WarbirdProcess = sub_1407E1B0C((unsigned int)&dword_140C5A6D0, a1, 8, -1, (__int64)&v14);
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C5A6F8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C5A6F8);
    KeAbPostRelease((ULONG_PTR)&qword_140C5A6F8);
    v13 = KeGetCurrentThread();
    v6 = v13->SpecialApcDisable++ == -1;
    if ( v6 && ($CEA84C04E3712D858E5667A507841A2A *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery();
    sub_1406E1BD4(v14);
  }
  return (unsigned int)WarbirdProcess;
}
