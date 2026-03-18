/*
 * XREFs of ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0089AF0
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D9A48 (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D9EB8 (-Free@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?IsAllocationBusy@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00DAFCC (-IsAllocationBusy@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NPEAX@Z.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0148BC0 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(
        NSInstrumentation::CPlatformReaderWriterLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
}
