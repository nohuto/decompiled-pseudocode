/*
 * XREFs of VfTargetReplaceIoCallbacks @ 0x1405FEF58
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140A9A468 (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfDifCaptureIoCallbacks @ 0x1402D8A7C (VfDifCaptureIoCallbacks.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall VfTargetReplaceIoCallbacks(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  struct _DRIVER_OBJECT *v2; // rsi
  PDRIVER_EXTENSION DriverExtension; // rdi
  __int64 Pool2; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v6 = 0LL;
  if ( ViTargetInitialized )
  {
    v2 = (struct _DRIVER_OBJECT *)*((_QWORD *)VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v6, a1, 1LL)
                                  + 6);
    if ( v2 )
    {
      DriverExtension = v2->DriverExtension;
      if ( DriverExtension )
      {
        Pool2 = ExAllocatePool2(64LL, 256LL, 1229940310LL);
        *(_QWORD *)&DriverExtension[1].ServiceKeyName.Length = Pool2;
        if ( Pool2 )
        {
          if ( !VfDifCaptureIoCallbacks(v2) )
          {
            ExFreePoolWithTag(*(PVOID *)&DriverExtension[1].ServiceKeyName.Length, 0);
            *(_QWORD *)&DriverExtension[1].ServiceKeyName.Length = 0LL;
            v1 = -1073738634;
          }
        }
        else
        {
          v1 = -1073741801;
        }
      }
    }
  }
  VfAvlCleanupLockContext((__int64)&v6);
  return v1;
}
