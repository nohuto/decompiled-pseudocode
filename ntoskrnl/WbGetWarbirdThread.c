/*
 * XREFs of WbGetWarbirdThread @ 0x1406AF248
 * Callers:
 *     WbHeapExecuteCall @ 0x1406AF56C (WbHeapExecuteCall.c)
 *     sub_1406AFFB4 @ 0x1406AFFB4 (sub_1406AFFB4.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     sub_1406AF180 @ 0x1406AF180 (sub_1406AF180.c)
 *     sub_1406AF488 @ 0x1406AF488 (sub_1406AF488.c)
 *     sub_140754FC0 @ 0x140754FC0 (sub_140754FC0.c)
 *     sub_14079ADCC @ 0x14079ADCC (sub_14079ADCC.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v4; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  int v9; // esi
  _QWORD *v10; // rcx
  struct _KTHREAD *v11; // rax
  bool v12; // zf
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rsi
  _QWORD *v18; // r14
  char v19; // bp
  struct _KTHREAD *v20; // rax
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)(a1 + 128);
  v7 = 0LL;
  v22 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 128, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v8, (__int64)v4);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v21 = 0LL;
  v9 = sub_1406AF180(a1 + 88, (__int64)CurrentThread, 8u, &v21, 0LL);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)v21;
    if ( v21 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v21 + 8), 1uLL);
      v10 = (_QWORD *)v21;
    }
    v22 = v10;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable++ == -1;
  if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 == -1073741198 )
  {
    v9 = sub_14079ADCC(a1, CurrentThread, &v22);
    if ( v9 < 0 )
    {
LABEL_32:
      v7 = v22;
      goto LABEL_18;
    }
    v14 = KeGetCurrentThread();
    --v14->SpecialApcDisable;
    v15 = KeAbPreAcquire((__int64)v4, 0LL);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v15, (__int64)v4);
    if ( v17 )
      *(_BYTE *)(v17 + 18) = 1;
    v18 = v22;
    v9 = sub_140754FC0((int)a1 + 88, (_DWORD)v22, v16, *v22, 8, -1);
    if ( v9 >= 0 )
      _InterlockedAdd64(v18 + 1, 1uLL);
    v19 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    v20 = KeGetCurrentThread();
    v12 = v20->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v9 < 0 || !a3 )
    goto LABEL_32;
  *a3 = v22;
LABEL_18:
  sub_1406AF488(a1, v7);
  return (unsigned int)v9;
}
