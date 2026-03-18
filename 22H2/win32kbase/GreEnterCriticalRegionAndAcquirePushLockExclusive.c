/*
 * XREFs of GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0044300
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00D1960 (-Allocate@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D1A34 (-Allocate@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00D1DE8 (-Free@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreEnterCriticalRegionAndAcquirePushLockExclusive(__int64 a1)
{
  KeEnterCriticalRegion();
  return ExAcquirePushLockExclusiveEx(a1, 0LL);
}
