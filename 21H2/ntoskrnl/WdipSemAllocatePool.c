/*
 * XREFs of WdipSemAllocatePool @ 0x1407C05A8
 * Callers:
 *     WdipSemFastAllocate @ 0x140788B80 (WdipSemFastAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53D20, 0LL);
  v4 = dword_140C53D10;
  if ( v2 > dword_140C53D10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
    if ( !PoolWithTag )
      goto LABEL_3;
    v10 = (_QWORD *)qword_140C53D08;
    if ( *(PVOID **)qword_140C53D08 != &WdipSemPool )
      __fastfail(3u);
    PoolWithTag[1] = qword_140C53D08;
    *PoolWithTag = &WdipSemPool;
    *v10 = PoolWithTag;
    v4 = 4080;
    qword_140C53D08 = (__int64)PoolWithTag;
    qword_140C53D18 = (__int64)(PoolWithTag + 2);
  }
  v3 = qword_140C53D18;
  qword_140C53D18 += v2;
  dword_140C53D10 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((ULONG_PTR)&qword_140C53D20, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v3;
}
