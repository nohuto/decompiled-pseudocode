/*
 * XREFs of ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C00AB530
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ @ 0x1C00AB634 (-InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputSink::MarkInvalid(CInputSink *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CInputSink *))this)(this) )
  {
    CInputSink::InvalidateAndReleaseQueues(this);
    CPushLock::AcquireLockExclusive((CInputSink *)((char *)this + 8));
    *((_BYTE *)this + 24) = 0;
    CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  }
}
