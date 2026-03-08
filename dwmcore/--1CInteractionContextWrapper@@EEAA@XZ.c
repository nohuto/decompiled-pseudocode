/*
 * XREFs of ??1CInteractionContextWrapper@@EEAA@XZ @ 0x180039F6C
 * Callers:
 *     ??_GCInteractionContextWrapper@@EEAAPEAXI@Z @ 0x180039FC0 (--_GCInteractionContextWrapper@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1800F8BD0 (-RemoveAll@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@.c)
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180281B40 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 */

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
