/*
 * XREFs of VfPoolIsInternalFree @ 0x1405A27CC
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x1409D770C (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x1409E2518 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x1409E348C (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_140CECD28;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&unk_140CECDA8 )
      return 0LL;
  }
  return 1LL;
}
