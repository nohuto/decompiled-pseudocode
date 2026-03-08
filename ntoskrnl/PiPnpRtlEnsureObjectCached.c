/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x140957214
 * Callers:
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406CBBDC (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406CEB28 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, __int64 a2)
{
  int Object; // eax
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rcx
  struct _KTHREAD *v8; // rax
  int v9; // ebx
  char *v11; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v11 = 0LL;
  Object = PiDmGetObject(1LL, a2, &BugCheckParameter2);
  v4 = Object;
  if ( Object < 0 )
  {
    if ( Object == -1073741772 )
    {
      v4 = PiDmAddCacheReferenceForObject(1u, a2, (volatile signed __int32 **)&BugCheckParameter2);
      if ( v4 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v6 = BugCheckParameter2;
        v7 = BugCheckParameter2;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v7, 0LL);
        *(_DWORD *)(v6 + 32) |= 1u;
        ExReleasePushLockEx((__int64 *)v6, 0LL);
        KeLeaveCriticalRegion();
        if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) < 0 )
          goto LABEL_11;
        v8 = KeGetCurrentThread();
        --v8->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        v9 = PiPnpRtlObjectEventCreate(a2, 1u, (__int64)P, &v11);
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegion();
        if ( v9 >= 0 && v11 )
          *((_DWORD *)v11 + 1) |= 1u;
        PiPnpRtlEndOperation((PVOID **)P);
      }
    }
  }
  else
  {
    v4 = 0;
  }
  v6 = BugCheckParameter2;
LABEL_11:
  if ( v6 )
    PiDmObjectRelease((unsigned int *)v6);
  return (unsigned int)v4;
}
