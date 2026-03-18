/*
 * XREFs of WbGetWarbirdProcess @ 0x140763B10
 * Callers:
 *     WbDispatchOperation @ 0x140763928 (WbDispatchOperation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     sub_140763D30 @ 0x140763D30 (sub_140763D30.c)
 *     sub_140763D68 @ 0x140763D68 (sub_140763D68.c)
 *     sub_140764214 @ 0x140764214 (sub_140764214.c)
 *     WbCreateWarbirdProcess @ 0x1407E7C1C (WbCreateWarbirdProcess.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  struct _KTHREAD *v13; // rax
  __int64 v14; // rax
  int v15; // r8d
  signed __int8 v16; // cf
  __int64 v17; // rdi
  _QWORD *v18; // rsi
  char v19; // bp
  struct _KTHREAD *v20; // rax
  _QWORD *v21; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((__int64)&qword_140C70B28, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C70B28, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C70B28, 0LL, v8, (__int64)&qword_140C70B28);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = sub_140763D68(a1, &v21);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C70B28, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C70B28);
  KeAbPostRelease((ULONG_PTR)&qword_140C70B28);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_29;
    v9 = WbCreateWarbirdProcess(a1, &v21);
    if ( v9 < 0 )
      goto LABEL_29;
    v13 = KeGetCurrentThread();
    --v13->SpecialApcDisable;
    v14 = KeAbPreAcquire((__int64)&qword_140C70B28, 0LL);
    v16 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C70B28, 0LL);
    v17 = v14;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx(&qword_140C70B28, v14, (__int64)&qword_140C70B28);
    if ( v17 )
      *(_BYTE *)(v17 + 18) = 1;
    v18 = v21;
    v9 = sub_140764214((unsigned int)&dword_140C70B00, (_DWORD)v21, v15, *v21, 8, -1);
    if ( v9 >= 0 )
      _InterlockedAdd64(v18 + 29, 1uLL);
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C70B28, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C70B28);
    KeAbPostRelease((ULONG_PTR)&qword_140C70B28);
    v20 = KeGetCurrentThread();
    v11 = v20->SpecialApcDisable++ == -1;
    if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v9 < 0 || !a3 )
  {
LABEL_29:
    v6 = v21;
    goto LABEL_14;
  }
  *a3 = v21;
LABEL_14:
  sub_140763D30(v6);
  return (unsigned int)v9;
}
