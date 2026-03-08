/*
 * XREFs of ExSaFree @ 0x1402956DC
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x14023A500 (ExCleanupAutoExpandPushLock.c)
 *     ExpCleanupAutoExpandPushLock @ 0x1403C9F18 (ExpCleanupAutoExpandPushLock.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 * Callees:
 *     ExpSaAllocatorFree @ 0x140295774 (ExpSaAllocatorFree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

struct _KTHREAD *__fastcall ExSaFree(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *result; // rax

  v1 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v2, v1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v2 - 2))
                             + 8 * (v1 ^ (unsigned int)(1 << v2))
                             + 8)
                 + 16LL);
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v4);
  result = KeGetCurrentThread();
  if ( result->SpecialApcDisable++ == -1 )
  {
    result = (struct _KTHREAD *)((char *)result + 152);
    if ( *(struct _KTHREAD **)&result->Header.Lock != result )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  }
  return result;
}
