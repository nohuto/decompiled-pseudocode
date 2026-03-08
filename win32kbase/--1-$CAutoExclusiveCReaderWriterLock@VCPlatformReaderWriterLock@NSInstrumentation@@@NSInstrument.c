/*
 * XREFs of ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C0153458
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0029F24 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C002A3B0 (-Allocate@-$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0053290 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(
        _QWORD *a1)
{
  ExReleasePushLockExclusiveEx(*a1, 0LL);
  KeLeaveCriticalRegion();
}
