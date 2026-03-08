/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1406DBEC0
 * Callers:
 *     ObpPreInterceptHandleCreate @ 0x14075F948 (ObpPreInterceptHandleCreate.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14077DBA0 (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObpCallPostOperationCallbacks @ 0x1408A0D82 (ObpCallPostOperationCallbacks.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rbp
  struct _EX_RUNDOWN_REF **v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // r13
  struct _EX_RUNDOWN_REF *v9; // rdi
  struct _KTHREAD *v10; // rax
  struct _EX_RUNDOWN_REF *i; // rbx
  struct _KTHREAD *v12; // rax
  bool v13; // zf
  void (__fastcall *Count)(_QWORD, __int64); // rax
  struct _KTHREAD *v15; // rax
  struct _KTHREAD *v16; // rax
  _QWORD *Pool2; // rax
  _QWORD *v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+30h] [rbp-48h]
  __int128 v22; // [rsp+40h] [rbp-38h]

  v3 = (__int64 *)(a1 + 184);
  v20 = 0LL;
  v5 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  v21 = 0LL;
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)v3, 0LL);
  for ( i = *v5; i != (struct _EX_RUNDOWN_REF *)v5; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 && ExAcquireRundownProtection_0(i + 7) )
    {
      ExReleasePushLockEx(v3, 0LL);
      v12 = KeGetCurrentThread();
      v13 = v12->SpecialApcDisable++ == -1;
      if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
        KiCheckForKernelApcDelivery();
      if ( v9 )
      {
        ExReleaseRundownProtection_0(v9);
        v9 = 0LL;
      }
      if ( i[6].Count )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1816552015LL);
        v8 = Pool2;
        if ( !Pool2 )
        {
          ExReleaseRundownProtection_0(i + 7);
          if ( (_QWORD *)*a3 == a3 )
          {
            KeLeaveCriticalRegion();
            ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
          }
          else
          {
            *(_QWORD *)&v20 = *(_QWORD *)a2;
            v21 = *(unsigned __int64 *)(a2 + 16);
            *((_QWORD *)&v20 + 1) = *(_QWORD *)(a2 + 8);
            v22 = 0xC000009AuLL;
            ObpCallPostOperationCallbacks(&v20, a3);
          }
          return 3221225626LL;
        }
        Pool2[2] = i;
        Pool2[3] = 0LL;
        v19 = (_QWORD *)a3[1];
        if ( (_QWORD *)*v19 != a3 )
          __fastfail(3u);
        *Pool2 = a3;
        Pool2[1] = v19;
        *v19 = Pool2;
        a3[1] = Pool2;
      }
      Count = (void (__fastcall *)(_QWORD, __int64))i[5].Count;
      if ( Count )
      {
        Count(*(_QWORD *)(i[3].Count + 8), a2);
        if ( i[6].Count )
          v8[3] = *(_QWORD *)(a2 + 24);
        else
          v9 = i + 7;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
      v15 = KeGetCurrentThread();
      --v15->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v3, 0LL);
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  v16 = KeGetCurrentThread();
  v13 = v16->SpecialApcDisable++ == -1;
  if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 )
    ExReleaseRundownProtection_0(v9);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
