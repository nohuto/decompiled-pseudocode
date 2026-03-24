/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1405E9760
 * Callers:
 *     ObpPreInterceptHandleCreate @ 0x1405E9930 (ObpPreInterceptHandleCreate.c)
 *     ObpPreInterceptHandleDuplicate @ 0x140664AE8 (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ObpCallPostOperationCallbacks @ 0x1408DDD50 (ObpCallPostOperationCallbacks.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  ULONG_PTR v3; // rbp
  _QWORD *v4; // r13
  struct _EX_RUNDOWN_REF *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF **v9; // r12
  struct _KTHREAD *v10; // rax
  struct _EX_RUNDOWN_REF *i; // rbx
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v16; // rax
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+40h] [rbp-38h]

  v3 = a1 + 184;
  v22 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = *v9; i != (struct _EX_RUNDOWN_REF *)v9; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 && ExAcquireRundownProtection(i + 7) )
    {
      ExReleasePushLockEx(v3, 0LL);
      v13 = KeGetCurrentThread();
      v14 = v13->SpecialApcDisable++ == -1;
      if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
        KiCheckForKernelApcDelivery(v12);
      if ( v5 )
      {
        ExReleaseRundownProtection(v5);
        v5 = 0LL;
      }
      if ( i[6].Count )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ExReleaseRundownProtection(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            v24 = 0xC000009AuLL;
            *((_QWORD *)&v23 + 1) = 0LL;
            *(_QWORD *)&v22 = *(_QWORD *)a2;
            *(_QWORD *)&v23 = *(_QWORD *)(a2 + 16);
            *((_QWORD *)&v22 + 1) = *(_QWORD *)(a2 + 8);
            ObpCallPostOperationCallbacks(&v22, a3);
          }
          return 3221225626LL;
        }
        PoolWithTag[2] = i;
        PoolWithTag[3] = 0LL;
        v21 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v21 != a3 )
          __fastfail(3u);
        *PoolWithTag = a3;
        PoolWithTag[1] = v21;
        *v21 = PoolWithTag;
        a3[1] = PoolWithTag;
      }
      Count = (void (__fastcall *)(_QWORD, __int64))i[5].Count;
      if ( Count )
      {
        Count(*(_QWORD *)(i[3].Count + 8), a2);
        if ( i[6].Count )
          v4[3] = *(_QWORD *)(a2 + 24);
        else
          v5 = i + 7;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
      v16 = KeGetCurrentThread();
      --v16->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v3, 0LL);
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  v18 = KeGetCurrentThread();
  v14 = v18->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v17);
  if ( v5 )
    ExReleaseRundownProtection(v5);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
