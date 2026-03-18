/*
 * XREFs of GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0022C80
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00D9974 (-Allocate@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D9A48 (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00D9E04 (-Free@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreEnterCriticalRegionAndAcquirePushLockExclusive(__int64 a1)
{
  KeEnterCriticalRegion();
  return ExAcquirePushLockExclusiveEx(a1, 0LL);
}
