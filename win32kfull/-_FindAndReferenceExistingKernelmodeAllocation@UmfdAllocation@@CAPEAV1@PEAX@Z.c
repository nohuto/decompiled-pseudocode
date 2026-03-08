/*
 * XREFs of ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C00C4600
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00C3FAC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1C00C42A0 (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00D7674 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

struct UmfdAllocation *__fastcall UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  struct NSInstrumentation::CPointerHashTable::ENTRY *v5; // rax
  struct NSInstrumentation::CPointerHashTable::ENTRY *v6; // rsi
  __int64 v8; // r8

  v1 = 0LL;
  v3 = 0LL;
  v4 = **(_QWORD **)(SGDGetSessionState(a1) + 40);
  while ( 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 24));
    if ( !*(_DWORD *)(v4 + 28) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v4);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    ExReleasePushLockSharedEx(v4, 0LL, v8);
    KeLeaveCriticalRegion();
  }
  v5 = NSInstrumentation::CPointerHashTable::LookupCommon((NSInstrumentation::CPointerHashTable *)v4, a1);
  v6 = v5;
  if ( v5 )
    v3 = *((_QWORD *)v5 + 1);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v4);
  if ( v6 )
  {
    v1 = v3 - 28;
    ++*(_DWORD *)(v3 - 28);
  }
  return (struct UmfdAllocation *)v1;
}
