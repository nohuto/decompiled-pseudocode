/*
 * XREFs of ?DepartBufferedOutputPointer@CInteractionContextWrapper@@UEAA_NI@Z @ 0x180280D70
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x180280DF8 (-FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z.c)
 */

bool __fastcall CInteractionContextWrapper::DepartBufferedOutputPointer(
        CInteractionContextWrapper *this,
        unsigned int a2)
{
  struct CBufferedOutputPointer *BufferedOutputPointer; // rax

  BufferedOutputPointer = CInteractionContextWrapper::FindBufferedOutputPointer(this, a2);
  if ( BufferedOutputPointer )
  {
    *((_BYTE *)BufferedOutputPointer + 4) = 1;
    LOBYTE(BufferedOutputPointer) = 1;
  }
  return (char)BufferedOutputPointer;
}
