void __fastcall CInteractionContextWrapper::~CInteractionContextWrapper(CInteractionContextWrapper *this)
{
  *(_QWORD *)this = &CInteractionContextWrapper::`vftable';
  if ( *((_QWORD *)this + 2) )
  {
    DestroyInteractionContext();
    *((_QWORD *)this + 2) = 0LL;
    CInteractionContextWrapper::ResetBufferedOutput(this);
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((char *)this + 600);
  CQueue<CBufferedInteractionOutput *>::~CQueue<CBufferedInteractionOutput *>((char *)this + 536);
}
