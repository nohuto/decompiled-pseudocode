/*
 * XREFs of ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C0080FE8
 * Callers:
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00810C4 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreateWaitedConsumerReturnForConsumer@CFlipManager@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C0082E10 (-CreateWaitedConsumerReturnForConsumer@CFlipManager@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::CreateWaitedConsumerReturnForConsumer(
        FlipManagerObject *this,
        unsigned __int64 a2,
        struct CFlipWaitedConsumerReturn **a3)
{
  CPushLock *v3; // rdi
  CFlipManager *v6; // rcx
  int WaitedConsumerReturnForConsumer; // ebx

  v3 = (FlipManagerObject *)((char *)this + 40);
  WaitedConsumerReturnForConsumer = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( WaitedConsumerReturnForConsumer >= 0 )
  {
    WaitedConsumerReturnForConsumer = CFlipManager::CreateWaitedConsumerReturnForConsumer(v6, a2, a3);
    CPushLock::ReleaseLock(v3);
  }
  return (unsigned int)WaitedConsumerReturnForConsumer;
}
