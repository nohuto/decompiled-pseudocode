/*
 * XREFs of ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C017BD3C
 * Callers:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C017ADD8 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ??$Enumerate@P6AXPEAX00@Z@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C017B318 (--$Enumerate@P6AXPEAX00@Z@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTrace.c)
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C017B6CC (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C017B8C4 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(
        NSInstrumentation::CPrioritizedWriterLock *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) <= 1
    && *((_DWORD *)this + 7)
    && _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 1, 0) == -1 )
  {
    _InterlockedExchange((volatile __int32 *)this + 4, 1);
    KeSetEvent(*((PRKEVENT *)this + 1), 0, 0);
  }
}
