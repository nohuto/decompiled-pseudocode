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
