/*
 * XREFs of ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C006A2BC
 * Callers:
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C006A568 (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerToke.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00118B4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C006B100 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 */

__int64 __fastcall FlipManagerObject::CreatePresentUpdateForProducer(
        FlipManagerObject *this,
        bool a2,
        bool a3,
        unsigned __int64 a4,
        struct CFlipPropertySet *a5,
        struct CFlipPresentUpdate **a6)
{
  int PresentUpdateForProducer; // ebx

  PresentUpdateForProducer = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( PresentUpdateForProducer >= 0 )
  {
    PresentUpdateForProducer = CFlipManager::CreatePresentUpdateForProducer(
                                 (FlipManagerObject *)((char *)this + 32),
                                 a2,
                                 a3,
                                 a4,
                                 a5,
                                 a6);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)PresentUpdateForProducer;
}
