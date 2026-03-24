/*
 * XREFs of VfPoolIsInternalFree @ 0x1405A24DC
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x1409D671C (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x1409E1528 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x1409E249C (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_140CECCE8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&unk_140CECD68 )
      return 0LL;
  }
  return 1LL;
}
