/*
 * XREFs of FsRtlCancelNotify @ 0x1402F2B70
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x1402417BC (FsRtlNotifySetCancelRoutine.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x1402951F0 (PsChargeProcessPoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140295600 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlCancelNotify(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rsi
  struct _KTHREAD *v5; // rdi
  struct _KTHREAD **v6; // r14
  _DWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  const void **v11; // r13
  const void *v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rdx
  void *Pool2; // r14
  unsigned int v16; // esi
  const void **v17; // rcx
  _DWORD *v18; // rdx
  unsigned int *v19; // r8
  PVOID v20; // rax
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  _BYTE *v23; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *SubjectContext; // [rsp+48h] [rbp-A0h]
  _QWORD *v27; // [rsp+50h] [rbp-98h]
  _DWORD *v28; // [rsp+58h] [rbp-90h]
  struct _KTHREAD **v29; // [rsp+60h] [rbp-88h]
  unsigned int *v30; // [rsp+80h] [rbp-68h]
  const void **v31; // [rsp+88h] [rbp-60h]
  char *v32; // [rsp+108h] [rbp+20h]

  SubjectContext = 0LL;
  v31 = *(const void ***)(a2 + 56);
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)*v31;
  v32 = (char *)*v31;
  v5 = KeGetCurrentThread();
  v6 = (struct _KTHREAD **)((char *)*v31 + 56);
  v29 = v6;
  if ( v5 != *v6 )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)v4);
    *v6 = v5;
  }
  v7 = v4 + 64;
  ++*((_DWORD *)v4 + 16);
  v8 = a2 + 168;
  v9 = *(_QWORD *)(a2 + 168);
  if ( v9 )
  {
    v10 = *(_QWORD **)(a2 + 176);
    if ( *(_QWORD *)(v9 + 8) != v8 || *v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v11 = v31 + 11;
  v12 = v31[11];
  if ( v12 )
  {
    v27 = v31 + 10;
    if ( !v31[10] )
    {
      if ( (v13 = *(_QWORD *)(a2 + 8)) != 0
        && ((*(_BYTE *)(v13 + 10) & 5) == 0
          ? (v14 = MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000010u))
          : (v14 = *(PVOID *)(v13 + 24)),
            v12 = *v11,
            v14 == *v11)
        || v12 == *(const void **)(a2 + 24) )
      {
        Pool2 = 0LL;
        v16 = 0;
        v17 = (const void **)v31[6];
        v18 = v31 + 13;
        v28 = v31 + 13;
        if ( v17 == v31 + 6 )
        {
          if ( *((_DWORD *)v31 + 24) >= *v18 )
            v16 = *((_DWORD *)v31 + 24);
          goto LABEL_35;
        }
        v19 = (unsigned int *)v17[2];
        v30 = v19;
        if ( v19[2] < *v18 )
        {
LABEL_35:
          if ( v16 )
          {
            if ( !Pool2 )
            {
              v22 = PsChargeProcessPoolQuota((PEPROCESS)v31[15], PagedPool, v16);
              if ( v22 < 0 )
                RtlRaiseStatus(v22);
              Pool2 = (void *)ExAllocatePool2(290LL, v16, 1316115270LL);
              *v27 = Pool2;
            }
            memmove(Pool2, *v11, (unsigned int)*v28);
            *((_DWORD *)v31 + 25) = v16;
            *v11 = Pool2;
            v23 = v31 + 9;
          }
          else
          {
            v23 = v31 + 9;
            *((_WORD *)v31 + 36) |= 2u;
          }
          v4 = v32;
          v6 = v29;
          if ( (*v23 & 2) != 0 )
          {
            *v11 = 0LL;
            *v27 = 0LL;
            *((_DWORD *)v31 + 27) = 0;
            *v28 = 0;
            *((_DWORD *)v31 + 25) = 0;
          }
          goto LABEL_8;
        }
        v20 = (PVOID)*(v17 - 18);
        if ( !v20 )
        {
          v21 = (__int64)*(v17 - 20);
          if ( !v21 )
            goto LABEL_31;
          if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
          {
            Pool2 = *(void **)(v21 + 24);
            goto LABEL_31;
          }
          v20 = MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000010u);
          v19 = v30;
        }
        Pool2 = v20;
LABEL_31:
        v16 = v19[2];
        if ( v16 > *((_DWORD *)v31 + 24) )
          v16 = *((_DWORD *)v31 + 24);
        goto LABEL_35;
      }
    }
  }
LABEL_8:
  *(_DWORD *)(a2 + 48) = -1073741536;
  IofCompleteRequest((PIRP)a2, 1);
  _InterlockedDecrement((volatile signed __int32 *)v31 + 28);
  if ( !*((_DWORD *)v31 + 28) )
  {
    if ( v31[10] )
    {
      PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v31[15], *((unsigned int *)v31 + 25));
      ExFreePoolWithTag((PVOID)v31[10], 0);
    }
    if ( ((_BYTE)v31[9] & 0x40) != 0 || v31[17] )
      SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)v31[3];
    ExFreePoolWithTag(v31, 0);
  }
  if ( (*v7)-- == 1 )
  {
    *v6 = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v4);
  }
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(SubjectContext, 0);
  }
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
