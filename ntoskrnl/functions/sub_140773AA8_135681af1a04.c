__int64 __fastcall sub_140773AA8(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // edi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 224);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 224, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v6, (__int64)v3);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v14 = 0LL;
  v7 = sub_1406AF180(a1 + 184, a2, 8u, &v14, &v13);
  v8 = 0LL;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v14;
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 >= 0 )
    return (unsigned int)WbFreeMemoryBlockRegion(v8, a2);
  return (unsigned int)v9;
}
