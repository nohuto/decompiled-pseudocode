/*
 * XREFs of ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0080F4C
 * Callers:
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00811E8 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0082C58 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 */

__int64 __fastcall FlipManagerObject::CreatePresentUpdateForProducer(
        FlipManagerObject *this,
        bool a2,
        unsigned __int64 a3,
        bool a4,
        struct CFlipPropertySet *a5,
        struct CFlipPresentUpdate **a6,
        struct FlipManagerTokenIFlipInfo **a7)
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
                                 a6,
                                 a7);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)PresentUpdateForProducer;
}
