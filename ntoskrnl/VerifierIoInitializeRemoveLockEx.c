/*
 * XREFs of VerifierIoInitializeRemoveLockEx @ 0x140ACF620
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlReserveNode @ 0x140303910 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140303A48 (VfAvlInsertReservedTreeNode.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140ACF8CC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140ACF978 (ViRemLockFindSurrogate.c)
 */

void __fastcall VerifierIoInitializeRemoveLockEx(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 Surrogate; // rax
  __int64 v10; // rbp
  int v11; // r14d
  char *v12; // rax
  char *v13; // rbp
  void *v14; // rcx
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF

  v15 = 0LL;
  if ( !ViRemLockInitialized )
    goto LABEL_14;
  Surrogate = ViRemLockFindSurrogate();
  if ( Surrogate )
  {
    if ( (VfRuleClasses & 0x10) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xD7uLL, Surrogate + 16, BugCheckParameter3, 0LL);
    _InterlockedAdd(&ViRemLockReusedCount, 1u);
    v10 = a5;
    ViRemLockDeleteFirstTreeNode(BugCheckParameter3, a5);
  }
  else
  {
    v10 = a5;
  }
  v11 = 0;
  if ( (MmVerifierData & 0x10) == 0 )
    goto LABEL_14;
  v12 = VfAvlReserveNode(&ViRemLockAvl, BugCheckParameter3, v10);
  v13 = v12;
  if ( !v12 )
  {
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
LABEL_14:
    ((void (__fastcall *)(ULONG_PTR, _QWORD, _QWORD, _QWORD, unsigned int))pXdvIoInitializeRemoveLockEx)(
      BugCheckParameter3,
      a2,
      a3,
      a4,
      a5);
    return;
  }
  v14 = v12 + 16;
  if ( a5 == 120 )
  {
    memset(v14, 0, 0x78uLL);
  }
  else
  {
    ((void (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, int))pXdvIoInitializeRemoveLockEx)(v14, a2, a3, a4, 120);
    v11 = 1;
  }
  VfAvlInitializeLockContext((__int64)&v15, 0);
  VfAvlInsertReservedTreeNode((__int64)&ViRemLockAvl, (__int64)&v15, v13);
  VfAvlCleanupLockContext((__int64)&v15);
  if ( !v11 )
    goto LABEL_14;
}
