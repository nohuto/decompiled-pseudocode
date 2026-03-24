/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x1409D670C
 * Callers:
 *     VfDriverUnloadImage @ 0x1409C2474 (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x1409C5FE0 (VfFreeMemoryNotification.c)
 *     VfFreePoolNotification @ 0x1409E0074 (VfFreePoolNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140371B24 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14037EBF4 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x1405A259C (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1405A25D4 (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D6804 (ViRemLockDeleteFirstTreeNode.c)
 */

char __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  int IsInternalFree; // eax
  PVOID v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(IsInternalFree) = ViRemLockInitialized;
  v7 = 0LL;
  if ( ViRemLockInitialized )
  {
    LOBYTE(IsInternalFree) = qword_140D4B530;
    if ( qword_140D4B530 )
    {
      IsInternalFree = VfPoolIsInternalFree();
      if ( !IsInternalFree )
      {
        VfAvlInitializeLockContext((__int64)&v7, 1);
        v5 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v7, a1, a2);
        LOBYTE(IsInternalFree) = VfAvlCleanupLockContext((__int64)&v7);
        if ( v5 )
        {
          do
            IsInternalFree = ViRemLockDeleteFirstTreeNode(a1, a2);
          while ( IsInternalFree );
        }
      }
    }
  }
  return IsInternalFree;
}
