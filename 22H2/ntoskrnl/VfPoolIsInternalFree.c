/*
 * XREFs of VfPoolIsInternalFree @ 0x1405D1C2C
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140AC11C2 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140AE3178 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x140AE538C (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_140CF8168;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&unk_140CF81E8 )
      return 0LL;
  }
  return 1LL;
}
