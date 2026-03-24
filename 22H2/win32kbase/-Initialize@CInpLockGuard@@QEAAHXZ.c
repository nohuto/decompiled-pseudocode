/*
 * XREFs of ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C006CCE4
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C006CB90 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C008AD94 (--0CTouchProcessor@@QEAA@XZ.c)
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C008C1FC (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInpLockGuard::Initialize(CInpLockGuard *this)
{
  struct _ERESOURCE *PoolWithTag; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  *(_QWORD *)this = PoolWithTag;
  if ( PoolWithTag && ExInitializeResourceLite(PoolWithTag) >= 0 )
    return 1LL;
  if ( *(_QWORD *)this )
  {
    ExFreePoolWithTag(*(PVOID *)this, 0);
    *(_QWORD *)this = 0LL;
  }
  return 0LL;
}
