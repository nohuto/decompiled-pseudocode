/*
 * XREFs of EtwpCoverageSamplerSetBloomFilter @ 0x1409F042C
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiMapViewInSystemSpace @ 0x1406A55B8 (MiMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpCoverageSamplerSetBloomFilter(ULONG_PTR BugCheckParameter2, __int64 a2, KPROCESSOR_MODE a3)
{
  PVOID v3; // r14
  int v6; // ebx
  void *v7; // r10
  unsigned int v8; // ecx
  NTSTATUS v9; // eax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r15d
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v14; // rcx
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+30h] BYREF
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  BugCheckParameter1 = 0LL;
  v3 = 0LL;
  if ( *(_DWORD *)(a2 + 12) != *(_DWORD *)(BugCheckParameter2 + 28) )
    return (unsigned int)-1073741811;
  v7 = *(void **)a2;
  v8 = *(_DWORD *)(a2 + 8);
  if ( !*(_QWORD *)a2 )
  {
    if ( !v8 && !*(_DWORD *)(a2 + 16) )
    {
      v12 = 0;
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  if ( !v8 || ((v8 - 1) & v8) != 0 || v8 > 0x8000000 || (unsigned int)(*(_DWORD *)(a2 + 16) - 1) > 9 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(v7, 4u, MmSectionObjectType, a3, &Object, 0LL);
  v3 = Object;
  v6 = v9;
  if ( v9 >= 0 )
  {
    v10 = *(unsigned int *)(a2 + 8);
    v17 = 0LL;
    v20 = v10;
    v6 = MiMapViewInSystemSpace((__int64)Object, &BugCheckParameter1, &v20, &v17, 0LL, 0LL);
    if ( v6 < 0 )
      goto LABEL_19;
    v11 = *(unsigned int *)(a2 + 8);
    if ( v20 == v11 )
    {
      v12 = 8 * v11 - 1;
LABEL_15:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v14 = *(_QWORD *)(BugCheckParameter2 + 1704);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      *(_QWORD *)(BugCheckParameter2 + 1704) = BugCheckParameter1;
      *(_DWORD *)(BugCheckParameter2 + 1712) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(BugCheckParameter2 + 1716) = v12;
      v15 = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1720) = v15;
      BugCheckParameter1 = v14;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v6 = 0;
      goto LABEL_19;
    }
LABEL_18:
    v6 = -1073741811;
LABEL_19:
    if ( BugCheckParameter1 )
      MiRemoveFromSystemSpace(BugCheckParameter1, 1);
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v6;
}
