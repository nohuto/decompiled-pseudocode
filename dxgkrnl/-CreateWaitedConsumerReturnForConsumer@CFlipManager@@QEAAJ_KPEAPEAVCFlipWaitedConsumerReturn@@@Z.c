/*
 * XREFs of ?CreateWaitedConsumerReturnForConsumer@CFlipManager@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C0082E10
 * Callers:
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C0080FE8 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManager::CreateWaitedConsumerReturnForConsumer(
        CFlipManager *this,
        __int64 a2,
        struct CFlipWaitedConsumerReturn **a3)
{
  struct CFlipWaitedConsumerReturn *Pool2; // rax

  Pool2 = (struct CFlipWaitedConsumerReturn *)ExAllocatePool2(257LL, 24LL, 1920418630LL);
  if ( Pool2 )
  {
    *((_QWORD *)Pool2 + 1) = 0LL;
    *(_QWORD *)Pool2 = &CFlipWaitedConsumerReturn::`vftable';
    *((_QWORD *)Pool2 + 2) = a2;
  }
  *a3 = Pool2;
  return Pool2 == 0LL ? 0xC0000017 : 0;
}
