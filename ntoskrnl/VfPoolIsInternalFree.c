/*
 * XREFs of VfPoolIsInternalFree @ 0x1405CF77C
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140ABD1C2 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140ADF178 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x140AE138C (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_140CF7DA8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&unk_140CF7E28 )
      return 0LL;
  }
  return 1LL;
}
